BEGIN { 
push @INC,'/home/bames/rinchi/Rinchi-Fortran-Preprocessor/blib/lib';
push @INC,'/home/bames/rinchi/Rinchi-Fortran-Preprocessor/blib/arch'; 
}

use strict;
use Rinchi::Fortran::Preprocessor;

my %new_line = (
  'command_line' => 3,
  'include_directory' => 3,
  'object_macro' => 1,
  'predefined_macro' => 3,
  'preprocessing_file' => 3,
  'translation_unit' => 3,
  'use_on_code' => 3,
);


my $TD_ROOT = '/home/bames/ArchiveServer/Source/ownship';
my $SIM_ROOT = '/home/bames/ArchiveServer/Source/ownship/executive/sim';

my @args = (
  'test.pl',
  '-I/usr/include',
#  "-I$SIM_ROOT/src/general_util",
#  "-I$SIM_ROOT/src/general_util/general_util_multi_lang_support",
#  "-I$SIM_ROOT/src/training_controller",
#  '-I$SIM_ROOT/src/util/legacy_subsystem',
#  "-I$TD_ROOT/utilities/mux",
#  "-I$TD_ROOT/utilities/fw",
#  "-I$TD_ROOT/utilities/project_util",
  "-C",
#  '-Uaaa',
#  '--debug',
);

my $closed = 0;

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
    if($new_line{$tag} & 1) {
      print "\n";
    }
  } else {
    print ">";
    $closed = 0;
    if($new_line{$tag} & 2) {
      print "\n";
    }
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
#  print 'xmlDeclHandler',@_,"\n";
  my ($version, $encoding, $standalone) = @_;
  print "<?xml version=\"$version\" encoding=\"$encoding\" standalone=\"$standalone\"?>\n";
}

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
#$cpp->process_file("$TD_ROOT/utilities/mux/INS_MUX_IN.H",\@args);
#$cpp->process_file("$TD_ROOT/subsystems/ins/ins_import.f",\@args);
$cpp->process_file("/home/bames/project/rinchi/Rinchi-Fortran-Preprocessor/test_src/bisect.f90",\@args);
