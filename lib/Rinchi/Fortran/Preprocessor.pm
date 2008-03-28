package Rinchi::Fortran::Preprocessor;

use 5.008001;
use strict;
use warnings;
use Carp;

require Exporter;

our @ISA = qw(Exporter);

# Items to export into callers namespace by default. Note: do not export
# names by default without a very good reason. Use EXPORT_OK instead.
# Do not simply export all your public functions/methods/constants.

# This allows declaration	use Rinchi::Fortran::Preprocessor ':all';
# If you do not need this, moving things directly into @EXPORT or @EXPORT_OK
# will save memory.
our %EXPORT_TAGS = ( 'all' => [ qw(
	
) ] );

our @EXPORT_OK = ( @{ $EXPORT_TAGS{'all'} } );

our @EXPORT = qw(
	
);

our $VERSION = '0.01';

require XSLoader;
XSLoader::load('Rinchi::Fortran::Preprocessor', $VERSION);

our %Handler_Setters = (
                    Start => \&SetStartElementHandler,
                    End   => \&SetEndElementHandler,
                    Char  => \&SetCharacterDataHandler,
                    Proc  => \&SetProcessingInstructionHandler,
                    Comment => \&SetCommentHandler,
                    CdataStart => \&SetStartCdataHandler,
                    CdataEnd   => \&SetEndCdataHandler,
                    XMLDecl => \&SetXMLDeclHandler
                    );
=head1 NAME

Rinchi::Fortran::Preprocessor - An Fortran to XML preprocessor extension for 
preprocessing Fortran files producing XML SAX parser events for the tokens 
scanned.

=head1 SYNOPSIS

 use Rinchi::Fortran::Preprocessor;

 my @args = (
   'test.pl',
   '-I/usr/include',
   '-Uccc',
 );

 my $closed = 0;

 my $cpp = new Rinchi::Fortran::Preprocessor;
 $cpp->setHandlers('Start'      => \&startElementHandler,
                   'End'        => \&endElementHandler,
                   'Char'       => \&characterDataHandler,
                   'Proc'       => \&processingInstructionHandler,
                   'Comment'    => \&commentHandler,
                   'CdataStart' => \&startCdataHandler,
                   'CdataEnd'   => \&endCdataHandler,
                   'XMLDecl'    => \&xmlDeclHandler,
                   );

 $cpp->process_file('test_src/include_test_1.h',\@args);

 sub startElementHandler() {
   my ($tag, $hasChild, %attrs) = @_;
   print "<$tag";
   foreach my $attr (sort keys %attrs) {
     my $val = $attrs{$attr};
     $val =~ s/&/&amp;/g;
     $val =~ s/</&lt;/g;
     $val =~ s/>/&gt;/g;
     $val =~ s/\"/&quot;/g;
     $val =~ s/\'/&apos;/g;
     print " $attr=\"$val\"";
   }
   if ($hasChild == 0) {
     print " />";
     $closed = 1;
   } else {
     print ">";
     $closed = 0;
   }
 }

 sub endElementHandler() {
   my ($tag) = @_;
   if ($closed == 0) {
     print "</$tag>\n";
   } else {
     $closed = 0;
   }
 }

 sub characterDataHandler() {
   my ($cdata) = @_;
   print $cdata;
 }

 sub processingInstructionHandler() {
   my ($target,$data) = @_;
   print "<?$target $data?>\n";
 }

 sub commentHandler() {
   my ($string) = @_;
   print "<!-- $string -->\n";
 }

 sub startCdataHandler() {
   print "<![CDATA[";
 }

 sub endCdataHandler() {
    print "]]>";
 }

 sub xmlDeclHandler() {
   my ($version, $encoding, $standalone) = @_;
   print "<?xml version=\"$version\" encoding=\"$encoding\" standalone=\"$standalone\"?>\n";
 }

=head1 DESCRIPTION

This module provides an interface to a Fortran preprocessor.

=head2 EXPORT

None by default.

=head1 METHODS

=over 4

=item new

Constructor for Fortran::Preprocessor. Options are TBD.

=cut

sub new {
  my ($class, %args) = @_;
  my $self = bless \%args, $class;
  $args{'_State_'} = 0;
  $args{'Context'} = [];
  $args{'ErrorMessage'} ||= '';
  $args{'_Setters'} = \%Handler_Setters;
#  $args{Parser} = ParserCreate($self, $args{ProtocolEncoding},
#                               $args{Namespaces});
  $self;
}

=item setHandlers(TYPE, HANDLER [, TYPE, HANDLER [...]])

This method registers handlers for the various events.

Setting a handler to something that evaluates to false unsets that
handler.

This method returns a list of type, handler pairs corresponding to the
input. The handlers returned are the ones that were in effect before the
call to setHandlers.

The recognized events and the parameters passed to the corresponding
handlers are:

=over 4

