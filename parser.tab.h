/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ECS_NULL = 258,
     ASC_SOH = 259,
     ASC_STX = 260,
     ASC_ETX = 261,
     ASC_EOT = 262,
     ASC_ENQ = 263,
     ASC_ACK = 264,
     ECS_ALERT = 265,
     ECS_BACKSPACE = 266,
     BCS_WHTSP_TAB = 267,
     BCS_WHTSP_NEWLINE = 268,
     BCS_WHTSP_VERTICAL_TAB = 269,
     BCS_WHTSP_FORMFEED = 270,
     ECS_CARRIAGE_RETURN = 271,
     ASC_SHIFT_OUT = 272,
     ASC_SHIFT_IN = 273,
     ASC_DLE = 274,
     ASC_DC1 = 275,
     ASC_DC2 = 276,
     ASC_DC3 = 277,
     ASC_DC4 = 278,
     ASC_NAK = 279,
     ASC_SYN = 280,
     ASC_ETB = 281,
     ASC_CAN = 282,
     ASC_EM = 283,
     ASC_SUB = 284,
     ASC_ESC = 285,
     ASC_IS4 = 286,
     ASC_IS3 = 287,
     ASC_IS2 = 288,
     ASC_IS1 = 289,
     BCS_WHTSP_SPACE = 290,
     BCS_PUNCT_EXCLAMATION = 291,
     BCS_PUNCT_QUOTE = 292,
     BCS_PUNCT_HASH = 293,
     ASC_DOLLAR_SIGN = 294,
     BCS_PUNCT_PERCENT = 295,
     BCS_PUNCT_AMPERSAND = 296,
     BCS_PUNCT_APOSTROPHE = 297,
     BCS_PUNCT_OPEN_PARENTHESIS = 298,
     BCS_PUNCT_CLOSE_PARENTHESIS = 299,
     BCS_PUNCT_ASTERISK = 300,
     BCS_PUNCT_PLUS = 301,
     BCS_PUNCT_COMMA = 302,
     BCS_PUNCT_MINUS = 303,
     BCS_PUNCT_PERIOD = 304,
     BCS_PUNCT_SLASH = 305,
     BCS_DIGIT_0 = 306,
     BCS_DIGIT_1 = 307,
     BCS_DIGIT_2 = 308,
     BCS_DIGIT_3 = 309,
     BCS_DIGIT_4 = 310,
     BCS_DIGIT_5 = 311,
     BCS_DIGIT_6 = 312,
     BCS_DIGIT_7 = 313,
     BCS_DIGIT_8 = 314,
     BCS_DIGIT_9 = 315,
     BCS_PUNCT_COLON = 316,
     BCS_PUNCT_SEMICOLON = 317,
     BCS_PUNCT_LESS_THAN = 318,
     BCS_PUNCT_EQUAL = 319,
     BCS_PUNCT_GREATER_THAN = 320,
     BCS_PUNCT_QUESTION = 321,
     ASC_AT_SIGN = 322,
     BCS_UPPER_A = 323,
     BCS_UPPER_B = 324,
     BCS_UPPER_C = 325,
     BCS_UPPER_D = 326,
     BCS_UPPER_E = 327,
     BCS_UPPER_F = 328,
     BCS_UPPER_G = 329,
     BCS_UPPER_H = 330,
     BCS_UPPER_I = 331,
     BCS_UPPER_J = 332,
     BCS_UPPER_K = 333,
     BCS_UPPER_L = 334,
     BCS_UPPER_M = 335,
     BCS_UPPER_N = 336,
     BCS_UPPER_O = 337,
     BCS_UPPER_P = 338,
     BCS_UPPER_Q = 339,
     BCS_UPPER_R = 340,
     BCS_UPPER_S = 341,
     BCS_UPPER_T = 342,
     BCS_UPPER_U = 343,
     BCS_UPPER_V = 344,
     BCS_UPPER_W = 345,
     BCS_UPPER_X = 346,
     BCS_UPPER_Y = 347,
     BCS_UPPER_Z = 348,
     BCS_PUNCT_OPEN_BRACKET = 349,
     BCS_PUNCT_BACKSLASH = 350,
     BCS_PUNCT_CLOSE_BRACKET = 351,
     BCS_PUNCT_CARET = 352,
     BCS_PUNCT_UNDERSCORE = 353,
     BCS_LOWER_A = 354,
     BCS_LOWER_B = 355,
     BCS_LOWER_C = 356,
     BCS_LOWER_D = 357,
     BCS_LOWER_E = 358,
     BCS_LOWER_F = 359,
     BCS_LOWER_G = 360,
     BCS_LOWER_H = 361,
     BCS_LOWER_I = 362,
     BCS_LOWER_J = 363,
     BCS_LOWER_K = 364,
     BCS_LOWER_L = 365,
     BCS_LOWER_M = 366,
     BCS_LOWER_N = 367,
     BCS_LOWER_O = 368,
     BCS_LOWER_P = 369,
     BCS_LOWER_Q = 370,
     BCS_LOWER_R = 371,
     BCS_LOWER_S = 372,
     BCS_LOWER_T = 373,
     BCS_LOWER_U = 374,
     BCS_LOWER_V = 375,
     BCS_LOWER_W = 376,
     BCS_LOWER_X = 377,
     BCS_LOWER_Y = 378,
     BCS_LOWER_Z = 379,
     BCS_PUNCT_OPEN_BRACE = 380,
     BCS_PUNCT_VERTICAL_BAR = 381,
     BCS_PUNCT_CLOSE_BRACE = 382,
     BCS_PUNCT_TILDE = 383,
     ASC_DEL = 384,
     ALT_PUNCT_OPEN_BRACE = 385,
     ALT_PUNCT_CLOSE_BRACE = 386,
     ALT_PUNCT_OPEN_BRACKET = 387,
     ALT_PUNCT_CLOSE_BRACKET = 388,
     ALT_PUNCT_HASH = 389,
     PUNC_DBL_COLON = 390,
     PUNC_ARROW = 391,
     KWD_ABSTRACT = 392,
     KWD_ABSTRACT_INTERFACE = 393,
     KWD_ACCESS = 394,
     KWD_ACTION = 395,
     KWD_ADVANCE = 396,
     KWD_ALLOCATABLE = 397,
     KWD_ALLOCATE = 398,
     KWD_ASSIGN = 399,
     KWD_ASSOCIATE = 400,
     KWD_ASYNCHRONOUS = 401,
     KWD_BACKSPACE = 402,
     KWD_BIND = 403,
     KWD_BLANK = 404,
     KWD_BLOCK = 405,
     KWD_BLOCK_DATA = 406,
     KWD_CALL = 407,
     KWD_CASE = 408,
     KWD_CHARACTER = 409,
     KWD_CLASS = 410,
     KWD_CLASS_DEFAULT = 411,
     KWD_CLASS_IS = 412,
     KWD_CLOSE = 413,
     KWD_COMMON = 414,
     KWD_COMPLEX = 415,
     KWD_CONTAINS = 416,
     KWD_CONTIGUOUS = 417,
     KWD_CONTINUE = 418,
     KWD_CYCLE = 419,
     KWD_DATA = 420,
     KWD_DEALLOCATE = 421,
     KWD_DEFAULT = 422,
     KWD_DEFERRED = 423,
     KWD_DIMENSION = 424,
     KWD_DIRECT = 425,
     KWD_DO = 426,
     KWD_DOUBLE = 427,
     KWD_DOUBLE_COMPLEX = 428,
     KWD_DOUBLE_PRECISION = 429,
     KWD_ELEMENTAL = 430,
     KWD_ELSE = 431,
     KWD_ELSE_IF = 432,
     KWD_ELSE_WHERE = 433,
     KWD_ENCODING = 434,
     KWD_END = 435,
     KWD_END_ASSOCIATE = 436,
     KWD_END_BLOCK = 437,
     KWD_END_BLOCK_DATA = 438,
     KWD_END_DO = 439,
     KWD_END_ENUM = 440,
     KWD_END_FILE = 441,
     KWD_END_FORALL = 442,
     KWD_END_FUNCTION = 443,
     KWD_END_IF = 444,
     KWD_END_INTERFACE = 445,
     KWD_END_MODULE = 446,
     KWD_END_PROCEDURE = 447,
     KWD_END_PROGRAM = 448,
     KWD_END_SELECT = 449,
     KWD_END_SUBMODULE = 450,
     KWD_END_SUBROUTINE = 451,
     KWD_END_TYPE = 452,
     KWD_END_WHERE = 453,
     KWD_ENTRY = 454,
     KWD_EOR = 455,
     KWD_EQUIVALENCE = 456,
     KWD_ERR = 457,
     KWD_ERRMSG = 458,
     KWD_EXIST = 459,
     KWD_EXIT = 460,
     KWD_EXTENDS = 461,
     KWD_EXTENSIBLE = 462,
     KWD_EXTERNAL = 463,
     KWD_FALSE = 464,
     KWD_FILE = 465,
     KWD_FINAL = 466,
     KWD_FLUSH = 467,
     KWD_FMT = 468,
     KWD_FORALL = 469,
     KWD_FORM = 470,
     KWD_FORMAT = 471,
     KWD_FORMATTED = 472,
     KWD_FUNCTION = 473,
     KWD_GENERIC = 474,
     KWD_GOTO = 475,
     KWD_IF = 476,
     KWD_IMPLICIT = 477,
     KWD_IMPLICIT_NONE = 478,
     KWD_IMPORT = 479,
     KWD_IMPURE = 480,
     KWD_IN = 481,
     KWD_IN_OUT = 482,
     KWD_INCLUDE = 483,
     KWD_INQUIRE = 484,
     KWD_INTEGER = 485,
     KWD_INTENT = 486,
     KWD_INTERFACE = 487,
     KWD_INTRINSIC = 488,
     KWD_IOSTAT = 489,
     KWD_IOMSG = 490,
     KWD_KIND = 491,
     KWD_LET = 492,
     KWD_LOGICAL = 493,
     KWD_MODULE = 494,
     KWD_MOLD = 495,
     KWD_NAME = 496,
     KWD_NAMED = 497,
     KWD_NAMELIST = 498,
     KWD_NEXTREC = 499,
     KWD_NON_INTRINSIC = 500,
     KWD_NON_OVERRIDABLE = 501,
     KWD_NONKIND = 502,
     KWD_NONE = 503,
     KWD_NOPASS = 504,
     KWD_NULLIFY = 505,
     KWD_NUMBER = 506,
     KWD_OPEN = 507,
     KWD_OPENED = 508,
     KWD_OPERATOR = 509,
     KWD_OPTIONAL = 510,
     KWD_OUT = 511,
     KWD_PAD = 512,
     KWD_PARAMETER = 513,
     KWD_PASS = 514,
     KWD_PAUSE = 515,
     KWD_PENDING = 516,
     KWD_POINTER = 517,
     KWD_POSITION = 518,
     KWD_PRECISION = 519,
     KWD_PRINT = 520,
     KWD_PRIVATE = 521,
     KWD_PROCEDURE = 522,
     KWD_PROGRAM = 523,
     KWD_PROTECTED = 524,
     KWD_PUBLIC = 525,
     KWD_PURE = 526,
     KWD_READ = 527,
     KWD_READ_FORMATTED = 528,
     KWD_READ_UNFORMATTED = 529,
     KWD_READWRITE = 530,
     KWD_REAL = 531,
     KWD_REC = 532,
     KWD_RECL = 533,
     KWD_RETURN = 534,
     KWD_REWIND = 535,
     KWD_ROUND = 536,
     KWD_SAVE = 537,
     KWD_SELECT_CASE = 538,
     KWD_SELECT_TYPE = 539,
     KWD_SEQUENCE = 540,
     KWD_SEQUENTIAL = 541,
     KWD_SIGN = 542,
     KWD_SIZE = 543,
     KWD_SOURCE = 544,
     KWD_STATUS = 545,
     KWD_STOP = 546,
     KWD_STREAM = 547,
     KWD_SUBMODULE = 548,
     KWD_SUBROUTINE = 549,
     KWD_TARGET = 550,
     KWD_THEN = 551,
     KWD_TRUE = 552,
     KWD_TYPE = 553,
     KWD_UNFORMATTED = 554,
     KWD_UNIT = 555,
     KWD_USE = 556,
     KWD_VALUE = 557,
     KWD_VOLATILE = 558,
     KWD_WHERE = 559,
     KWD_WRITE = 560,
     KWD_WRITE_FORMATTED = 561,
     KWD_WRITE_UNFORMATTED = 562,
     PPD_NULL = 563,
     PPD_DEFINE = 564,
     PPD_ELIF = 565,
     PPD_ELSE = 566,
     PPD_ENDIF = 567,
     PPD_ERROR = 568,
     PPD_WARNING = 569,
     PPD_IF = 570,
     PPD_IFDEF = 571,
     PPD_IFNDEF = 572,
     PPD_INCLUDE = 573,
     PPD_LINE = 574,
     PPD_PRAGMA = 575,
     PPD_UNDEF = 576,
     OP_LOGICAL_NOT = 577,
     OP_NE = 578,
     OP_STRINGIZE = 579,
     OP_TOKEN_SPLICE = 580,
     OP_MODULO = 581,
     ALT_OP_TOKEN_SPLICE = 582,
     OP_ASSIGN_MODULO = 583,
     OP_BIT_AND = 584,
     OP_ADDRESS = 585,
     OP_LOGICAL_AND = 586,
     OP_ASSIGN_BIT_AND = 587,
     OP_DEREFERENCE = 588,
     OP_MULTIPLY = 589,
     OP_ASSIGN_MULTIPLY = 590,
     OP_PLUS = 591,
     OP_INCREMENT = 592,
     OP_ASSIGN_PLUS = 593,
     OP_MINUS = 594,
     OP_DECREMENT = 595,
     OP_ASSIGN_MINUS = 596,
     OP_POINTER_MEMBER = 597,
     OP_POINTER_POINTER_TO_MEMBER = 598,
     OP_OBJECT_MEMBER = 599,
     OP_OBJECT_POINTER_TO_MEMBER = 600,
     OP_DIVIDE = 601,
     OP_ASSIGN_DIVIDE = 602,
     OP_ELSE = 603,
     OP_LT = 604,
     OP_SHIFT_LEFT = 605,
     OP_ASSIGN_SHIFT_LEFT = 606,
     OP_LE = 607,
     OP_ASSIGN = 608,
     OP_EQ = 609,
     OP_GT = 610,
     OP_GE = 611,
     OP_SHIFT_RIGHT = 612,
     OP_ASSIGN_SHIFT_RIGHT = 613,
     OP_CONDITIONAL = 614,
     OP_BIT_PLUS = 615,
     OP_ASSIGN_BIT_PLUS = 616,
     OP_BIT_OR = 617,
     OP_ASSIGN_BIT_OR = 618,
     OP_LOGICAL_OR = 619,
     OP_BIT_NOT = 620,
     OP_ALT_LOGICAL_AND = 621,
     OP_ALT_ASSIGN_BIT_AND = 622,
     OP_ALT_BIT_AND = 623,
     OP_ALT_BIT_OR = 624,
     OP_ALT_BIT_NOT = 625,
     OP_ALT_LOGICAL_NOT = 626,
     OP_ALT_NE = 627,
     OP_ALT_LOGICAL_OR = 628,
     OP_ALT_ASSIGN_BIT_OR = 629,
     OP_ALT_BIT_PLUS = 630,
     OP_ALT_ASSIGN_BIT_PLUS = 631,
     OPEN_PARENTHESIS_SLASH = 632,
     CLOSE_PARENTHESIS_SLASH = 633,
     INV_ALT_LOGICAL_AND = 634,
     INV_ALT_ASSIGN_BIT_AND = 635,
     INV_ALT_BIT_AND = 636,
     INV_ALT_BIT_OR = 637,
     INV_ALT_BIT_NOT = 638,
     INV_ALT_LOGICAL_NOT = 639,
     INV_ALT_NE = 640,
     INV_ALT_LOGICAL_OR = 641,
     INV_ALT_ASSIGN_BIT_OR = 642,
     INV_ALT_BIT_PLUS = 643,
     INV_ALT_ASSIGN_BIT_PLUS = 644,
     INV_MFI_LOGICAL_AND = 645,
     INV_MFI_ASSIGN_BIT_AND = 646,
     INV_MFI_BIT_AND = 647,
     INV_MFI_BIT_OR = 648,
     INV_MFI_BIT_NOT = 649,
     INV_MFI_LOGICAL_NOT = 650,
     INV_MFI_NE = 651,
     INV_MFI_LOGICAL_OR = 652,
     INV_MFI_ASSIGN_BIT_OR = 653,
     INV_MFI_BIT_PLUS = 654,
     INV_MFI_ASSIGN_BIT_PLUS = 655,
     DECL_REFERENCE = 656,
     DECL_POINTER = 657,
     DECL_VAR_ARGS = 658,
     WHITE_SPACE = 659,
     SYSTEM_HEADER_STRING = 660,
     HEADER_STRING = 661,
     IDENTIFIER = 662,
     NON_REPLACEABLE_IDENTIFIER = 663,
     MACRO_FUNCTION_IDENTIFIER = 664,
     MACRO_OBJECT_IDENTIFIER = 665,
     PP_NUMBER = 666,
     CHARACTER_LITERAL = 667,
     L_CHARACTER_LITERAL = 668,
     STRING_LITERAL = 669,
     L_STRING_LITERAL = 670,
     INTEGER_LITERAL = 671,
     OCTAL_LITERAL = 672,
     DECIMAL_LITERAL = 673,
     HEXADECIMAL_LITERAL = 674,
     FLOATING_LITERAL = 675,
     UNIVERSAL_CHARACTER_NAME = 676,
     USE_ON_CODE = 677,
     PUNC_INITIALIZE = 678,
     PUNC_SYNONYM = 679,
     DONT_CARE = 680,
     RESERVED_WORD = 681,
     ACCESS_SPECIFIER = 682,
     BOOLEAN_LITERAL = 683,
     CV_QUALIFIER = 684,
     INTRINSIC_TYPE = 685,
     FUNCTION_SPECIFIER = 686,
     STORAGE_CLASS_SPECIFIER = 687,
     USER_TOKEN = 688,
     SYMBOL = 689,
     COMMENT = 690,
     BLOCK_COMMENT = 691,
     END_OF_STATEMENT = 692,
     BLOCK_OPEN = 693,
     BLOCK_CLOSE = 694,
     LIST_OPEN = 695,
     LIST_SEPARATOR = 696,
     LIST_CLOSE = 697
   };