=item * Start             (tagname, hasChild [, attrName, attrValue [,...]])

  my ($tag, $hasChild, %attrs) = @_;
  print "<$tag";
  foreach my $attr (sort keys %attrs) {
    my $val = $attrs{$attr};
    $val =~ s/&/&amp;/g;
    $val =~ s/</&lt;/g;
    $val =~ s/>/&gt;/g;
    $val =~ s/\"/&quot;/g;
    $val =~ s/\'/&apos;/g;
    print " $attr=\"$val\"";
  }
  print ">\n";

This event is generated when an XML start tag is recognized. Parameter tagname 
is the name of the XML element that is opened with the start tag. Parameter 
hasChild indicates the presence of contained nodes. The attrName 
and attrValue pairs are generated for each attribute in the start tag.

=item * End               (tagname)

  my ($tag) = @_;
  print "</$tag>\n";

This event is generated when an XML end tag is recognized. Note that
an XML empty tag (<tagname/>) generates both a start and an end event.

=item * Char              (String)

  my ($cdata) = @_;
  print $cdata;

This event is generated when non-markup is recognized. The non-markup
sequence of characters is in String. A single non-markup sequence of
characters may generate multiple calls to this handler. Whatever the
encoding of the string in the original document, this is given to the
handler in UTF-8.

=item * Proc              (target, data)

  my ($target,$data) = @_;
  print "<?$target $data?>\n";

This event is generated when a processing instruction is created. Processing 
instructions are used to convey locations and error messages.

=item * Comment           (String)

  my ($string) = @_;
  print "<!-- $string -->\n";

This event is generated when a comment is recognized.

=item * CdataStart        ()

  print "<![CDATA[";

This is called at the start of a CDATA section.

=item * CdataEnd          ()

   print "]]>";

This is called at the end of a CDATA section.

=item * XMLDecl           (Version, Encoding, Standalone)

This handler is called for XML declarations. Version is a string containing
the version. Encoding is either undefined or contains an encoding string.
Standalone is either undefined, or true or false. Undefined indicates
that no standalone parameter was given in the XML declaration. True or
false indicates "yes" or "no" respectively.

=back

=cut

sub setHandlers {
  my ($self, @handler_pairs) = @_;

  croak("Uneven number of arguments to setHandlers method")
    if (int(@handler_pairs) & 1);

  my @ret;

  while (@handler_pairs) {
    my $type = shift @handler_pairs;
    my $handler = shift @handler_pairs;
   croak "Handler for $type not a Code ref"
     unless (! defined($handler) or ! $handler or ref($handler) eq 'CODE');

    my $hndl = $self->{_Setters}->{$type};

    unless (defined($hndl)) {
      my @types = sort keys %{$self->{_Setters}};
      croak("Unknown handler type: $type\n Valid types: @types");
    }

    &$hndl($handler);
#    push (@ret, $type, $old);
  }

#  return @ret;
}

sub process_file {
  my ($self, $path, $args) = @_;
  if (defined($args) and ref($args) eq 'ARRAY') {
    ProcessFileArg($path,$args);
  } else {
    ProcessFile($path);
  }
}

# Preloaded methods go here.

1;
__END__

=item Macro Expansion:

This Perl extension has been tested to meet the requirements set forth in 
ISO/IEC 14882:2003(E) with the exception of preservation of white in some 
cases. This is not really a result of the macro expansion, but the elimination 
of most white space as unnecessary in the XML output.

=item XML Elements produced:

The following is a partial list of the elements produced.  See the DTD for the complete details.

=over 4

 translation_unit
 predefined_macro
 object_macro
 command_line
 include_directory
 use_on_code
 preprocessing_file
 identifier
 replaced_identifier

=back

=item Locations:

Locations are reported as processing instructions as shown in the following 
example, which indicates line 352 of file /usr/include/features.h.

<?location "/usr/include/features.h" 352?>

=item Use on code:

This preprocessor includes an extension designed to facilitate the maintenance 
of multiple configurations in a single file, use on code. To apply use on 
codes, defined a code for each configuration as shown in the following example:

=over 4

 lin  Linux
 gnu  GNU/Linux
 unx  Unix
 wno  Windows

=back

Each source line that is not applicable to all configuration can then be tagged using the following method:

=over 4

 int result;  // Always

 result = soundApproach(); //{lin,gnu} // For Linux or GNU/Linux
 result = okApproach(); //{unx}  // For Unix
 result = problematic(); //{wno}  // For Windows

 return result;  // Always

=back

Configurations are selected by supplying the desired use on codes in the 
argument list passed to the process_file method.  For example "-Ulin" would 
select all common lines and all those tagged with lin.  Since use on codes are 
examined before any other parsing takes place, preprocessing instructions may 
be tagged.  Multiple -U arguments result in "or"ing the results.

=head1 SEE ALSO

XML::Parser

=head1 AUTHOR

Brian M. Ames, E<lt>bames@apk.netE<gt>

=head1 COPYRIGHT AND LICENSE

Copyright (C) 2008 by Brian M. Ames

This library is free software; you can redistribute it and/or modify
it under the same terms as Perl itself, either Perl version 5.8.8 or,
at your option, any later version of Perl 5 you may have available.

=cut