#endif
/* Tokens.  */
#define ECS_NULL 258
#define ASC_SOH 259
#define ASC_STX 260
#define ASC_ETX 261
#define ASC_EOT 262
#define ASC_ENQ 263
#define ASC_ACK 264
#define ECS_ALERT 265
#define ECS_BACKSPACE 266
#define BCS_WHTSP_TAB 267
#define BCS_WHTSP_NEWLINE 268
#define BCS_WHTSP_VERTICAL_TAB 269
#define BCS_WHTSP_FORMFEED 270
#define ECS_CARRIAGE_RETURN 271
#define ASC_SHIFT_OUT 272
#define ASC_SHIFT_IN 273
#define ASC_DLE 274
#define ASC_DC1 275
#define ASC_DC2 276
#define ASC_DC3 277
#define ASC_DC4 278
#define ASC_NAK 279
#define ASC_SYN 280
#define ASC_ETB 281
#define ASC_CAN 282
#define ASC_EM 283
#define ASC_SUB 284
#define ASC_ESC 285
#define ASC_IS4 286
#define ASC_IS3 287
#define ASC_IS2 288
#define ASC_IS1 289
#define BCS_WHTSP_SPACE 290
#define BCS_PUNCT_EXCLAMATION 291
#define BCS_PUNCT_QUOTE 292
#define BCS_PUNCT_HASH 293
#define ASC_DOLLAR_SIGN 294
#define BCS_PUNCT_PERCENT 295
#define BCS_PUNCT_AMPERSAND 296
#define BCS_PUNCT_APOSTROPHE 297
#define BCS_PUNCT_OPEN_PARENTHESIS 298
#define BCS_PUNCT_CLOSE_PARENTHESIS 299
#define BCS_PUNCT_ASTERISK 300
#define BCS_PUNCT_PLUS 301
#define BCS_PUNCT_COMMA 302
#define BCS_PUNCT_MINUS 303
#define BCS_PUNCT_PERIOD 304
#define BCS_PUNCT_SLASH 305
#define BCS_DIGIT_0 306
#define BCS_DIGIT_1 307
#define BCS_DIGIT_2 308
#define BCS_DIGIT_3 309
#define BCS_DIGIT_4 310
#define BCS_DIGIT_5 311
#define BCS_DIGIT_6 312
#define BCS_DIGIT_7 313
#define BCS_DIGIT_8 314
#define BCS_DIGIT_9 315
#define BCS_PUNCT_COLON 316
#define BCS_PUNCT_SEMICOLON 317
#define BCS_PUNCT_LESS_THAN 318
#define BCS_PUNCT_EQUAL 319
#define BCS_PUNCT_GREATER_THAN 320
#define BCS_PUNCT_QUESTION 321
#define ASC_AT_SIGN 322
#define BCS_UPPER_A 323
#define BCS_UPPER_B 324
#define BCS_UPPER_C 325
#define BCS_UPPER_D 326
#define BCS_UPPER_E 327
#define BCS_UPPER_F 328
#define BCS_UPPER_G 329
#define BCS_UPPER_H 330
#define BCS_UPPER_I 331
#define BCS_UPPER_J 332
#define BCS_UPPER_K 333
#define BCS_UPPER_L 334
#define BCS_UPPER_M 335
#define BCS_UPPER_N 336
#define BCS_UPPER_O 337
#define BCS_UPPER_P 338
#define BCS_UPPER_Q 339
#define BCS_UPPER_R 340
#define BCS_UPPER_S 341
#define BCS_UPPER_T 342
#define BCS_UPPER_U 343
#define BCS_UPPER_V 344
#define BCS_UPPER_W 345
#define BCS_UPPER_X 346
#define BCS_UPPER_Y 347
#define BCS_UPPER_Z 348
#define BCS_PUNCT_OPEN_BRACKET 349
#define BCS_PUNCT_BACKSLASH 350
#define BCS_PUNCT_CLOSE_BRACKET 351
#define BCS_PUNCT_CARET 352
#define BCS_PUNCT_UNDERSCORE 353
#define BCS_LOWER_A 354
#define BCS_LOWER_B 355
#define BCS_LOWER_C 356
#define BCS_LOWER_D 357
#define BCS_LOWER_E 358
#define BCS_LOWER_F 359
#define BCS_LOWER_G 360
#define BCS_LOWER_H 361
#define BCS_LOWER_I 362
#define BCS_LOWER_J 363
#define BCS_LOWER_K 364
#define BCS_LOWER_L 365
#define BCS_LOWER_M 366
#define BCS_LOWER_N 367
#define BCS_LOWER_O 368
#define BCS_LOWER_P 369
#define BCS_LOWER_Q 370
#define BCS_LOWER_R 371
#define BCS_LOWER_S 372
#define BCS_LOWER_T 373
#define BCS_LOWER_U 374
#define BCS_LOWER_V 375
#define BCS_LOWER_W 376
#define BCS_LOWER_X 377
#define BCS_LOWER_Y 378
#define BCS_LOWER_Z 379
#define BCS_PUNCT_OPEN_BRACE 380
#define BCS_PUNCT_VERTICAL_BAR 381
#define BCS_PUNCT_CLOSE_BRACE 382
#define BCS_PUNCT_TILDE 383
#define ASC_DEL 384
#define ALT_PUNCT_OPEN_BRACE 385
#define ALT_PUNCT_CLOSE_BRACE 386
#define ALT_PUNCT_OPEN_BRACKET 387
#define ALT_PUNCT_CLOSE_BRACKET 388
#define ALT_PUNCT_HASH 389
#define PUNC_DBL_COLON 390
#define PUNC_ARROW 391
#define KWD_ABSTRACT 392
#define KWD_ABSTRACT_INTERFACE 393
#define KWD_ACCESS 394
#define KWD_ACTION 395
#define KWD_ADVANCE 396
#define KWD_ALLOCATABLE 397
#define KWD_ALLOCATE 398
#define KWD_ASSIGN 399
#define KWD_ASSOCIATE 400
#define KWD_ASYNCHRONOUS 401
#define KWD_BACKSPACE 402
#define KWD_BIND 403
#define KWD_BLANK 404
#define KWD_BLOCK 405
#define KWD_BLOCK_DATA 406
#define KWD_CALL 407
#define KWD_CASE 408
#define KWD_CHARACTER 409
#define KWD_CLASS 410
#define KWD_CLASS_DEFAULT 411
#define KWD_CLASS_IS 412
#define KWD_CLOSE 413
#define KWD_COMMON 414
#define KWD_COMPLEX 415
#define KWD_CONTAINS 416
#define KWD_CONTIGUOUS 417
#define KWD_CONTINUE 418
#define KWD_CYCLE 419
#define KWD_DATA 420
#define KWD_DEALLOCATE 421
#define KWD_DEFAULT 422
#define KWD_DEFERRED 423
#define KWD_DIMENSION 424
#define KWD_DIRECT 425
#define KWD_DO 426
#define KWD_DOUBLE 427
#define KWD_DOUBLE_COMPLEX 428
#define KWD_DOUBLE_PRECISION 429
#define KWD_ELEMENTAL 430
#define KWD_ELSE 431
#define KWD_ELSE_IF 432
#define KWD_ELSE_WHERE 433
#define KWD_ENCODING 434
#define KWD_END 435
#define KWD_END_ASSOCIATE 436
#define KWD_END_BLOCK 437
#define KWD_END_BLOCK_DATA 438
#define KWD_END_DO 439
#define KWD_END_ENUM 440
#define KWD_END_FILE 441
#define KWD_END_FORALL 442
#define KWD_END_FUNCTION 443
#define KWD_END_IF 444
#define KWD_END_INTERFACE 445
#define KWD_END_MODULE 446
#define KWD_END_PROCEDURE 447
#define KWD_END_PROGRAM 448
#define KWD_END_SELECT 449
#define KWD_END_SUBMODULE 450
#define KWD_END_SUBROUTINE 451
#define KWD_END_TYPE 452
#define KWD_END_WHERE 453
#define KWD_ENTRY 454
#define KWD_EOR 455
#define KWD_EQUIVALENCE 456
#define KWD_ERR 457
#define KWD_ERRMSG 458
#define KWD_EXIST 459
#define KWD_EXIT 460
#define KWD_EXTENDS 461
#define KWD_EXTENSIBLE 462
#define KWD_EXTERNAL 463
#define KWD_FALSE 464
#define KWD_FILE 465
#define KWD_FINAL 466
#define KWD_FLUSH 467
#define KWD_FMT 468
#define KWD_FORALL 469
#define KWD_FORM 470
#define KWD_FORMAT 471
#define KWD_FORMATTED 472
#define KWD_FUNCTION 473
#define KWD_GENERIC 474
#define KWD_GOTO 475
#define KWD_IF 476
#define KWD_IMPLICIT 477
#define KWD_IMPLICIT_NONE 478
#define KWD_IMPORT 479
#define KWD_IMPURE 480
#define KWD_IN 481
#define KWD_IN_OUT 482
#define KWD_INCLUDE 483
#define KWD_INQUIRE 484
#define KWD_INTEGER 485
#define KWD_INTENT 486
#define KWD_INTERFACE 487
#define KWD_INTRINSIC 488
#define KWD_IOSTAT 489
#define KWD_IOMSG 490
#define KWD_KIND 491
#define KWD_LET 492
#define KWD_LOGICAL 493
#define KWD_MODULE 494
#define KWD_MOLD 495
#define KWD_NAME 496
#define KWD_NAMED 497
#define KWD_NAMELIST 498
#define KWD_NEXTREC 499
#define KWD_NON_INTRINSIC 500
#define KWD_NON_OVERRIDABLE 501
#define KWD_NONKIND 502
#define KWD_NONE 503
#define KWD_NOPASS 504
#define KWD_NULLIFY 505
#define KWD_NUMBER 506
#define KWD_OPEN 507
#define KWD_OPENED 508
#define KWD_OPERATOR 509
#define KWD_OPTIONAL 510
#define KWD_OUT 511
#define KWD_PAD 512
#define KWD_PARAMETER 513
#define KWD_PASS 514
#define KWD_PAUSE 515
#define KWD_PENDING 516
#define KWD_POINTER 517
#define KWD_POSITION 518
#define KWD_PRECISION 519
#define KWD_PRINT 520
#define KWD_PRIVATE 521
#define KWD_PROCEDURE 522
#define KWD_PROGRAM 523
#define KWD_PROTECTED 524
#define KWD_PUBLIC 525
#define KWD_PURE 526
#define KWD_READ 527
#define KWD_READ_FORMATTED 528
#define KWD_READ_UNFORMATTED 529
#define KWD_READWRITE 530
#define KWD_REAL 531
#define KWD_REC 532
#define KWD_RECL 533
#define KWD_RETURN 534
#define KWD_REWIND 535
#define KWD_ROUND 536
#define KWD_SAVE 537
#define KWD_SELECT_CASE 538
#define KWD_SELECT_TYPE 539
#define KWD_SEQUENCE 540
#define KWD_SEQUENTIAL 541
#define KWD_SIGN 542
#define KWD_SIZE 543
#define KWD_SOURCE 544
#define KWD_STATUS 545
#define KWD_STOP 546
#define KWD_STREAM 547
#define KWD_SUBMODULE 548
#define KWD_SUBROUTINE 549
#define KWD_TARGET 550
#define KWD_THEN 551
#define KWD_TRUE 552
#define KWD_TYPE 553
#define KWD_UNFORMATTED 554
#define KWD_UNIT 555
#define KWD_USE 556
#define KWD_VALUE 557
#define KWD_VOLATILE 558
#define KWD_WHERE 559
#define KWD_WRITE 560
#define KWD_WRITE_FORMATTED 561
#define KWD_WRITE_UNFORMATTED 562
#define PPD_NULL 563
#define PPD_DEFINE 564
#define PPD_ELIF 565
#define PPD_ELSE 566
#define PPD_ENDIF 567
#define PPD_ERROR 568
#define PPD_WARNING 569
#define PPD_IF 570
#define PPD_IFDEF 571
#define PPD_IFNDEF 572
#define PPD_INCLUDE 573
#define PPD_LINE 574
#define PPD_PRAGMA 575
#define PPD_UNDEF 576
#define OP_LOGICAL_NOT 577
#define OP_NE 578
#define OP_STRINGIZE 579
#define OP_TOKEN_SPLICE 580
#define OP_MODULO 581
#define ALT_OP_TOKEN_SPLICE 582
#define OP_ASSIGN_MODULO 583
#define OP_BIT_AND 584
#define OP_ADDRESS 585
#define OP_LOGICAL_AND 586
#define OP_ASSIGN_BIT_AND 587
#define OP_DEREFERENCE 588
#define OP_MULTIPLY 589
#define OP_ASSIGN_MULTIPLY 590
#define OP_PLUS 591
#define OP_INCREMENT 592
#define OP_ASSIGN_PLUS 593
#define OP_MINUS 594
#define OP_DECREMENT 595
#define OP_ASSIGN_MINUS 596
#define OP_POINTER_MEMBER 597
#define OP_POINTER_POINTER_TO_MEMBER 598
#define OP_OBJECT_MEMBER 599
#define OP_OBJECT_POINTER_TO_MEMBER 600
#define OP_DIVIDE 601
#define OP_ASSIGN_DIVIDE 602
#define OP_ELSE 603
#define OP_LT 604
#define OP_SHIFT_LEFT 605
#define OP_ASSIGN_SHIFT_LEFT 606
#define OP_LE 607
#define OP_ASSIGN 608
#define OP_EQ 609
#define OP_GT 610
#define OP_GE 611
#define OP_SHIFT_RIGHT 612
#define OP_ASSIGN_SHIFT_RIGHT 613
#define OP_CONDITIONAL 614
#define OP_BIT_PLUS 615
#define OP_ASSIGN_BIT_PLUS 616
#define OP_BIT_OR 617
#define OP_ASSIGN_BIT_OR 618
#define OP_LOGICAL_OR 619
#define OP_BIT_NOT 620
#define OP_ALT_LOGICAL_AND 621
#define OP_ALT_ASSIGN_BIT_AND 622
#define OP_ALT_BIT_AND 623
#define OP_ALT_BIT_OR 624
#define OP_ALT_BIT_NOT 625
#define OP_ALT_LOGICAL_NOT 626
#define OP_ALT_NE 627
#define OP_ALT_LOGICAL_OR 628
#define OP_ALT_ASSIGN_BIT_OR 629
#define OP_ALT_BIT_PLUS 630
#define OP_ALT_ASSIGN_BIT_PLUS 631
#define OPEN_PARENTHESIS_SLASH 632
#define CLOSE_PARENTHESIS_SLASH 633
#define INV_ALT_LOGICAL_AND 634
#define INV_ALT_ASSIGN_BIT_AND 635
#define INV_ALT_BIT_AND 636
#define INV_ALT_BIT_OR 637
#define INV_ALT_BIT_NOT 638
#define INV_ALT_LOGICAL_NOT 639
#define INV_ALT_NE 640
#define INV_ALT_LOGICAL_OR 641
#define INV_ALT_ASSIGN_BIT_OR 642
#define INV_ALT_BIT_PLUS 643
#define INV_ALT_ASSIGN_BIT_PLUS 644
#define INV_MFI_LOGICAL_AND 645
#define INV_MFI_ASSIGN_BIT_AND 646
#define INV_MFI_BIT_AND 647
#define INV_MFI_BIT_OR 648
#define INV_MFI_BIT_NOT 649
#define INV_MFI_LOGICAL_NOT 650
#define INV_MFI_NE 651
#define INV_MFI_LOGICAL_OR 652
#define INV_MFI_ASSIGN_BIT_OR 653
#define INV_MFI_BIT_PLUS 654
#define INV_MFI_ASSIGN_BIT_PLUS 655
#define DECL_REFERENCE 656
#define DECL_POINTER 657
#define DECL_VAR_ARGS 658
#define WHITE_SPACE 659
#define SYSTEM_HEADER_STRING 660
#define HEADER_STRING 661
#define IDENTIFIER 662
#define NON_REPLACEABLE_IDENTIFIER 663
#define MACRO_FUNCTION_IDENTIFIER 664
#define MACRO_OBJECT_IDENTIFIER 665
#define PP_NUMBER 666
#define CHARACTER_LITERAL 667
#define L_CHARACTER_LITERAL 668
#define STRING_LITERAL 669
#define L_STRING_LITERAL 670
#define INTEGER_LITERAL 671
#define OCTAL_LITERAL 672
#define DECIMAL_LITERAL 673
#define HEXADECIMAL_LITERAL 674
#define FLOATING_LITERAL 675
#define UNIVERSAL_CHARACTER_NAME 676
#define USE_ON_CODE 677
#define PUNC_INITIALIZE 678
#define PUNC_SYNONYM 679
#define DONT_CARE 680
#define RESERVED_WORD 681
#define ACCESS_SPECIFIER 682
#define BOOLEAN_LITERAL 683
#define CV_QUALIFIER 684
#define INTRINSIC_TYPE 685
#define FUNCTION_SPECIFIER 686
#define STORAGE_CLASS_SPECIFIER 687
#define USER_TOKEN 688
#define SYMBOL 689
#define COMMENT 690
#define BLOCK_COMMENT 691
#define END_OF_STATEMENT 692
#define BLOCK_OPEN 693
#define BLOCK_CLOSE 694
#define LIST_OPEN 695
#define LIST_SEPARATOR 696
#define LIST_CLOSE 697




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE

{
  float fval;
  char *sval;
  unsigned int uval;
  int ival;
  long lval;
}
/* Line 1489 of yacc.c.  */

	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yypp_lval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yypp_lloc;
