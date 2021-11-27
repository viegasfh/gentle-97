/*

   GENTLE 97

   Gentle Compiler Construction System 3.0
   Copyright (C) 1992, 1997  F.W. Schroeer

*/

#line 2 "gen.y"
typedef long *yy;
#define yyu (-2147483647L)
static yy yynull;
extern yy yyh;
extern yy yyhx;
static yyErr(n, l) { yyAbort(n, "cyfront", l); }
/* start */
/* end */
extern yy yyglov_currentGroupIdent;
extern yy yyglov_containsGrammar;
extern yy yyglov_containsRoot;
extern yy yyglov_maxAttr;
extern yy yyglov_tokenList;
extern yy yyglov_errorId;
extern yy yyglov_id_INT;
extern yy yyglov_id_STRING;
extern yy yyglov_id_POS;
extern yy yyglov_importedDeclarations;
extern yy yyglov_declaredVars;
extern yy yyglov_spaceRequired;
extern yy yyglov_currentTokenCode;
extern yy yyglov_currentProcNumber;
extern yy yyglov_currentRuleNumber;
extern yy yyglov_localVars;
extern yy yyglov_env;
extern yy yyglov_currentFailLabel;
extern yy yyglov_currentFailLabelUsed;
extern yy yyglov_currentSuccessLabel;
extern yy yyglov_choice_Declarations;
extern yy yyglov_choice_Types;
extern yy yyglov_insideChoiceRule;
extern yy yyglov_current_choice_type;
extern yy yyglov_tryLabel;
extern yy yyglov_pathes;
typedef struct {
  long attr[2];
} yyATTRIBUTES;
#define YYSTYPE yyATTRIBUTES
extern YYSTYPE yylval;

#define MODULE 257
#define EXPORTTOKEN 258
#define IMPORTTOKEN 259
#define USE 260
#define END 261
#define VAR 262
#define TYPETOKEN 263
#define PROC 264
#define COND 265
#define NONTERMTOKEN 266
#define TOKENTOKEN 267
#define CHOICE 268
#define CLASSTOKEN 269
#define SWEEP 270
#define ROOT 271
#define RULETOKEN 272
#define TABLE 273
#define KEY 274
#define EQ 275
#define TIMES 276
#define DIV 277
#define PLUS 278
#define MINUS 279
#define UNDERSCORE 280
#define QUOTE 281
#define DOLLAR 282
#define BEGINDISJ 283
#define ENDDISJ 284
#define BEGINLOOP 285
#define ENDLOOP 286
#define DISJDELIM 287
#define BEGINCOND 288
#define ENDCOND 289
#define RIGHTARROW 290
#define LEFTARROW 291
#define BECOMES 292
#define COMESBE 293
#define SMALLBECOMES 294
#define SMALLCOMESBE 295
#define COLON 296
#define LEFTPAREN 297
#define RIGHTPAREN 298
#define LEFTBRACKET 299
#define RIGHTBRACKET 300
#define COMMA 301
#define DOT 302
#define AMPERSAND 303
#define EOFTOKEN 304
#define FILESEP 305
#define INTEGERCONST 306
#define STRINGCONST 307
#define SMALLID 308
#define LARGEID 309

#ifdef __STDC__
#include <stdlib.h>
#include <string.h>
#else
#include <malloc.h>
#include <memory.h>
#endif

#include <values.h>

#ifdef __cplusplus

#ifndef yyerror
void yyerror(const char *);
#endif

#ifndef yylex
#ifdef __EXTERN_C__
extern "C" {
int yylex(void);
}
#else
int yylex(void);
#endif
#endif
int yyparse(void);

#endif
#define yyclearin yychar = -1
#define yyerrok yyerrflag = 0
extern int yychar;
extern int yyerrflag;
#ifndef YYSTYPE
#define YYSTYPE int
#endif
YYSTYPE yylval;
YYSTYPE yyval;
typedef int yytabelem;
#ifndef YYMAXDEPTH
#define YYMAXDEPTH 150
#endif
#if YYMAXDEPTH > 0
int yy_yys[YYMAXDEPTH], *yys = yy_yys;
YYSTYPE yy_yyv[YYMAXDEPTH], *yyv = yy_yyv;
#else /* user does initial allocation */
int *yys;
YYSTYPE *yyv;
#endif
static int yymaxdepth = YYMAXDEPTH;
#define YYERRCODE 256
yytabelem yyexca[] = {
    -1,  1,  0,   -1, -2,  0,   -1,  115, 281, 167, -2,  159, -1,  116, 281,
    168, -2, 161, -1, 124, 281, 167, -2,  145, -1,  125, 281, 168, -2,  147,
};
#define YYNPROD 169
#define YYLAST 438
yytabelem yyact[] = {

    114, 120, 119, 11,  12,  10,  126, 240, 200, 146, 143, 220, 217, 49,  298,
    51,  71,  8,   50,  32,  121, 48,  54,  55,  57,  57,  59,  60,  263, 117,
    118, 115, 116, 53,  124, 125, 10,  52,  11,  47,  69,  69,  72,  297, 11,
    12,  96,  48,  274, 270, 48,  48,  48,  11,  12,  78,  208, 11,  12,  204,
    108, 97,  99,  210, 81,  80,  76,  77,  164, 165, 82,  83,  180, 79,  98,
    300, 123, 294, 123, 129, 130, 293, 123, 164, 165, 106, 273, 109, 134, 269,
    261, 185, 259, 250, 150, 235, 152, 155, 232, 156, 158, 207, 285, 219, 260,
    69,  258, 249, 69,  147, 193, 151, 190, 174, 169, 93,  88,  278, 275, 271,
    247, 231, 230, 228, 229, 209, 205, 179, 178, 176, 177, 175, 133, 288, 181,
    95,  74,  75,  48,  292, 203, 123, 183, 140, 138, 137, 139, 136, 201, 262,
    289, 85,  173, 168, 164, 165, 166, 167, 188, 97,  90,  191, 242, 200, 222,
    237, 221, 42,  39,  206, 104, 39,  44,  40,  104, 123, 123, 40,  123, 212,
    123, 39,  35,  4,   123, 184, 153, 148, 135, 199, 196, 239, 144, 141, 244,
    195, 112, 84,  201, 113, 107, 201, 86,  87,  150, 150, 253, 111, 37,  155,
    256, 25,  21,  27,  28,  29,  24,  30,  22,  31,  20,  68,  26,  61,  254,
    103, 41,  257, 89,  92,  123, 56,  123, 45,  9,   5,   38,  6,   182, 46,
    122, 272, 128, 291, 34,  33,  132, 67,  48,  277, 123, 198, 13,  197, 202,
    194, 58,  23,  218, 62,  154, 123, 70,  110, 123, 127, 149, 43,  243, 131,
    64,  239, 284, 102, 66,  244, 287, 238, 48,  145, 73,  142, 19,  18,  91,
    17,  296, 63,  94,  65,  100, 16,  105, 15,  14,  101, 7,   36,  3,   2,
    1,   0,   0,   0,   0,   187, 0,   0,   0,   0,   172, 0,   161, 0,   0,
    0,   302, 0,   0,   170, 171, 0,   0,   157, 0,   0,   162, 0,   160, 163,
    0,   0,   0,   0,   0,   186, 0,   0,   0,   0,   223, 0,   225, 189, 227,
    0,   192, 280, 0,   0,   233, 0,   0,   0,   159, 0,   0,   0,   0,   0,
    0,   0,   0,   215, 216, 224, 0,   226, 0,   0,   0,   0,   213, 214, 234,
    0,   0,   0,   0,   0,   0,   301, 0,   236, 0,   241, 211, 0,   0,   246,
    248, 251, 252, 245, 265, 255, 267, 0,   0,   276, 0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   279, 264, 0,   266,
    268, 0,   0,   0,   299, 0,   0,   281, 282, 290, 0,   0,   295, 0,   0,
    0,   283, 286};
yytabelem yypact[] = {

    -10000000, -10000000, -74,       -288,      -305,      -51,       -285,
    -288,      -75,       -87,       -10000000, -10000000, -10000000, -94,
    -51,       -10000000, -10000000, -10000000, -10000000, -10000000, -270,
    -305,      -305,      -305,      -305,      -305,      -305,      -10000000,
    -10000000, -10000000, -10000000, -10000000, -10000000, -10000000, -51,
    -305,      -51,       -83,       -77,       -305,      -305,      -10000000,
    -10000000, -10000000, -260,      -10000000, -270,      -158,      -226,
    -270,      -270,      -270,      -10000000, -181,      -115,      -115,
    -182,      -10000000, -182,      -161,      -251,      -225,      -239,
    -94,       -90,       -94,       -10000000, -10000000, -260,      -241,
    -260,      -10000000, -10000000, -10000000, -277,      -274,      -277,
    -274,      -305,      -305,      -277,      -274,      -164,      -277,
    -137,      -142,      -145,      -140,      -147,      -298,      -10000000,
    -299,      -260,      -305,      -260,      -305,      -305,      -10000000,
    -305,      -305,      -10000000, -51,       -86,       -77,       -305,
    -10000000, -10000000, -305,      -10000000, -10000000, -124,      -120,
    -10000000, -10000000, -128,      -183,      -10000000, -10000000, -10000000,
    -277,      -277,      -277,      -10000000, -129,      -184,      -165,
    -10000000, -124,      -10000000, -163,      -228,      -124,      -10000000,
    -305,      -148,      -210,      -10000000, -270,      -10000000, -10000000,
    -274,      -260,      -241,      -185,      -260,      -241,      -187,
    -264,      -150,      -242,      -170,      -10000000, -260,      -197,
    -245,      -171,      -237,      -10000000, -305,      -94,       -10000000,
    -10000000, -260,      -10000000, -277,      -277,      -277,      -277,
    -296,      -277,      -10000000, -10000000, -195,      -297,      -274,
    -274,      -277,      -274,      -277,      -274,      -169,      -10000000,
    -200,      -274,      -10000000, -277,      -10000000, -203,      -10000000,
    -298,      -255,      -10000000, -299,      -305,      -10000000, -10000000,
    -10000000, -305,      -109,      -176,      -305,      -190,      -205,
    -305,      -305,      -305,      -10000000, -260,      -305,      -305,
    -260,      -10000000, -10000000, -120,      -120,      -10000000, -10000000,
    -191,      -206,      -10000000, -193,      -208,      -273,      -10000000,
    -124,      -10000000, -124,      -10000000, -277,      -274,      -277,
    -274,      -10000000, -10000000, -210,      -10000000, -10000000, -209,
    -252,      -177,      -305,      -10000000, -212,      -253,      -178,
    -10000000, -10000000, -270,      -179,      -274,      -10000000, -10000000,
    -10000000, -10000000, -10000000, -10000000, -10000000, -10000000, -277,
    -10000000, -274,      -10000000, -10000000, -274,      -124,      -10000000,
    -124,      -10000000, -10000000, -10000000, -255,      -305,      -194,
    -10000000, -305,      -305,      -132,      -270,      -10000000, -151,
    -217,      -221,      -273,      -10000000, -10000000, -305,      -10000000,
    -10000000, -259,      -292,      -132,      -223,      -277,      -10000000,
    -10000000, -10000000, -10000000, -10000000, -10000000, -260,      -10000000,
    -10000000, -10000000};
yytabelem yypgo[] = {

    0,   300, 299, 298, 237, 234, 297, 252, 226, 235, 296, 295, 0,   208,
    236, 221, 16,  225, 200, 294, 293, 291, 285, 283, 282, 151, 228, 193,
    192, 281, 279, 165, 162, 277, 268, 187, 266, 186, 223, 260, 259, 257,
    231, 229, 255, 254, 195, 190, 253, 251, 189, 133, 249, 166, 243, 88,
    233, 239, 188, 164, 238, 197, 185, 149, 207, 196, 199};
yytabelem yyr1[] = {

    0,  1,  2,  3,  3,  10, 10, 5,  9,  8,  8,  4,  4,  6,  6,  6,  6,  6,  14,
    11, 11, 11, 11, 11, 17, 13, 15, 15, 7,  7,  19, 19, 19, 19, 19, 20, 21, 21,
    26, 26, 27, 27, 28, 28, 18, 18, 29, 29, 30, 30, 31, 31, 31, 33, 33, 33, 32,
    32, 32, 34, 34, 35, 35, 35, 36, 36, 23, 24, 24, 37, 37, 39, 38, 38, 40, 22,
    22, 42, 16, 16, 43, 43, 41, 41, 41, 41, 41, 45, 45, 44, 44, 44, 46, 46, 47,
    47, 48, 49, 51, 51, 52, 52, 50, 50, 54, 54, 25, 56, 56, 57, 57, 57, 57, 57,
    57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 60, 60,
    55, 55, 62, 62, 53, 53, 63, 63, 61, 61, 59, 59, 59, 59, 59, 59, 59, 58, 58,
    58, 64, 64, 64, 65, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 12, 12};
yytabelem yyr2[] = {

    0,  9,  1,  11, 7, 9,  13, 3,  1,  3,  1,  5,  1, 5, 5, 3, 3,  1,  7,
    5,  5,  3,  3,  1, 7,  7,  7,  1,  5,  1,  3,  3, 3, 3, 3, 7,  11, 11,
    3,  1,  7,  1,  7, 1,  3,  1,  9,  3,  9,  3,  7, 1, 3, 3, 7,  9,  7,
    1,  3,  3,  7,  7, 1,  3,  3,  7,  11, 13, 13, 7, 3, 7, 7, 3,  5,  11,
    9,  3,  3,  1,  9, 1,  3,  3,  3,  3,  3,  5,  1, 3, 3, 1, 5,  3,  5,
    3,  11, 13, 5,  1, 3,  1,  3,  11, 5,  1,  3,  5, 1, 7, 7, 7,  7,  11,
    13, 11, 13, 7,  7, 11, 13, 11, 13, 9,  3,  11, 7, 7, 7, 3, 11, 5,  1,
    5,  1,  7,  1,  5, 1,  7,  1,  7,  3,  7,  13, 3, 9, 3, 7, 3,  7,  7,
    3,  7,  7,  3,  3, 7,  13, 3,  9,  3,  3,  3,  5, 5, 7, 3, 3};
yytabelem yychk[] = {

    -10000000, -1,  -2,  -3,  257, -9,  -4,  -10, 305, -5,  -12, 308, 309, -7,
    -19,       -20, -21, -22, -23, -24, 271, 263, 269, -41, 267, 262, 273, 264,
    265,       266, 268, 270, 304, -4,  -9,  257, -6,  -13, -14, 258, 260, -8,
    261,       -7,  -25, -56, -57, 309, -12, 283, 288, 285, 307, 303, -12, -12,
    -42,       -12, -42, -12, -12, -38, -40, -7,  -5,  -7,  -14, -13, -15, -12,
    -15,       -16, 302, -56, 294, 295, 292, 293, 281, 299, 291, 290, 296, 297,
    -61,       -25, -25, -25, 297, -26, 275, -26, -43, 297, -43, 296, 297, -12,
    299,       301, -8,  -11, -13, -17, 260, -8,  -16, -18, 301, -16, -58, -64,
    -65,       -66, -12, 308, 309, 306, 307, 279, 278, 297, -59, -12, 308, 309,
    280,       -58, -59, -12, -12, -58, -59, 296, -55, -58, 284, 287, 289, 286,
    290,       -27, -29, 308, -28, -30, 308, -16, -35, -36, -12, -16, -12, -37,
    -39,       -12, -12, -38, -12, -7,  -17, -13, -15, -15, 278, 279, 276, 277,
    281,       297, -66, -66, -58, 281, 297, 296, 292, 293, 291, 290, 300, -12,
    -60,       290, -62, 301, -61, -59, -16, -18, 297, -16, -18, 297, -44, -46,
    -47,       -48, -49, -50, 272, -12, -45, 290, 301, 296, -16, 298, 301, 296,
    300,       -8,  -16, -64, -64, -65, -65, 308, -55, 298, 308, -53, -59, -59,
    -58,       -59, -58, -59, 292, 293, 291, 290, 298, -53, -58, 298, -27, -31,
    -33,       -12, 262, -28, -32, -34, -12, -46, -47, 296, -50, 297, 298, -35,
    -35,       -12, -16, -37, -12, -16, 297, 298, 297, 298, -63, 301, -58, -59,
    -58,       -59, -62, 298, 301, 296, -12, 298, 301, 296, -25, -52, 296, -53,
    -55,       -53, -59, -31, -12, 296, -32, -12, -51, 282, -25, -54, 290, 298,
    298,       -63, -12, 302, 306, -51, 298, -55, -16};
yytabelem yydef[] = {

    2,   -2,  8,   12,  0,   29,  0,   12,  8,   17,  7,   167, 168, 10,  29,
    30,  31,  32,  33,  34,  108, 0,   0,   0,   0,   0,   0,   82,  83,  84,
    85,  86,  1,   11,  29,  0,   29,  16,  15,  27,  27,  4,   9,   28,  79,
    106, 108, 168, 124, 108, 108, 108, 129, 0,   39,  39,  81,  77,  81,  0,
    0,   0,   73,  10,  23,  10,  13,  14,  79,  45,  79,  35,  78,  107, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   134, 0,   142, 0,   0,   0,   41,
    38,  43,  79,  62,  79,  0,   0,   74,  0,   0,   5,   29,  22,  21,  27,
    3,   25,  27,  44,  18,  109, 152, 155, 156, 0,   -2,  -2,  162, 163, 0,
    0,   0,   110, 0,   -2,  -2,  149, 111, 112, 0,   0,   117, 118, 0,   132,
    136, 126, 108, 127, 128, 0,   79,  45,  47,  79,  45,  49,  91,  88,  63,
    64,  76,  79,  0,   70,  0,   0,   72,  0,   10,  19,  20,  79,  26,  0,
    0,   0,   0,   0,   134, 164, 165, 0,   0,   138, 0,   0,   0,   0,   0,
    0,   123, 0,   138, 133, 0,   141, 0,   36,  41,  51,  37,  43,  57,  75,
    89,  90,  93,  95,  0,   0,   102, 0,   62,  62,  0,   66,  79,  0,   0,
    79,  6,   24,  150, 151, 153, 154, 157, 0,   166, 143, 0,   140, 148, 113,
    115, 119, 121, 0,   0,   0,   0,   125, 131, 136, 130, 40,  0,   52,  53,
    0,   42,  0,   58,  59,  92,  94,  108, 101, 138, 80,  87,  61,  65,  67,
    69,  71,  68,  134, 160, 138, 146, 137, 0,   114, 116, 120, 122, 135, 46,
    51,  0,   0,   48,  57,  0,   99,  108, 100, 105, 0,   0,   140, 50,  54,
    0,   56,  60,  0,   0,   99,  0,   134, 158, 144, 139, 55,  96,  98,  79,
    103, 104, 97};
typedef struct
#ifdef __cplusplus
    yytoktype
#endif
{
  char *t_name;
  int t_val;
} yytoktype;
#ifndef YYDEBUG
#define YYDEBUG 0 /* don't allow debugging */
#endif

#if YYDEBUG

yytoktype yytoks[] = {
    "MODULE",       257, "EXPORTTOKEN",  258,
    "IMPORTTOKEN",  259, "USE",          260,
    "END",          261, "VAR",          262,
    "TYPETOKEN",    263, "PROC",         264,
    "COND",         265, "NONTERMTOKEN", 266,
    "TOKENTOKEN",   267, "CHOICE",       268,
    "CLASSTOKEN",   269, "SWEEP",        270,
    "ROOT",         271, "RULETOKEN",    272,
    "TABLE",        273, "KEY",          274,
    "EQ",           275, "TIMES",        276,
    "DIV",          277, "PLUS",         278,
    "MINUS",        279, "UNDERSCORE",   280,
    "QUOTE",        281, "DOLLAR",       282,
    "BEGINDISJ",    283, "ENDDISJ",      284,
    "BEGINLOOP",    285, "ENDLOOP",      286,
    "DISJDELIM",    287, "BEGINCOND",    288,
    "ENDCOND",      289, "RIGHTARROW",   290,
    "LEFTARROW",    291, "BECOMES",      292,
    "COMESBE",      293, "SMALLBECOMES", 294,
    "SMALLCOMESBE", 295, "COLON",        296,
    "LEFTPAREN",    297, "RIGHTPAREN",   298,
    "LEFTBRACKET",  299, "RIGHTBRACKET", 300,
    "COMMA",        301, "DOT",          302,
    "AMPERSAND",    303, "EOFTOKEN",     304,
    "FILESEP",      305, "INTEGERCONST", 306,
    "STRINGCONST",  307, "SMALLID",      308,
    "LARGEID",      309, "-unknown-",    -1 /* ends search */
};

char *yyreds[] = {
    "-no such reduction-",
    "ROOT_ : Initialize OwnUnit OtherUnitList EOFTOKEN",
    "Initialize : /* empty */",
    "OwnUnit : MODULE ModuleIdent OwnInterface DeclarationList EndOption",
    "OwnUnit : ImplicitModuleIdent DeclarationList EndOption",
    "OtherUnit : FILESEP ImplicitModuleIdent DeclarationList EndOption",
    "OtherUnit : FILESEP MODULE ModuleIdent OtherInterface DeclarationList "
    "EndOption",
    "ModuleIdent : Ident",
    "ImplicitModuleIdent : /* empty */",
    "EndOption : END",
    "EndOption : /* empty */",
    "OtherUnitList : OtherUnit OtherUnitList",
    "OtherUnitList : /* empty */",
    "OwnInterface : Export OwnImport",
    "OwnInterface : OwnImport Export",
    "OwnInterface : OwnImport",
    "OwnInterface : Export",
    "OwnInterface : /* empty */",
    "OwnImport : USE IdentList DotOption",
    "OtherInterface : Export OtherImport",
    "OtherInterface : OtherImport Export",
    "OtherInterface : OtherImport",
    "OtherInterface : Export",
    "OtherInterface : /* empty */",
    "OtherImport : USE IdentList DotOption",
    "Export : EXPORTTOKEN IdentList DotOption",
    "IdentList : Ident CommaOption IdentList",
    "IdentList : /* empty */",
    "DeclarationList : Declaration DeclarationList",
    "DeclarationList : /* empty */",
    "Declaration : RootDeclaration",
    "Declaration : TypeDeclaration",
    "Declaration : PredicateDeclaration",
    "Declaration : VarDeclaration",
    "Declaration : TableDeclaration",
    "RootDeclaration : ROOT Members DotOption",
    "TypeDeclaration : TYPETOKEN Ident EqualOption TFunctorSpecificationList "
    "DotOption",
    "TypeDeclaration : CLASSTOKEN Ident EqualOption CFunctorSpecificationList "
    "DotOption",
    "EqualOption : EQ",
    "EqualOption : /* empty */",
    "TFunctorSpecificationList : TFunctorSpecification CommaOption "
    "TFunctorSpecificationList",
    "TFunctorSpecificationList : /* empty */",
    "CFunctorSpecificationList : CFunctorSpecification CommaOption "
    "CFunctorSpecificationList",
    "CFunctorSpecificationList : /* empty */",
    "CommaOption : COMMA",
    "CommaOption : /* empty */",
    "TFunctorSpecification : SMALLID LEFTPAREN TArgumentSpecificationList "
    "RIGHTPAREN",
    "TFunctorSpecification : SMALLID",
    "CFunctorSpecification : SMALLID LEFTPAREN CArgumentSpecificationList "
    "RIGHTPAREN",
    "CFunctorSpecification : SMALLID",
    "TArgumentSpecificationList : TArgumentSpecification COMMA "
    "TArgumentSpecificationList",
    "TArgumentSpecificationList : /* empty */",
    "TArgumentSpecificationList : TArgumentSpecification",
    "TArgumentSpecification : Ident",
    "TArgumentSpecification : Ident COLON Ident",
    "TArgumentSpecification : VAR Ident COLON Ident",
    "CArgumentSpecificationList : CArgumentSpecification COMMA "
    "CArgumentSpecificationList",
    "CArgumentSpecificationList : /* empty */",
    "CArgumentSpecificationList : CArgumentSpecification",
    "CArgumentSpecification : Ident",
    "CArgumentSpecification : Ident COLON Ident",
    "PArgumentSpecificationList : PArgumentSpecification COMMA "
    "PArgumentSpecificationList",
    "PArgumentSpecificationList : /* empty */",
    "PArgumentSpecificationList : PArgumentSpecification",
    "PArgumentSpecification : Ident",
    "PArgumentSpecification : Ident COLON Ident",
    "VarDeclaration : VAR Ident COLON Ident DotOption",
    "TableDeclaration : TABLE Ident LEFTPAREN ClassFields RIGHTPAREN DotOption",
    "TableDeclaration : TABLE TableFields LEFTBRACKET Ident RIGHTBRACKET "
    "DotOption",
    "ClassFields : ClassField COMMA ClassFields",
    "ClassFields : ClassField",
    "ClassField : Ident COLON Ident",
    "TableFields : TableField COMMA TableFields",
    "TableFields : TableField",
    "TableField : Ident Ident",
    "PredicateDeclaration : PredicateClass GroupIdent Formals DotOption "
    "RuleList",
    "PredicateDeclaration : TOKENTOKEN GroupIdent Formals DotOption",
    "GroupIdent : Ident",
    "DotOption : DOT",
    "DotOption : /* empty */",
    "Formals : LEFTPAREN PArgumentSpecificationList OutArgumentSpecifications "
    "RIGHTPAREN",
    "Formals : /* empty */",
    "PredicateClass : PROC",
    "PredicateClass : COND",
    "PredicateClass : NONTERMTOKEN",
    "PredicateClass : CHOICE",
    "PredicateClass : SWEEP",
    "OutArgumentSpecifications : RIGHTARROW PArgumentSpecificationList",
    "OutArgumentSpecifications : /* empty */",
    "RuleList : RuleList1",
    "RuleList : RuleList2",
    "RuleList : /* empty */",
    "RuleList1 : Rule1 RuleList1",
    "RuleList1 : Rule1",
    "RuleList2 : Rule2 RuleList2",
    "RuleList2 : Rule2",
    "Rule1 : Lhs COLON Members CostOption DOT",
    "Rule2 : RULETOKEN Lhs ColonOption Members CostOption DotOption",
    "CostOption : DOLLAR INTEGERCONST",
    "CostOption : /* empty */",
    "ColonOption : COLON",
    "ColonOption : /* empty */",
    "Lhs : Ident",
    "Lhs : Ident LEFTPAREN DefArgumentList LhsOutArguments RIGHTPAREN",
    "LhsOutArguments : RIGHTARROW UseArgumentList",
    "LhsOutArguments : /* empty */",
    "Members : MemberList",
    "MemberList : Member MemberList",
    "MemberList : /* empty */",
    "Member : LARGEID SMALLBECOMES UseArgument",
    "Member : LARGEID SMALLCOMESBE DefArgument",
    "Member : Ident BECOMES UseArgument",
    "Member : Ident COMESBE DefArgument",
    "Member : Ident QUOTE Ident BECOMES UseArgument",
    "Member : Ident LEFTBRACKET Ident RIGHTBRACKET BECOMES UseArgument",
    "Member : Ident QUOTE Ident COMESBE DefArgument",
    "Member : Ident LEFTBRACKET Ident RIGHTBRACKET COMESBE DefArgument",
    "Member : Ident LEFTARROW UseArgument",
    "Member : Ident RIGHTARROW DefArgument",
    "Member : Ident QUOTE Ident LEFTARROW UseArgument",
    "Member : Ident LEFTBRACKET Ident RIGHTBRACKET LEFTARROW UseArgument",
    "Member : Ident QUOTE Ident RIGHTARROW DefArgument",
    "Member : Ident LEFTBRACKET Ident RIGHTBRACKET RIGHTARROW DefArgument",
    "Member : Ident COLON COLON Ident",
    "Member : Ident",
    "Member : Ident LEFTPAREN UseArgumentList RhsOutArguments RIGHTPAREN",
    "Member : BEGINDISJ AlternativeList ENDDISJ",
    "Member : BEGINCOND Members ENDCOND",
    "Member : BEGINLOOP Members ENDLOOP",
    "Member : STRINGCONST",
    "Member : AMPERSAND LEFTPAREN RIGHTARROW DefArgument RIGHTPAREN",
    "RhsOutArguments : RIGHTARROW DefArgumentList",
    "RhsOutArguments : /* empty */",
    "UseArgumentList : UseArgument UseArgumentListTail",
    "UseArgumentList : /* empty */",
    "UseArgumentListTail : COMMA UseArgument UseArgumentListTail",
    "UseArgumentListTail : /* empty */",
    "DefArgumentList : DefArgument DefArgumentListTail",
    "DefArgumentList : /* empty */",
    "DefArgumentListTail : COMMA DefArgument DefArgumentListTail",
    "DefArgumentListTail : /* empty */",
    "AlternativeList : Members DISJDELIM AlternativeList",
    "AlternativeList : Members",
    "DefArgument : Ident QUOTE SMALLID",
    "DefArgument : Ident QUOTE SMALLID LEFTPAREN DefArgumentList RIGHTPAREN",
    "DefArgument : SMALLID",
    "DefArgument : SMALLID LEFTPAREN DefArgumentList RIGHTPAREN",
    "DefArgument : LARGEID",
    "DefArgument : LARGEID COLON DefArgument",
    "DefArgument : UNDERSCORE",
    "UseArgument : UseArgument PLUS UseArgument2",
    "UseArgument : UseArgument MINUS UseArgument2",
    "UseArgument : UseArgument2",
    "UseArgument2 : UseArgument2 TIMES UseArgument3",
    "UseArgument2 : UseArgument2 DIV UseArgument3",
    "UseArgument2 : UseArgument3",
    "UseArgument3 : UseArgument9",
    "UseArgument9 : Ident QUOTE SMALLID",
    "UseArgument9 : Ident QUOTE SMALLID LEFTPAREN UseArgumentList RIGHTPAREN",
    "UseArgument9 : SMALLID",
    "UseArgument9 : SMALLID LEFTPAREN UseArgumentList RIGHTPAREN",
    "UseArgument9 : LARGEID",
    "UseArgument9 : INTEGERCONST",
    "UseArgument9 : STRINGCONST",
    "UseArgument9 : MINUS UseArgument9",
    "UseArgument9 : PLUS UseArgument9",
    "UseArgument9 : LEFTPAREN UseArgument RIGHTPAREN",
    "Ident : SMALLID",
    "Ident : LARGEID",
};
#endif /* YYDEBUG */
#line 1 "/usr/ccs/bin/yaccpar"
/*
 * Copyright (c) 1993 by Sun Microsystems, Inc.
 */

#pragma ident "@(#)yaccpar	6.12	93/06/07 SMI"

/*
** Skeleton parser driver for yacc output
*/

/*
** yacc user known macros and defines
*/
#define YYERROR goto yyerrlab
#define YYACCEPT return (0)
#define YYABORT return (1)
#define YYBACKUP(newtoken, newvalue)                                           \
  {                                                                            \
    if (yychar >= 0 || (yyr2[yytmp] >> 1) != 1) {                              \
      yyerror("syntax error - cannot backup");                                 \
      goto yyerrlab;                                                           \
    }                                                                          \
    yychar = newtoken;                                                         \
    yystate = *yyps;                                                           \
    yylval = newvalue;                                                         \
    goto yynewstate;                                                           \
  }
#define YYRECOVERING() (!!yyerrflag)
#define YYNEW(type) malloc(sizeof(type) * yynewmax)
#define YYCOPY(to, from, type)                                                 \
  (type *)memcpy(to, (char *)from, yynewmax * sizeof(type))
#define YYENLARGE(from, type)                                                  \
  (type *)realloc((char *)from, yynewmax * sizeof(type))
#ifndef YYDEBUG
#define YYDEBUG 1 /* make debugging available */
#endif

/*
** user known globals
*/
int yydebug; /* set to 1 to get debugging */

/*
** driver internal defines
*/
#define YYFLAG (-10000000)

/*
** global variables used by the parser
*/
YYSTYPE *yypv; /* top of value stack */
int *yyps;     /* top of state stack */

int yystate; /* current state */
int yytmp;   /* extra var (lasts between blocks) */

int yynerrs;   /* number of errors */
int yyerrflag; /* error recovery flag */
int yychar;    /* current input token number */

#ifdef YYNMBCHARS
#define YYLEX() yycvtok(yylex())
/*
** yycvtok - return a token if i is a wchar_t value that exceeds 255.
**	If i<255, i itself is the token.  If i>255 but the neither
**	of the 30th or 31st bit is on, i is already a token.
*/
#if defined(__STDC__) || defined(__cplusplus)
int yycvtok(int i)
#else
int yycvtok(i) int i;
#endif
{
  int first = 0;
  int last = YYNMBCHARS - 1;
  int mid;
  wchar_t j;

  if (i & 0x60000000) { /*Must convert to a token. */
    if (yymbchars[last].character < i) {
      return i; /*Giving up*/
    }
    while ((last >= first) && (first >= 0)) { /*Binary search loop*/
      mid = (first + last) / 2;
      j = yymbchars[mid].character;
      if (j == i) { /*Found*/
        return yymbchars[mid].tvalue;
      } else if (j < i) {
        first = mid + 1;
      } else {
        last = mid - 1;
      }
    }
    /*No entry in the table.*/
    return i; /* Giving up.*/
  } else {    /* i is already a token. */
    return i;
  }
}
#else /*!YYNMBCHARS*/
#define YYLEX() yylex()
#endif /*!YYNMBCHARS*/

/*
** yyparse - return 0 if worked, 1 if syntax error not recovered from
*/
#if defined(__STDC__) || defined(__cplusplus)
int yyparse(void)
#else
int yyparse()
#endif
{
  register YYSTYPE *yypvt; /* top of value stack for $vars */

#if defined(__cplusplus) || defined(lint)
  /*
          hacks to please C++ and lint - goto's inside switch should never be
          executed; yypvt is set to 0 to avoid "used before set" warning.
  */
  static int __yaccpar_lint_hack__ = 0;
  switch (__yaccpar_lint_hack__) {
  case 1:
    goto yyerrlab;
  case 2:
    goto yynewstate;
  }
  yypvt = 0;
#endif

  /*
  ** Initialize externals - yyparse may be called more than once
  */
  yypv = &yyv[-1];
  yyps = &yys[-1];
  yystate = 0;
  yytmp = 0;
  yynerrs = 0;
  yyerrflag = 0;
  yychar = -1;

#if YYMAXDEPTH <= 0
  if (yymaxdepth <= 0) {
    if ((yymaxdepth = YYEXPAND(0)) <= 0) {
      yyerror("yacc initialization error");
      YYABORT;
    }
  }
#endif

  {
    register YYSTYPE *yy_pv; /* top of value stack */
    register int *yy_ps;     /* top of state stack */
    register int yy_state;   /* current state */
    register int yy_n;       /* internal state number info */
    goto yystack; /* moved from 6 lines above to here to please C++ */

    /*
    ** get globals into registers.
    ** branch to here only if YYBACKUP was called.
    */
  yynewstate:
    yy_pv = yypv;
    yy_ps = yyps;
    yy_state = yystate;
    goto yy_newstate;

    /*
    ** get globals into registers.
    ** either we just started, or we just finished a reduction
    */
  yystack:
    yy_pv = yypv;
    yy_ps = yyps;
    yy_state = yystate;

    /*
    ** top of for (;;) loop while no reductions done
    */
  yy_stack:
    /*
    ** put a state and value onto the stacks
    */
#if YYDEBUG
    /*
    ** if debugging, look up token value in list of value vs.
    ** name pairs.  0 and negative (-1) are special values.
    ** Note: linear search is used since time is not a real
    ** consideration while debugging.
    */
    if (yydebug) {
      register int yy_i;

      printf("State %d, token ", yy_state);
      if (yychar == 0)
        printf("end-of-file\n");
      else if (yychar < 0)
        printf("-none-\n");
      else {
        for (yy_i = 0; yytoks[yy_i].t_val >= 0; yy_i++) {
          if (yytoks[yy_i].t_val == yychar)
            break;
        }
        printf("%s\n", yytoks[yy_i].t_name);
      }
    }
#endif                               /* YYDEBUG */
    if (++yy_ps >= &yys[yymaxdepth]) /* room on stack? */
    {
      /*
      ** reallocate and recover.  Note that pointers
      ** have to be reset, or bad things will happen
      */
      int yyps_index = (yy_ps - yys);
      int yypv_index = (yy_pv - yyv);
      int yypvt_index = (yypvt - yyv);
      int yynewmax;
#ifdef YYEXPAND
      yynewmax = YYEXPAND(yymaxdepth);
#else
      yynewmax = 2 * yymaxdepth;    /* double table size */
      if (yymaxdepth == YYMAXDEPTH) /* first time growth */
      {
        char *newyys = (char *)YYNEW(int);
        char *newyyv = (char *)YYNEW(YYSTYPE);
        if (newyys != 0 && newyyv != 0) {
          yys = YYCOPY(newyys, yys, int);
          yyv = YYCOPY(newyyv, yyv, YYSTYPE);
        } else
          yynewmax = 0; /* failed */
      } else            /* not first time */
      {
        yys = YYENLARGE(yys, int);
        yyv = YYENLARGE(yyv, YYSTYPE);
        if (yys == 0 || yyv == 0)
          yynewmax = 0; /* failed */
      }
#endif
      if (yynewmax <= yymaxdepth) /* tables not expanded */
      {
        yyerror("yacc stack overflow");
        YYABORT;
      }
      yymaxdepth = yynewmax;

      yy_ps = yys + yyps_index;
      yy_pv = yyv + yypv_index;
      yypvt = yyv + yypvt_index;
    }
    *yy_ps = yy_state;
    *++yy_pv = yyval;

    /*
    ** we have a new state - find out what to do
    */
  yy_newstate:
    if ((yy_n = yypact[yy_state]) <= YYFLAG)
      goto yydefault; /* simple state */
#if YYDEBUG
    /*
    ** if debugging, need to mark whether new token grabbed
    */
    yytmp = yychar < 0;
#endif
    if ((yychar < 0) && ((yychar = YYLEX()) < 0))
      yychar = 0; /* reached EOF */
#if YYDEBUG
    if (yydebug && yytmp) {
      register int yy_i;

      printf("Received token ");
      if (yychar == 0)
        printf("end-of-file\n");
      else if (yychar < 0)
        printf("-none-\n");
      else {
        for (yy_i = 0; yytoks[yy_i].t_val >= 0; yy_i++) {
          if (yytoks[yy_i].t_val == yychar)
            break;
        }
        printf("%s\n", yytoks[yy_i].t_name);
      }
    }
#endif /* YYDEBUG */
    if (((yy_n += yychar) < 0) || (yy_n >= YYLAST))
      goto yydefault;
    if (yychk[yy_n = yyact[yy_n]] == yychar) /*valid shift*/
    {
      yychar = -1;
      yyval = yylval;
      yy_state = yy_n;
      if (yyerrflag > 0)
        yyerrflag--;
      goto yy_stack;
    }

  yydefault:
    if ((yy_n = yydef[yy_state]) == -2) {
#if YYDEBUG
      yytmp = yychar < 0;
#endif
      if ((yychar < 0) && ((yychar = YYLEX()) < 0))
        yychar = 0; /* reached EOF */
#if YYDEBUG
      if (yydebug && yytmp) {
        register int yy_i;

        printf("Received token ");
        if (yychar == 0)
          printf("end-of-file\n");
        else if (yychar < 0)
          printf("-none-\n");
        else {
          for (yy_i = 0; yytoks[yy_i].t_val >= 0; yy_i++) {
            if (yytoks[yy_i].t_val == yychar) {
              break;
            }
          }
          printf("%s\n", yytoks[yy_i].t_name);
        }
      }
#endif /* YYDEBUG */
      /*
      ** look through exception table
      */
      {
        register int *yyxi = yyexca;

        while ((*yyxi != -1) || (yyxi[1] != yy_state)) {
          yyxi += 2;
        }
        while ((*(yyxi += 2) >= 0) && (*yyxi != yychar))
          ;
        if ((yy_n = yyxi[1]) < 0)
          YYACCEPT;
      }
    }

    /*
    ** check for syntax error
    */
    if (yy_n == 0) /* have an error */
    {
      /* no worry about speed here! */
      switch (yyerrflag) {
      case 0: /* new error */
        yyerror("syntax error");
        goto skip_init;
      yyerrlab:
        /*
        ** get globals into registers.
        ** we have a user generated syntax type error
        */
        yy_pv = yypv;
        yy_ps = yyps;
        yy_state = yystate;
      skip_init:
        yynerrs++;
        /* FALLTHRU */
      case 1:
      case 2: /* incompletely recovered error */
              /* try again... */
        yyerrflag = 3;
        /*
        ** find state where "error" is a legal
        ** shift action
        */
        while (yy_ps >= yys) {
          yy_n = yypact[*yy_ps] + YYERRCODE;
          if (yy_n >= 0 && yy_n < YYLAST && yychk[yyact[yy_n]] == YYERRCODE) {
            /*
            ** simulate shift of "error"
            */
            yy_state = yyact[yy_n];
            goto yy_stack;
          }
          /*
          ** current state has no shift on
          ** "error", pop stack
          */
#if YYDEBUG
#define _POP_ "Error recovery pops state %d, uncovers state %d\n"
          if (yydebug)
            printf(_POP_, *yy_ps, yy_ps[-1]);
#undef _POP_
#endif
          yy_ps--;
          yy_pv--;
        }
        /*
        ** there is no state on stack with "error" as
        ** a valid shift.  give up.
        */
        YYABORT;
      case 3: /* no shift yet; eat a token */
#if YYDEBUG
        /*
        ** if debugging, look up token in list of
        ** pairs.  0 and negative shouldn't occur,
        ** but since timing doesn't matter when
        ** debugging, it doesn't hurt to leave the
        ** tests here.
        */
        if (yydebug) {
          register int yy_i;

          printf("Error recovery discards ");
          if (yychar == 0)
            printf("token end-of-file\n");
          else if (yychar < 0)
            printf("token -none-\n");
          else {
            for (yy_i = 0; yytoks[yy_i].t_val >= 0; yy_i++) {
              if (yytoks[yy_i].t_val == yychar) {
                break;
              }
            }
            printf("token %s\n", yytoks[yy_i].t_name);
          }
        }
#endif                   /* YYDEBUG */
        if (yychar == 0) /* reached EOF. quit */
          YYABORT;
        yychar = -1;
        goto yy_newstate;
      }
    } /* end if ( yy_n == 0 ) */
      /*
      ** reduction by production yy_n
      ** put stack tops, etc. so things right after switch
      */
#if YYDEBUG
    /*
    ** if debugging, print the string that is the user's
    ** specification of the reduction which is just about
    ** to be done.
    */
    if (yydebug)
      printf("Reduce by (%d) \"%s\"\n", yy_n, yyreds[yy_n]);
#endif
    yytmp = yy_n;  /* value to switch over */
    yypvt = yy_pv; /* $vars top of value stack */
    /*
    ** Look in goto table for next state
    ** Sorry about using yy_state here as temporary
    ** register variable, but why not, if it works...
    ** If yyr2[ yy_n ] doesn't have the low order bit
    ** set, then there is no action to be done for
    ** this reduction.  So, no saving & unsaving of
    ** registers done.  The only difference between the
    ** code just after the if and the body of the if is
    ** the goto yy_stack in the body.  This way the test
    ** can be made before the choice of what to do is needed.
    */
    {
      /* length of production doubled with extra bit */
      register int yy_len = yyr2[yy_n];

      if (!(yy_len & 01)) {
        yy_len >>= 1;
        yyval = (yy_pv -= yy_len)[1]; /* $$ = $1 */
        yy_state = yypgo[yy_n = yyr1[yy_n]] + *(yy_ps -= yy_len) + 1;
        if (yy_state >= YYLAST || yychk[yy_state = yyact[yy_state]] != -yy_n) {
          yy_state = yyact[yypgo[yy_n]];
        }
        goto yy_stack;
      }
      yy_len >>= 1;
      yyval = (yy_pv -= yy_len)[1]; /* $$ = $1 */
      yy_state = yypgo[yy_n = yyr1[yy_n]] + *(yy_ps -= yy_len) + 1;
      if (yy_state >= YYLAST || yychk[yy_state = yyact[yy_state]] != -yy_n) {
        yy_state = yyact[yypgo[yy_n]];
      }
    }
    /* save until reenter driver code */
    yystate = yy_state;
    yyps = yy_ps;
    yypv = yy_pv;
  }
  /*
  ** code supplied by user is placed in this switch
  */
  switch (yytmp) {

  case 1:
#line 105 "gen.y"
  {
    yy yyb;
    yy yyv_U;
    yy yy_2_1;
    yy yyv_Imports;
    yy yy_3_1;
    yy yy_5_1;
    yy yy_5_2;
    yy_2_1 = (yy)(yypvt[-2].attr[1]);
    yy_3_1 = (yy)(yypvt[-1].attr[1]);
    yyv_U = yy_2_1;
    yyv_Imports = yy_3_1;
    yy_5_1 = yyv_U;
    yy_5_2 = yyv_Imports;
    Trafo(yy_5_1, yy_5_2);
    yyval.attr[0] = yypvt[-3].attr[0];
  } break;
  case 2:
#line 125 "gen.y"
  {
    yy yyb;
    yy yy_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_1 = yyb + 0;
    yy_1[0] = 2;
    yyglov_tokenList = yy_1;
    yyGetPos(&yyval.attr[0]);
  } break;
  case 3:
#line 143 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_P;
    yy yy_2;
    yy yyv_I;
    yy yy_3_1;
    yy yyv_E;
    yy yy_4_1;
    yy yyv_D;
    yy yy_5_1;
    yy_2 = (yy)(yypvt[-4].attr[0]);
    yy_3_1 = (yy)(yypvt[-3].attr[1]);
    yy_4_1 = (yy)(yypvt[-2].attr[1]);
    yy_5_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    yyv_I = yy_3_1;
    yyv_E = yy_4_1;
    yyv_D = yy_5_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_E;
    yy_0_1_3 = yyv_D;
    yy_0_1_4 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 4:
#line 187 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_2_1;
    yy yy_0_1_2_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_D;
    yy yy_2_1;
    yy yyv_P;
    yy yy_3;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2_1 = (yy)(yypvt[-1].attr[1]);
    yy_3 = (yy)(yypvt[-1].attr[0]);
    yyb = yyh;
    yyh += 9;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_D = yy_2_1;
    yyv_P = yy_3;
    yy_0_1_1 = yyv_I;
    yy_0_1_2_1 = yyb + 8;
    yy_0_1_2_1[0] = 2;
    yy_0_1_2_2 = yyv_P;
    yy_0_1_2 = yyb + 5;
    yy_0_1_2[0] = 1;
    yy_0_1_2[1] = ((long)yy_0_1_2_1);
    yy_0_1_2[2] = ((long)yy_0_1_2_2);
    yy_0_1_3 = yyv_D;
    yy_0_1_4 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 5:
#line 236 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_2_1;
    yy yy_0_1_2_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_I;
    yy yy_2_1;
    yy yyv_D;
    yy yy_3_1;
    yy yyv_P;
    yy yy_4;
    yy_2_1 = (yy)(yypvt[-2].attr[1]);
    yy_3_1 = (yy)(yypvt[-1].attr[1]);
    yy_4 = (yy)(yypvt[-1].attr[0]);
    yyb = yyh;
    yyh += 9;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_2_1;
    yyv_D = yy_3_1;
    yyv_P = yy_4;
    yy_0_1_1 = yyv_I;
    yy_0_1_2_1 = yyb + 8;
    yy_0_1_2_1[0] = 2;
    yy_0_1_2_2 = yyv_P;
    yy_0_1_2 = yyb + 5;
    yy_0_1_2[0] = 1;
    yy_0_1_2[1] = ((long)yy_0_1_2_1);
    yy_0_1_2[2] = ((long)yy_0_1_2_2);
    yy_0_1_3 = yyv_D;
    yy_0_1_4 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-3].attr[0];
  } break;
  case 6:
#line 287 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_P;
    yy yy_3;
    yy yyv_I;
    yy yy_4_1;
    yy yyv_F;
    yy yy_5_1;
    yy yyv_D;
    yy yy_6_1;
    yy_3 = (yy)(yypvt[-4].attr[0]);
    yy_4_1 = (yy)(yypvt[-3].attr[1]);
    yy_5_1 = (yy)(yypvt[-2].attr[1]);
    yy_6_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_3;
    yyv_I = yy_4_1;
    yyv_F = yy_5_1;
    yyv_D = yy_6_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_F;
    yy_0_1_3 = yyv_D;
    yy_0_1_4 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-5].attr[0];
  } break;
  case 7:
#line 329 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_I;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_I = yy_1_1;
    yy_0_1 = yyv_I;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 8:
#line 343 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_Str;
    yy yy_1_1;
    yy yy_2_1;
    yy yyv_I;
    yy yy_2_2;
    GetSourceName(&yy_1_1);
    yyv_Str = yy_1_1;
    yy_2_1 = yyv_Str;
    string_to_id(yy_2_1, &yy_2_2);
    yyv_I = yy_2_2;
    yy_0_1 = yyv_I;
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 9:
#line 364 "gen.y"
  {
    yy yyb;
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 10:
#line 371 "gen.y"
  {
    yy yyb;
    yyGetPos(&yyval.attr[0]);
  } break;
  case 11:
#line 380 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_T;
    yy yy_2_1;
    yy_1_1 = (yy)(yypvt[-1].attr[1]);
    yy_2_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_T = yy_2_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 12:
#line 407 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 13:
#line 422 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_E;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy_1_1 = (yy)(yypvt[-1].attr[1]);
    yy_2 = (yy)(yypvt[-1].attr[0]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_E = yy_1_1;
    yyv_P = yy_2;
    yy_0_1_1 = yyv_E;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 14:
#line 451 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_P;
    yy yy_2;
    yy yyv_E;
    yy yy_3_1;
    yy_2 = (yy)(yypvt[-1].attr[0]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    yyv_E = yy_3_1;
    yy_0_1_1 = yyv_E;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 15:
#line 479 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_P;
    yy yy_2;
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    yy_0_1_1 = yyb + 3;
    yy_0_1_1[0] = 2;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 16:
#line 504 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_E;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_E = yy_1_1;
    yyv_P = yy_2;
    yy_0_1_1 = yyv_E;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 17:
#line 531 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_P;
    yy yy_1;
    yyGetPos(&yy_1);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_1;
    yy_0_1_1 = yyb + 3;
    yy_0_1_1[0] = 2;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 18:
#line 558 "gen.y"
  {
    yy yyb;
    yy yyv_L;
    yy yy_2_1;
    yy yy_4_1;
    yy_2_1 = (yy)(yypvt[-1].attr[1]);
    yyv_L = yy_2_1;
    yy_4_1 = yyv_L;
    PrepareImport(yy_4_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 19:
#line 574 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_E;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy_1_1 = (yy)(yypvt[-1].attr[1]);
    yy_2 = (yy)(yypvt[-1].attr[0]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_E = yy_1_1;
    yyv_P = yy_2;
    yy_0_1_1 = yyv_E;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 20:
#line 603 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_P;
    yy yy_2;
    yy yyv_E;
    yy yy_3_1;
    yy_2 = (yy)(yypvt[-1].attr[0]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    yyv_E = yy_3_1;
    yy_0_1_1 = yyv_E;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 21:
#line 631 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_P;
    yy yy_2;
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    yy_0_1_1 = yyb + 3;
    yy_0_1_1[0] = 2;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 22:
#line 656 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_E;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_E = yy_1_1;
    yyv_P = yy_2;
    yy_0_1_1 = yyv_E;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 23:
#line 683 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_P;
    yy yy_1;
    yyGetPos(&yy_1);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_1;
    yy_0_1_1 = yyb + 3;
    yy_0_1_1[0] = 2;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 24:
#line 710 "gen.y"
  {
    yy yyb;
    yy yyv_L;
    yy yy_2_1;
    yy_2_1 = (yy)(yypvt[-1].attr[1]);
    yyv_L = yy_2_1;
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 25:
#line 724 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_E;
    yy yy_2_1;
    yy_2_1 = (yy)(yypvt[-1].attr[1]);
    yyv_E = yy_2_1;
    yy_0_1 = yyv_E;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 26:
#line 741 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_L;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_L = yy_3_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_L;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 27:
#line 768 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 28:
#line 783 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_T;
    yy yy_2_1;
    yy_1_1 = (yy)(yypvt[-1].attr[1]);
    yy_2_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_T = yy_2_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 29:
#line 810 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 30:
#line 824 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_D;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_D = yy_1_1;
    yy_0_1 = yyv_D;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 31:
#line 839 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_D;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_D = yy_1_1;
    yy_0_1 = yyv_D;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 32:
#line 854 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_D;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_D = yy_1_1;
    yy_0_1 = yyv_D;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 33:
#line 869 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_D;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_D = yy_1_1;
    yy_0_1 = yyv_D;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 34:
#line 884 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_D;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_D = yy_1_1;
    yy_0_1 = yyv_D;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 35:
#line 901 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_P;
    yy yy_2;
    yy yyv_M;
    yy yy_3_1;
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_3_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    yyv_M = yy_3_1;
    yy_0_1_1 = yyv_P;
    yy_0_1_2 = yyv_M;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 36:
#line 933 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_3_1;
    yy yy_0_1_3_2;
    yy yyv_I;
    yy yy_2_1;
    yy yyv_P;
    yy yy_3;
    yy yyv_F;
    yy yy_5_1;
    yy_2_1 = (yy)(yypvt[-3].attr[1]);
    yy_3 = (yy)(yypvt[-3].attr[0]);
    yy_5_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 8;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_2_1;
    yyv_P = yy_3;
    yyv_F = yy_5_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3_1 = yyb + 7;
    yy_0_1_3_1[0] = 1;
    yy_0_1_3_2 = yyv_F;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 1;
    yy_0_1_3[1] = ((long)yy_0_1_3_1);
    yy_0_1_3[2] = ((long)yy_0_1_3_2);
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 37:
#line 980 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_3_1;
    yy yy_0_1_3_2;
    yy yyv_I;
    yy yy_2_1;
    yy yyv_P;
    yy yy_3;
    yy yyv_F;
    yy yy_5_1;
    yy_2_1 = (yy)(yypvt[-3].attr[1]);
    yy_3 = (yy)(yypvt[-3].attr[0]);
    yy_5_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 8;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_2_1;
    yyv_P = yy_3;
    yyv_F = yy_5_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3_1 = yyb + 7;
    yy_0_1_3_1[0] = 2;
    yy_0_1_3_2 = yyv_F;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 1;
    yy_0_1_3[1] = ((long)yy_0_1_3_1);
    yy_0_1_3[2] = ((long)yy_0_1_3_2);
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 38:
#line 1023 "gen.y"
  {
    yy yyb;
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 39:
#line 1030 "gen.y"
  {
    yy yyb;
    yyGetPos(&yyval.attr[0]);
  } break;
  case 40:
#line 1040 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_T;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_T = yy_3_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 41:
#line 1067 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 42:
#line 1083 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_T;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_T = yy_3_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 43:
#line 1110 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 44:
#line 1124 "gen.y"
  {
    yy yyb;
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 45:
#line 1131 "gen.y"
  {
    yy yyb;
    yyGetPos(&yyval.attr[0]);
  } break;
  case 46:
#line 1142 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_A;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-3].attr[1]);
    yy_2 = (yy)(yypvt[-3].attr[0]);
    yy_4_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yyv_A = yy_4_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_A;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-3].attr[0];
  } break;
  case 47:
#line 1177 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 48:
#line 1212 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_A;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-3].attr[1]);
    yy_2 = (yy)(yypvt[-3].attr[0]);
    yy_4_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yyv_A = yy_4_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_A;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-3].attr[0];
  } break;
  case 49:
#line 1247 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 50:
#line 1281 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_T;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_P = yy_2;
    yyv_T = yy_4_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 51:
#line 1315 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 52:
#line 1329 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_P = yy_2;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 53:
#line 1361 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 6;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yy_0_1_1 = yyb + 4;
    yy_0_1_1[0] = 2;
    yy_0_1_2 = yyv_I;
    yy_0_1_3 = yyb + 5;
    yy_0_1_3[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 54:
#line 1392 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_Name;
    yy yy_1_1;
    yy yyv_I;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 7;
    if (yyh > yyhx)
      yyExtend();
    yyv_Name = yy_1_1;
    yyv_I = yy_3_1;
    yy_0_1_1_1 = yyv_Name;
    yy_0_1_1 = yyb + 4;
    yy_0_1_1[0] = 1;
    yy_0_1_1[1] = ((long)yy_0_1_1_1);
    yy_0_1_2 = yyv_I;
    yy_0_1_3 = yyb + 6;
    yy_0_1_3[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 55:
#line 1431 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_Name;
    yy yy_2_1;
    yy yyv_I;
    yy yy_4_1;
    yy_2_1 = (yy)(yypvt[-2].attr[1]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 7;
    if (yyh > yyhx)
      yyExtend();
    yyv_Name = yy_2_1;
    yyv_I = yy_4_1;
    yy_0_1_1_1 = yyv_Name;
    yy_0_1_1 = yyb + 4;
    yy_0_1_1[0] = 1;
    yy_0_1_1[1] = ((long)yy_0_1_1_1);
    yy_0_1_2 = yyv_I;
    yy_0_1_3 = yyb + 6;
    yy_0_1_3[0] = 1;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-3].attr[0];
  } break;
  case 56:
#line 1469 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_T;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_P = yy_2;
    yyv_T = yy_4_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 57:
#line 1503 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 58:
#line 1517 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_P = yy_2;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 59:
#line 1549 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 6;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yy_0_1_1 = yyb + 4;
    yy_0_1_1[0] = 2;
    yy_0_1_2 = yyv_I;
    yy_0_1_3 = yyb + 5;
    yy_0_1_3[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 60:
#line 1580 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_Name;
    yy yy_1_1;
    yy yyv_I;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 7;
    if (yyh > yyhx)
      yyExtend();
    yyv_Name = yy_1_1;
    yyv_I = yy_3_1;
    yy_0_1_1_1 = yyv_Name;
    yy_0_1_1 = yyb + 4;
    yy_0_1_1[0] = 1;
    yy_0_1_1[1] = ((long)yy_0_1_1_1);
    yy_0_1_2 = yyv_I;
    yy_0_1_3 = yyb + 6;
    yy_0_1_3[0] = 1;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 61:
#line 1618 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_T;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_P = yy_2;
    yyv_T = yy_4_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 62:
#line 1652 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 63:
#line 1666 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_P = yy_2;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 64:
#line 1698 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 6;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yy_0_1_1 = yyb + 4;
    yy_0_1_1[0] = 2;
    yy_0_1_2 = yyv_I;
    yy_0_1_3 = yyb + 5;
    yy_0_1_3[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 65:
#line 1729 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_Name;
    yy yy_1_1;
    yy yyv_I;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 7;
    if (yyh > yyhx)
      yyExtend();
    yyv_Name = yy_1_1;
    yyv_I = yy_3_1;
    yy_0_1_1_1 = yyv_Name;
    yy_0_1_1 = yyb + 4;
    yy_0_1_1[0] = 1;
    yy_0_1_1[1] = ((long)yy_0_1_1_1);
    yy_0_1_2 = yyv_I;
    yy_0_1_3 = yyb + 6;
    yy_0_1_3[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 66:
#line 1769 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_3_1;
    yy yy_0_1_3_2;
    yy yyv_V;
    yy yy_2_1;
    yy yyv_P;
    yy yy_3;
    yy yyv_T;
    yy yy_5_1;
    yy yyv_P2;
    yy yy_6;
    yy_2_1 = (yy)(yypvt[-3].attr[1]);
    yy_3 = (yy)(yypvt[-3].attr[0]);
    yy_5_1 = (yy)(yypvt[-1].attr[1]);
    yy_6 = (yy)(yypvt[-1].attr[0]);
    yyb = yyh;
    yyh += 7;
    if (yyh > yyhx)
      yyExtend();
    yyv_V = yy_2_1;
    yyv_P = yy_3;
    yyv_T = yy_5_1;
    yyv_P2 = yy_6;
    yy_0_1_1 = yyv_V;
    yy_0_1_2 = yyv_P;
    yy_0_1_3_1 = yyv_T;
    yy_0_1_3_2 = yyv_P2;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 2;
    yy_0_1_3[1] = ((long)yy_0_1_3_1);
    yy_0_1_3[2] = ((long)yy_0_1_3_2);
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 67:
#line 1820 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_3_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Class;
    yy yy_3_1;
    yy yyv_F;
    yy yy_5_1;
    yy_2 = (yy)(yypvt[-5].attr[0]);
    yy_3_1 = (yy)(yypvt[-4].attr[1]);
    yy_5_1 = (yy)(yypvt[-2].attr[1]);
    yyb = yyh;
    yyh += 6;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    yyv_Class = yy_3_1;
    yyv_F = yy_5_1;
    yy_0_1_1 = yyv_Class;
    yy_0_1_2 = yyv_P;
    yy_0_1_3_1 = yyv_F;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 3;
    yy_0_1_3[1] = ((long)yy_0_1_3_1);
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-5].attr[0];
  } break;
  case 68:
#line 1864 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_3_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_F;
    yy yy_3_1;
    yy yyv_K;
    yy yy_5_1;
    yy_2 = (yy)(yypvt[-5].attr[0]);
    yy_3_1 = (yy)(yypvt[-4].attr[1]);
    yy_5_1 = (yy)(yypvt[-2].attr[1]);
    yyb = yyh;
    yyh += 6;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    yyv_F = yy_3_1;
    yyv_K = yy_5_1;
    yy_0_1_1 = yyv_K;
    yy_0_1_2 = yyv_P;
    yy_0_1_3_1 = yyv_F;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 3;
    yy_0_1_3[1] = ((long)yy_0_1_3_1);
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-5].attr[0];
  } break;
  case 69:
#line 1905 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_T;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_T = yy_3_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 70:
#line 1933 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyb + 3;
    yy_0_1_2[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 71:
#line 1960 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_Name;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Type;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_Name = yy_1_1;
    yyv_P = yy_2;
    yyv_Type = yy_4_1;
    yy_0_1_1 = yyv_Name;
    yy_0_1_2 = yyv_Type;
    yy_0_1_3 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 72:
#line 1997 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_T;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_T = yy_3_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 73:
#line 2025 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyb + 3;
    yy_0_1_2[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 74:
#line 2051 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_Type;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Name;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-1].attr[1]);
    yy_2 = (yy)(yypvt[-1].attr[0]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_Type = yy_1_1;
    yyv_P = yy_2;
    yyv_Name = yy_3_1;
    yy_0_1_1 = yyv_Name;
    yy_0_1_2 = yyv_Type;
    yy_0_1_3 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 75:
#line 2090 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_3_1;
    yy yy_0_1_3_1_1;
    yy yy_0_1_3_2;
    yy yy_0_1_3_3;
    yy yy_0_1_3_4;
    yy yyv_C;
    yy yy_1_1;
    yy yyv_I;
    yy yy_2_1;
    yy yyv_P;
    yy yy_3;
    yy yyv_F;
    yy yy_4_1;
    yy yyv_R;
    yy yy_6_1;
    yy_1_1 = (yy)(yypvt[-4].attr[1]);
    yy_2_1 = (yy)(yypvt[-3].attr[1]);
    yy_3 = (yy)(yypvt[-3].attr[0]);
    yy_4_1 = (yy)(yypvt[-2].attr[1]);
    yy_6_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 11;
    if (yyh > yyhx)
      yyExtend();
    yyv_C = yy_1_1;
    yyv_I = yy_2_1;
    yyv_P = yy_3;
    yyv_F = yy_4_1;
    yyv_R = yy_6_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3_1_1 = yyv_I;
    yy_0_1_3_1 = yyb + 9;
    yy_0_1_3_1[0] = 1;
    yy_0_1_3_1[1] = ((long)yy_0_1_3_1_1);
    yy_0_1_3_2 = yyv_C;
    yy_0_1_3_3 = yyv_F;
    yy_0_1_3_4 = yyv_R;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 4;
    yy_0_1_3[1] = ((long)yy_0_1_3_1);
    yy_0_1_3[2] = ((long)yy_0_1_3_2);
    yy_0_1_3[3] = ((long)yy_0_1_3_3);
    yy_0_1_3[4] = ((long)yy_0_1_3_4);
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 76:
#line 2153 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_3_1;
    yy yy_0_1_3_1_1;
    yy yy_0_1_3_2;
    yy yy_0_1_3_3;
    yy yy_0_1_3_4;
    yy yyv_P;
    yy yy_2;
    yy yyv_I;
    yy yy_3_1;
    yy yyv_F;
    yy yy_4_1;
    yy_2 = (yy)(yypvt[-3].attr[0]);
    yy_3_1 = (yy)(yypvt[-2].attr[1]);
    yy_4_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 13;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    yyv_I = yy_3_1;
    yyv_F = yy_4_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3_1_1 = yyv_I;
    yy_0_1_3_1 = yyb + 9;
    yy_0_1_3_1[0] = 1;
    yy_0_1_3_1[1] = ((long)yy_0_1_3_1_1);
    yy_0_1_3_2 = yyb + 11;
    yy_0_1_3_2[0] = 4;
    yy_0_1_3_3 = yyv_F;
    yy_0_1_3_4 = yyb + 12;
    yy_0_1_3_4[0] = 2;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 4;
    yy_0_1_3[1] = ((long)yy_0_1_3_1);
    yy_0_1_3[2] = ((long)yy_0_1_3_2);
    yy_0_1_3[3] = ((long)yy_0_1_3_3);
    yy_0_1_3[4] = ((long)yy_0_1_3_4);
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-3].attr[0];
  } break;
  case 77:
#line 2207 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_I;
    yy yy_1_1;
    yy yy_2;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_I = yy_1_1;
    yy_2 = yyv_I;
    yyglov_currentGroupIdent = yy_2;
    yy_0_1 = yyv_I;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 78:
#line 2225 "gen.y"
  {
    yy yyb;
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 79:
#line 2232 "gen.y"
  {
    yy yyb;
    yyGetPos(&yyval.attr[0]);
  } break;
  case 80:
#line 2243 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_In;
    yy yy_2_1;
    yy yyv_Out;
    yy yy_3_1;
    yy_2_1 = (yy)(yypvt[-2].attr[1]);
    yy_3_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_In = yy_2_1;
    yyv_Out = yy_3_1;
    yy_0_1_1 = yyv_In;
    yy_0_1_2 = yyv_Out;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-3].attr[0];
  } break;
  case 81:
#line 2270 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1_1 = yyb + 3;
    yy_0_1_1[0] = 2;
    yy_0_1_2 = yyb + 4;
    yy_0_1_2[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 82:
#line 2292 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 83:
#line 2306 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 84:
#line 2320 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 3;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 85:
#line 2334 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 5;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 86:
#line 2348 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 6;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 87:
#line 2363 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_L;
    yy yy_2_1;
    yy_2_1 = (yy)(yypvt[-0].attr[1]);
    yyv_L = yy_2_1;
    yy_0_1 = yyv_L;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 88:
#line 2377 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 89:
#line 2391 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_L;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_L = yy_1_1;
    yy_0_1 = yyv_L;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 90:
#line 2406 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_L;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_L = yy_1_1;
    yy_0_1 = yyv_L;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 91:
#line 2420 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 92:
#line 2435 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_T;
    yy yy_2_1;
    yy_1_1 = (yy)(yypvt[-1].attr[1]);
    yy_2_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_T = yy_2_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 93:
#line 2463 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyb + 3;
    yy_0_1_2[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 94:
#line 2489 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_T;
    yy yy_2_1;
    yy_1_1 = (yy)(yypvt[-1].attr[1]);
    yy_2_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_T = yy_2_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 95:
#line 2517 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyb + 3;
    yy_0_1_2[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 96:
#line 2546 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_L;
    yy yy_1_1;
    yy yyv_M;
    yy yy_3_1;
    yy yyv_Cost;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-4].attr[1]);
    yy_3_1 = (yy)(yypvt[-2].attr[1]);
    yy_4_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_L = yy_1_1;
    yyv_M = yy_3_1;
    yyv_Cost = yy_4_1;
    yy_0_1_1 = yyv_L;
    yy_0_1_2 = yyv_M;
    yy_0_1_3 = yyv_Cost;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 97:
#line 2586 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_L;
    yy yy_2_1;
    yy yyv_M;
    yy yy_4_1;
    yy yyv_Cost;
    yy yy_5_1;
    yy_2_1 = (yy)(yypvt[-4].attr[1]);
    yy_4_1 = (yy)(yypvt[-2].attr[1]);
    yy_5_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_L = yy_2_1;
    yyv_M = yy_4_1;
    yyv_Cost = yy_5_1;
    yy_0_1_1 = yyv_L;
    yy_0_1_2 = yyv_M;
    yy_0_1_3 = yyv_Cost;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-5].attr[0];
  } break;
  case 98:
#line 2622 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_N;
    yy yy_2_1;
    yy_2_1 = (yy)(yypvt[-0].attr[1]);
    yyv_N = yy_2_1;
    yy_0_1 = yyv_N;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 99:
#line 2636 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy_0_1 = ((yy)0);
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 100:
#line 2647 "gen.y"
  {
    yy yyb;
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 101:
#line 2654 "gen.y"
  {
    yy yyb;
    yyGetPos(&yyval.attr[0]);
  } break;
  case 102:
#line 2662 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_3_1;
    yy yy_0_1_4;
    yy yy_0_1_4_1;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 9;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3_1 = yyv_P;
    yy_0_1_3 = yyb + 5;
    yy_0_1_3[0] = 2;
    yy_0_1_3[1] = ((long)yy_0_1_3_1);
    yy_0_1_4_1 = yyv_P;
    yy_0_1_4 = yyb + 7;
    yy_0_1_4[0] = 2;
    yy_0_1_4[1] = ((long)yy_0_1_4_1);
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 103:
#line 2708 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_In;
    yy yy_4_1;
    yy yyv_Out;
    yy yy_5_1;
    yy_1_1 = (yy)(yypvt[-4].attr[1]);
    yy_2 = (yy)(yypvt[-4].attr[0]);
    yy_4_1 = (yy)(yypvt[-2].attr[1]);
    yy_5_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yyv_In = yy_4_1;
    yyv_Out = yy_5_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_In;
    yy_0_1_4 = yyv_Out;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 104:
#line 2751 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_L;
    yy yy_2_1;
    yy_2_1 = (yy)(yypvt[-0].attr[1]);
    yyv_L = yy_2_1;
    yy_0_1 = yyv_L;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 105:
#line 2765 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yyv_P;
    yy yy_1;
    yyGetPos(&yy_1);
    yyb = yyh;
    yyh += 2;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_1;
    yy_0_1_1 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 106:
#line 2786 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_List;
    yy yy_1_1;
    yy yyv_Space;
    yy yy_2_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_List = yy_1_1;
    NewINT(&yy_2_1);
    yyv_Space = yy_2_1;
    yy_0_1_1 = yyv_List;
    yy_0_1_2 = yyv_Space;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 107:
#line 2815 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_T;
    yy yy_2_1;
    yy_1_1 = (yy)(yypvt[-1].attr[1]);
    yy_2_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_T = yy_2_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 108:
#line 2842 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yyb = yyh;
    yyh += 1;
    if (yyh > yyhx)
      yyExtend();
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 109:
#line 2858 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_1_1;
    yy yy_0_1_1_2;
    yy yy_0_1_1_3;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_A;
    yy yy_4_1;
    yy yyv_Tempo;
    yy yy_5_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 8;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yyv_A = yy_4_1;
    NewTempo(&yy_5_1);
    yyv_Tempo = yy_5_1;
    yy_0_1_1_1 = yyv_Tempo;
    yy_0_1_1_2 = yyv_I;
    yy_0_1_1_3 = yyv_P;
    yy_0_1_1 = yyb + 4;
    yy_0_1_1[0] = 3;
    yy_0_1_1[1] = ((long)yy_0_1_1_1);
    yy_0_1_1[2] = ((long)yy_0_1_1_2);
    yy_0_1_1[3] = ((long)yy_0_1_1_3);
    yy_0_1_2 = yyv_A;
    yy_0_1_3 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 110:
#line 2909 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_2_1;
    yy yy_0_1_2_2;
    yy yy_0_1_2_3;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_A;
    yy yy_4_1;
    yy yyv_Tempo;
    yy yy_5_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 8;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yyv_A = yy_4_1;
    NewTempo(&yy_5_1);
    yyv_Tempo = yy_5_1;
    yy_0_1_1 = yyv_A;
    yy_0_1_2_1 = yyv_Tempo;
    yy_0_1_2_2 = yyv_I;
    yy_0_1_2_3 = yyv_P;
    yy_0_1_2 = yyb + 4;
    yy_0_1_2[0] = 5;
    yy_0_1_2[1] = ((long)yy_0_1_2_1);
    yy_0_1_2[2] = ((long)yy_0_1_2_2);
    yy_0_1_2[3] = ((long)yy_0_1_2_3);
    yy_0_1_3 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 111:
#line 2960 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_A;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yyv_A = yy_4_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_A;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 112:
#line 2997 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_A;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yyv_A = yy_4_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_A;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 3;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 113:
#line 3036 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_Key;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Field;
    yy yy_4_1;
    yy yyv_Val;
    yy yy_6_1;
    yy_1_1 = (yy)(yypvt[-4].attr[1]);
    yy_2 = (yy)(yypvt[-4].attr[0]);
    yy_4_1 = (yy)(yypvt[-2].attr[1]);
    yy_6_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_Key = yy_1_1;
    yyv_P = yy_2;
    yyv_Field = yy_4_1;
    yyv_Val = yy_6_1;
    yy_0_1_1 = yyv_Key;
    yy_0_1_2 = yyv_Field;
    yy_0_1_3 = yyv_Val;
    yy_0_1_4 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 5;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 114:
#line 3083 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_Field;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Key;
    yy yy_4_1;
    yy yyv_Val;
    yy yy_7_1;
    yy_1_1 = (yy)(yypvt[-5].attr[1]);
    yy_2 = (yy)(yypvt[-5].attr[0]);
    yy_4_1 = (yy)(yypvt[-3].attr[1]);
    yy_7_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_Field = yy_1_1;
    yyv_P = yy_2;
    yyv_Key = yy_4_1;
    yyv_Val = yy_7_1;
    yy_0_1_1 = yyv_Key;
    yy_0_1_2 = yyv_Field;
    yy_0_1_3 = yyv_Val;
    yy_0_1_4 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 5;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-5].attr[0];
  } break;
  case 115:
#line 3129 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_Key;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Field;
    yy yy_4_1;
    yy yyv_Val;
    yy yy_6_1;
    yy_1_1 = (yy)(yypvt[-4].attr[1]);
    yy_2 = (yy)(yypvt[-4].attr[0]);
    yy_4_1 = (yy)(yypvt[-2].attr[1]);
    yy_6_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_Key = yy_1_1;
    yyv_P = yy_2;
    yyv_Field = yy_4_1;
    yyv_Val = yy_6_1;
    yy_0_1_1 = yyv_Key;
    yy_0_1_2 = yyv_Field;
    yy_0_1_3 = yyv_Val;
    yy_0_1_4 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 6;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 116:
#line 3176 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_Field;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Key;
    yy yy_4_1;
    yy yyv_Val;
    yy yy_7_1;
    yy_1_1 = (yy)(yypvt[-5].attr[1]);
    yy_2 = (yy)(yypvt[-5].attr[0]);
    yy_4_1 = (yy)(yypvt[-3].attr[1]);
    yy_7_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_Field = yy_1_1;
    yyv_P = yy_2;
    yyv_Key = yy_4_1;
    yyv_Val = yy_7_1;
    yy_0_1_1 = yyv_Key;
    yy_0_1_2 = yyv_Field;
    yy_0_1_3 = yyv_Val;
    yy_0_1_4 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 6;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-5].attr[0];
  } break;
  case 117:
#line 3220 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_A;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yyv_A = yy_4_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_A;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 118:
#line 3257 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_A;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yyv_A = yy_4_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_A;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 3;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 119:
#line 3296 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_Key;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Field;
    yy yy_4_1;
    yy yyv_Val;
    yy yy_6_1;
    yy_1_1 = (yy)(yypvt[-4].attr[1]);
    yy_2 = (yy)(yypvt[-4].attr[0]);
    yy_4_1 = (yy)(yypvt[-2].attr[1]);
    yy_6_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_Key = yy_1_1;
    yyv_P = yy_2;
    yyv_Field = yy_4_1;
    yyv_Val = yy_6_1;
    yy_0_1_1 = yyv_Key;
    yy_0_1_2 = yyv_Field;
    yy_0_1_3 = yyv_Val;
    yy_0_1_4 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 5;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 120:
#line 3343 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_Field;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Key;
    yy yy_4_1;
    yy yyv_Val;
    yy yy_7_1;
    yy_1_1 = (yy)(yypvt[-5].attr[1]);
    yy_2 = (yy)(yypvt[-5].attr[0]);
    yy_4_1 = (yy)(yypvt[-3].attr[1]);
    yy_7_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_Field = yy_1_1;
    yyv_P = yy_2;
    yyv_Key = yy_4_1;
    yyv_Val = yy_7_1;
    yy_0_1_1 = yyv_Key;
    yy_0_1_2 = yyv_Field;
    yy_0_1_3 = yyv_Val;
    yy_0_1_4 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 5;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-5].attr[0];
  } break;
  case 121:
#line 3389 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_Key;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Field;
    yy yy_4_1;
    yy yyv_Val;
    yy yy_6_1;
    yy_1_1 = (yy)(yypvt[-4].attr[1]);
    yy_2 = (yy)(yypvt[-4].attr[0]);
    yy_4_1 = (yy)(yypvt[-2].attr[1]);
    yy_6_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_Key = yy_1_1;
    yyv_P = yy_2;
    yyv_Field = yy_4_1;
    yyv_Val = yy_6_1;
    yy_0_1_1 = yyv_Key;
    yy_0_1_2 = yyv_Field;
    yy_0_1_3 = yyv_Val;
    yy_0_1_4 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 6;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 122:
#line 3436 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_Field;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Key;
    yy yy_4_1;
    yy yyv_Val;
    yy yy_7_1;
    yy_1_1 = (yy)(yypvt[-5].attr[1]);
    yy_2 = (yy)(yypvt[-5].attr[0]);
    yy_4_1 = (yy)(yypvt[-3].attr[1]);
    yy_7_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_Field = yy_1_1;
    yyv_P = yy_2;
    yyv_Key = yy_4_1;
    yyv_Val = yy_7_1;
    yy_0_1_1 = yyv_Key;
    yy_0_1_2 = yyv_Field;
    yy_0_1_3 = yyv_Val;
    yy_0_1_4 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 6;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-5].attr[0];
  } break;
  case 123:
#line 3481 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_Key;
    yy yy_1_1;
    yy yyv_P;
    yy yy_4;
    yy yyv_Type;
    yy yy_5_1;
    yy yyv_Offset;
    yy yy_6_1;
    yy_1_1 = (yy)(yypvt[-3].attr[1]);
    yy_4 = (yy)(yypvt[-1].attr[0]);
    yy_5_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_Key = yy_1_1;
    yyv_P = yy_4;
    yyv_Type = yy_5_1;
    NewINT(&yy_6_1);
    yyv_Offset = yy_6_1;
    yy_0_1_1 = yyv_Type;
    yy_0_1_2 = yyv_Key;
    yy_0_1_3 = yyv_P;
    yy_0_1_4 = yyv_Offset;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 4;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-3].attr[0];
  } break;
  case 124:
#line 3523 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_3_1;
    yy yy_0_1_4;
    yy yy_0_1_4_1;
    yy yy_0_1_5;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Offset;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 10;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    NewINT(&yy_3_1);
    yyv_Offset = yy_3_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3_1 = yyv_P;
    yy_0_1_3 = yyb + 6;
    yy_0_1_3[0] = 2;
    yy_0_1_3[1] = ((long)yy_0_1_3_1);
    yy_0_1_4_1 = yyv_P;
    yy_0_1_4 = yyb + 8;
    yy_0_1_4[0] = 2;
    yy_0_1_4[1] = ((long)yy_0_1_4_1);
    yy_0_1_5 = yyv_Offset;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 7;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yy_0_1[5] = ((long)yy_0_1_5);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 125:
#line 3576 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yy_0_1_5;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_In;
    yy yy_4_1;
    yy yyv_Out;
    yy yy_5_1;
    yy yyv_Offset;
    yy yy_7_1;
    yy_1_1 = (yy)(yypvt[-4].attr[1]);
    yy_2 = (yy)(yypvt[-4].attr[0]);
    yy_4_1 = (yy)(yypvt[-2].attr[1]);
    yy_5_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 6;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yyv_In = yy_4_1;
    yyv_Out = yy_5_1;
    NewINT(&yy_7_1);
    yyv_Offset = yy_7_1;
    yy_0_1_1 = yyv_I;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_In;
    yy_0_1_4 = yyv_Out;
    yy_0_1_5 = yyv_Offset;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 7;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yy_0_1[5] = ((long)yy_0_1_5);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 126:
#line 3627 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_L;
    yy yy_2_1;
    yy yyv_Pos;
    yy yy_3;
    yy yyv_P;
    yy yy_5_1;
    yy_2_1 = (yy)(yypvt[-1].attr[1]);
    yy_3 = (yy)(yypvt[-1].attr[0]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_L = yy_2_1;
    yyv_Pos = yy_3;
    New_REF_IDENTLIST(&yy_5_1);
    yyv_P = yy_5_1;
    yy_0_1_1 = yyv_L;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_Pos;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 10;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 127:
#line 3664 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_1_1;
    yy yy_0_1_1_2;
    yy yy_0_1_1_3;
    yy yy_0_1_1_3_1;
    yy yy_0_1_1_3_1_1;
    yy yy_0_1_1_3_1_2;
    yy yy_0_1_1_3_2;
    yy yy_0_1_1_3_3;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_M;
    yy yy_2_1;
    yy yyv_Pos;
    yy yy_3;
    yy yyv_P;
    yy yy_5_1;
    yy yyv_Space;
    yy yy_6_1;
    yy_2_1 = (yy)(yypvt[-1].attr[1]);
    yy_3 = (yy)(yypvt[-1].attr[0]);
    yyb = yyh;
    yyh += 17;
    if (yyh > yyhx)
      yyExtend();
    yyv_M = yy_2_1;
    yyv_Pos = yy_3;
    New_REF_IDENTLIST(&yy_5_1);
    yyv_P = yy_5_1;
    NewINT(&yy_6_1);
    yyv_Space = yy_6_1;
    yy_0_1_1_1 = yyv_M;
    yy_0_1_1_2 = yyv_Pos;
    yy_0_1_1_3_1_1 = yyb + 15;
    yy_0_1_1_3_1_1[0] = 2;
    yy_0_1_1_3_1_2 = yyv_Space;
    yy_0_1_1_3_1 = yyb + 12;
    yy_0_1_1_3_1[0] = 1;
    yy_0_1_1_3_1[1] = ((long)yy_0_1_1_3_1_1);
    yy_0_1_1_3_1[2] = ((long)yy_0_1_1_3_1_2);
    yy_0_1_1_3_2 = yyv_Pos;
    yy_0_1_1_3_3 = yyb + 16;
    yy_0_1_1_3_3[0] = 2;
    yy_0_1_1_3 = yyb + 8;
    yy_0_1_1_3[0] = 1;
    yy_0_1_1_3[1] = ((long)yy_0_1_1_3_1);
    yy_0_1_1_3[2] = ((long)yy_0_1_1_3_2);
    yy_0_1_1_3[3] = ((long)yy_0_1_1_3_3);
    yy_0_1_1 = yyb + 4;
    yy_0_1_1[0] = 1;
    yy_0_1_1[1] = ((long)yy_0_1_1_1);
    yy_0_1_1[2] = ((long)yy_0_1_1_2);
    yy_0_1_1[3] = ((long)yy_0_1_1_3);
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_Pos;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 10;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 128:
#line 3734 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_Pos;
    yy yy_2;
    yy yyv_M;
    yy yy_3_1;
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_3_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_Pos = yy_2;
    yyv_M = yy_3_1;
    yy_0_1_1 = yyv_M;
    yy_0_1_2 = yyv_Pos;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 11;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 129:
#line 3762 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_S;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yy_3_1;
    yy yy_3_2;
    yy yy_3_3;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_S = yy_1_1;
    yyv_P = yy_2;
    yy_3_1 = yyv_S;
    yy_3_2 = yyv_P;
    EnterLiteral(yy_3_1, yy_3_2, &yy_3_3);
    yy_0_1_1 = yyv_S;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 8;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 130:
#line 3800 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_P;
    yy yy_2;
    yy yyv_Arg;
    yy yy_5_1;
    yy_2 = (yy)(yypvt[-4].attr[0]);
    yy_5_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    yyv_Arg = yy_5_1;
    yy_0_1_1 = yyv_Arg;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 9;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-4].attr[0];
  } break;
  case 131:
#line 3829 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_L;
    yy yy_2_1;
    yy_2_1 = (yy)(yypvt[-0].attr[1]);
    yyv_L = yy_2_1;
    yy_0_1 = yyv_L;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 132:
#line 3843 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yyv_P;
    yy yy_1;
    yyGetPos(&yy_1);
    yyb = yyh;
    yyh += 2;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_1;
    yy_0_1_1 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 133:
#line 3865 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_T;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-1].attr[1]);
    yy_2 = (yy)(yypvt[-1].attr[0]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_P = yy_2;
    yyv_T = yy_3_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 134:
#line 3899 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yyv_P;
    yy yy_1;
    yyGetPos(&yy_1);
    yyb = yyh;
    yyh += 2;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_1;
    yy_0_1_1 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 135:
#line 3922 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_H;
    yy yy_2_1;
    yy yyv_P;
    yy yy_3;
    yy yyv_T;
    yy yy_4_1;
    yy_2_1 = (yy)(yypvt[-1].attr[1]);
    yy_3 = (yy)(yypvt[-1].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_2_1;
    yyv_P = yy_3;
    yyv_T = yy_4_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 136:
#line 3956 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yyv_P;
    yy yy_1;
    yyGetPos(&yy_1);
    yyb = yyh;
    yyh += 2;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_1;
    yy_0_1_1 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 137:
#line 3978 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_T;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-1].attr[1]);
    yy_2 = (yy)(yypvt[-1].attr[0]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_P = yy_2;
    yyv_T = yy_3_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 138:
#line 4012 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yyv_P;
    yy yy_1;
    yyGetPos(&yy_1);
    yyb = yyh;
    yyh += 2;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_1;
    yy_0_1_1 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 139:
#line 4035 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_H;
    yy yy_2_1;
    yy yyv_P;
    yy yy_3;
    yy yyv_T;
    yy yy_4_1;
    yy_2_1 = (yy)(yypvt[-1].attr[1]);
    yy_3 = (yy)(yypvt[-1].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_2_1;
    yyv_P = yy_3;
    yyv_T = yy_4_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 140:
#line 4069 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yyv_P;
    yy yy_1;
    yyGetPos(&yy_1);
    yyb = yyh;
    yyh += 2;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_1;
    yy_0_1_1 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yyval.attr[1] = ((long)yy_0_1);
    yyGetPos(&yyval.attr[0]);
  } break;
  case 141:
#line 4092 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_P;
    yy yy_3;
    yy yyv_T;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3 = (yy)(yypvt[-1].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_P = yy_3;
    yyv_T = yy_4_1;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyv_T;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 142:
#line 4127 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_H;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_H = yy_1_1;
    yyv_P = yy_2;
    yy_0_1_1 = yyv_H;
    yy_0_1_2 = yyv_P;
    yy_0_1_3 = yyb + 4;
    yy_0_1_3[0] = 2;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 143:
#line 4161 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yy_0_1_5;
    yy yy_0_1_5_1;
    yy yyv_T;
    yy yy_1_1;
    yy yyv_F;
    yy yy_3_1;
    yy yyv_P;
    yy yy_4;
    yy yyv_Tempo;
    yy yy_5_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yy_4 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 8;
    if (yyh > yyhx)
      yyExtend();
    yyv_T = yy_1_1;
    yyv_F = yy_3_1;
    yyv_P = yy_4;
    NewTempo(&yy_5_1);
    yyv_Tempo = yy_5_1;
    yy_0_1_1 = yyv_T;
    yy_0_1_2 = yyv_Tempo;
    yy_0_1_3 = yyv_F;
    yy_0_1_4 = yyv_P;
    yy_0_1_5_1 = yyv_P;
    yy_0_1_5 = yyb + 6;
    yy_0_1_5[0] = 2;
    yy_0_1_5[1] = ((long)yy_0_1_5_1);
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yy_0_1[5] = ((long)yy_0_1_5);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 144:
#line 4215 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yy_0_1_5;
    yy yyv_T;
    yy yy_1_1;
    yy yyv_F;
    yy yy_3_1;
    yy yyv_P;
    yy yy_4;
    yy yyv_A;
    yy yy_6_1;
    yy yyv_Tempo;
    yy yy_8_1;
    yy_1_1 = (yy)(yypvt[-5].attr[1]);
    yy_3_1 = (yy)(yypvt[-3].attr[1]);
    yy_4 = (yy)(yypvt[-3].attr[0]);
    yy_6_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 6;
    if (yyh > yyhx)
      yyExtend();
    yyv_T = yy_1_1;
    yyv_F = yy_3_1;
    yyv_P = yy_4;
    yyv_A = yy_6_1;
    NewTempo(&yy_8_1);
    yyv_Tempo = yy_8_1;
    yy_0_1_1 = yyv_T;
    yy_0_1_2 = yyv_Tempo;
    yy_0_1_3 = yyv_F;
    yy_0_1_4 = yyv_P;
    yy_0_1_5 = yyv_A;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yy_0_1[5] = ((long)yy_0_1_5);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-5].attr[0];
  } break;
  case 145:
#line 4264 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yy_0_1_4_1;
    yy yyv_F;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Tempo;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 7;
    if (yyh > yyhx)
      yyExtend();
    yyv_F = yy_1_1;
    yyv_P = yy_2;
    NewTempo(&yy_3_1);
    yyv_Tempo = yy_3_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyv_F;
    yy_0_1_3 = yyv_P;
    yy_0_1_4_1 = yyv_P;
    yy_0_1_4 = yyb + 5;
    yy_0_1_4[0] = 2;
    yy_0_1_4[1] = ((long)yy_0_1_4_1);
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 146:
#line 4309 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_F;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_A;
    yy yy_4_1;
    yy yyv_Tempo;
    yy yy_6_1;
    yy_1_1 = (yy)(yypvt[-3].attr[1]);
    yy_2 = (yy)(yypvt[-3].attr[0]);
    yy_4_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_F = yy_1_1;
    yyv_P = yy_2;
    yyv_A = yy_4_1;
    NewTempo(&yy_6_1);
    yyv_Tempo = yy_6_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyv_F;
    yy_0_1_3 = yyv_P;
    yy_0_1_4 = yyv_A;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-3].attr[0];
  } break;
  case 147:
#line 4351 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Tempo;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    NewTempo(&yy_3_1);
    yyv_Tempo = yy_3_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyv_I;
    yy_0_1_3 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 3;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 148:
#line 4388 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_I;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_A;
    yy yy_4_1;
    yy yyv_Tempo;
    yy yy_5_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 5;
    if (yyh > yyhx)
      yyExtend();
    yyv_I = yy_1_1;
    yyv_P = yy_2;
    yyv_A = yy_4_1;
    NewTempo(&yy_5_1);
    yyv_Tempo = yy_5_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyv_I;
    yy_0_1_3 = yyv_P;
    yy_0_1_4 = yyv_A;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 4;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 149:
#line 4430 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yyv_P;
    yy yy_2;
    yy yyv_Tempo;
    yy yy_3_1;
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 3;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    NewTempo(&yy_3_1);
    yyv_Tempo = yy_3_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 5;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 150:
#line 4460 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yy_0_1_5;
    yy yyv_X;
    yy yy_1_1;
    yy yyv_P;
    yy yy_3;
    yy yyv_Y;
    yy yy_4_1;
    yy yyv_Tempo;
    yy yy_5_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3 = (yy)(yypvt[-1].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 7;
    if (yyh > yyhx)
      yyExtend();
    yyv_X = yy_1_1;
    yyv_P = yy_3;
    yyv_Y = yy_4_1;
    NewTempo(&yy_5_1);
    yyv_Tempo = yy_5_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyb + 6;
    yy_0_1_2[0] = 1;
    yy_0_1_3 = yyv_P;
    yy_0_1_4 = yyv_X;
    yy_0_1_5 = yyv_Y;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yy_0_1[5] = ((long)yy_0_1_5);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 151:
#line 4508 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yy_0_1_5;
    yy yyv_X;
    yy yy_1_1;
    yy yyv_P;
    yy yy_3;
    yy yyv_Y;
    yy yy_4_1;
    yy yyv_Tempo;
    yy yy_5_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3 = (yy)(yypvt[-1].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 7;
    if (yyh > yyhx)
      yyExtend();
    yyv_X = yy_1_1;
    yyv_P = yy_3;
    yyv_Y = yy_4_1;
    NewTempo(&yy_5_1);
    yyv_Tempo = yy_5_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyb + 6;
    yy_0_1_2[0] = 2;
    yy_0_1_3 = yyv_P;
    yy_0_1_4 = yyv_X;
    yy_0_1_5 = yyv_Y;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yy_0_1[5] = ((long)yy_0_1_5);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 152:
#line 4554 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_X;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_X = yy_1_1;
    yy_0_1 = yyv_X;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 153:
#line 4571 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yy_0_1_5;
    yy yyv_X;
    yy yy_1_1;
    yy yyv_P;
    yy yy_3;
    yy yyv_Y;
    yy yy_4_1;
    yy yyv_Tempo;
    yy yy_5_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3 = (yy)(yypvt[-1].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 7;
    if (yyh > yyhx)
      yyExtend();
    yyv_X = yy_1_1;
    yyv_P = yy_3;
    yyv_Y = yy_4_1;
    NewTempo(&yy_5_1);
    yyv_Tempo = yy_5_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyb + 6;
    yy_0_1_2[0] = 3;
    yy_0_1_3 = yyv_P;
    yy_0_1_4 = yyv_X;
    yy_0_1_5 = yyv_Y;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yy_0_1[5] = ((long)yy_0_1_5);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 154:
#line 4619 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yy_0_1_5;
    yy yyv_X;
    yy yy_1_1;
    yy yyv_P;
    yy yy_3;
    yy yyv_Y;
    yy yy_4_1;
    yy yyv_Tempo;
    yy yy_5_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_3 = (yy)(yypvt[-1].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 7;
    if (yyh > yyhx)
      yyExtend();
    yyv_X = yy_1_1;
    yyv_P = yy_3;
    yyv_Y = yy_4_1;
    NewTempo(&yy_5_1);
    yyv_Tempo = yy_5_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyb + 6;
    yy_0_1_2[0] = 4;
    yy_0_1_3 = yyv_P;
    yy_0_1_4 = yyv_X;
    yy_0_1_5 = yyv_Y;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 1;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yy_0_1[5] = ((long)yy_0_1_5);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 155:
#line 4665 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_X;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_X = yy_1_1;
    yy_0_1 = yyv_X;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 156:
#line 4680 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_X;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_X = yy_1_1;
    yy_0_1 = yyv_X;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 157:
#line 4697 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_2_1;
    yy yy_0_1_2_2;
    yy yy_0_1_2_3;
    yy yy_0_1_2_4;
    yy yy_0_1_2_5;
    yy yy_0_1_2_5_1;
    yy yy_0_1_3;
    yy yyv_Type;
    yy yy_1_1;
    yy yyv_P1;
    yy yy_2;
    yy yyv_F;
    yy yy_4_1;
    yy yyv_P2;
    yy yy_5;
    yy yyv_Tempo;
    yy yy_6_1;
    yy yyv_Offset;
    yy yy_7_1;
    yy_1_1 = (yy)(yypvt[-2].attr[1]);
    yy_2 = (yy)(yypvt[-2].attr[0]);
    yy_4_1 = (yy)(yypvt[-0].attr[1]);
    yy_5 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 12;
    if (yyh > yyhx)
      yyExtend();
    yyv_Type = yy_1_1;
    yyv_P1 = yy_2;
    yyv_F = yy_4_1;
    yyv_P2 = yy_5;
    NewTempo(&yy_6_1);
    yyv_Tempo = yy_6_1;
    NewINT(&yy_7_1);
    yyv_Offset = yy_7_1;
    yy_0_1_1 = yyv_Type;
    yy_0_1_2_1 = yyv_Tempo;
    yy_0_1_2_2 = yyv_Offset;
    yy_0_1_2_3 = yyv_F;
    yy_0_1_2_4 = yyv_P2;
    yy_0_1_2_5_1 = yyv_P2;
    yy_0_1_2_5 = yyb + 10;
    yy_0_1_2_5[0] = 2;
    yy_0_1_2_5[1] = ((long)yy_0_1_2_5_1);
    yy_0_1_2 = yyb + 4;
    yy_0_1_2[0] = 3;
    yy_0_1_2[1] = ((long)yy_0_1_2_1);
    yy_0_1_2[2] = ((long)yy_0_1_2_2);
    yy_0_1_2[3] = ((long)yy_0_1_2_3);
    yy_0_1_2[4] = ((long)yy_0_1_2_4);
    yy_0_1_2[5] = ((long)yy_0_1_2_5);
    yy_0_1_3 = yyv_P1;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 4;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 158:
#line 4769 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_2_1;
    yy yy_0_1_2_2;
    yy yy_0_1_2_3;
    yy yy_0_1_2_4;
    yy yy_0_1_2_5;
    yy yy_0_1_3;
    yy yyv_Type;
    yy yy_1_1;
    yy yyv_P1;
    yy yy_2;
    yy yyv_F;
    yy yy_4_1;
    yy yyv_P2;
    yy yy_5;
    yy yyv_A;
    yy yy_7_1;
    yy yyv_Tempo;
    yy yy_9_1;
    yy yyv_Offset;
    yy yy_10_1;
    yy_1_1 = (yy)(yypvt[-5].attr[1]);
    yy_2 = (yy)(yypvt[-5].attr[0]);
    yy_4_1 = (yy)(yypvt[-3].attr[1]);
    yy_5 = (yy)(yypvt[-3].attr[0]);
    yy_7_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 10;
    if (yyh > yyhx)
      yyExtend();
    yyv_Type = yy_1_1;
    yyv_P1 = yy_2;
    yyv_F = yy_4_1;
    yyv_P2 = yy_5;
    yyv_A = yy_7_1;
    NewTempo(&yy_9_1);
    yyv_Tempo = yy_9_1;
    NewINT(&yy_10_1);
    yyv_Offset = yy_10_1;
    yy_0_1_1 = yyv_Type;
    yy_0_1_2_1 = yyv_Tempo;
    yy_0_1_2_2 = yyv_Offset;
    yy_0_1_2_3 = yyv_F;
    yy_0_1_2_4 = yyv_P2;
    yy_0_1_2_5 = yyv_A;
    yy_0_1_2 = yyb + 4;
    yy_0_1_2[0] = 3;
    yy_0_1_2[1] = ((long)yy_0_1_2_1);
    yy_0_1_2[2] = ((long)yy_0_1_2_2);
    yy_0_1_2[3] = ((long)yy_0_1_2_3);
    yy_0_1_2[4] = ((long)yy_0_1_2_4);
    yy_0_1_2[5] = ((long)yy_0_1_2_5);
    yy_0_1_3 = yyv_P1;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 4;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-5].attr[0];
  } break;
  case 159:
#line 4836 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yy_0_1_5;
    yy yy_0_1_5_1;
    yy yyv_F;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Tempo;
    yy yy_3_1;
    yy yyv_Offset;
    yy yy_4_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 8;
    if (yyh > yyhx)
      yyExtend();
    yyv_F = yy_1_1;
    yyv_P = yy_2;
    NewTempo(&yy_3_1);
    yyv_Tempo = yy_3_1;
    NewINT(&yy_4_1);
    yyv_Offset = yy_4_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyv_Offset;
    yy_0_1_3 = yyv_F;
    yy_0_1_4 = yyv_P;
    yy_0_1_5_1 = yyv_P;
    yy_0_1_5 = yyb + 6;
    yy_0_1_5[0] = 2;
    yy_0_1_5[1] = ((long)yy_0_1_5_1);
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 3;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yy_0_1[5] = ((long)yy_0_1_5);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 160:
#line 4888 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yy_0_1_5;
    yy yyv_F;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_A;
    yy yy_4_1;
    yy yyv_Tempo;
    yy yy_6_1;
    yy yyv_Offset;
    yy yy_7_1;
    yy_1_1 = (yy)(yypvt[-3].attr[1]);
    yy_2 = (yy)(yypvt[-3].attr[0]);
    yy_4_1 = (yy)(yypvt[-1].attr[1]);
    yyb = yyh;
    yyh += 6;
    if (yyh > yyhx)
      yyExtend();
    yyv_F = yy_1_1;
    yyv_P = yy_2;
    yyv_A = yy_4_1;
    NewTempo(&yy_6_1);
    yyv_Tempo = yy_6_1;
    NewINT(&yy_7_1);
    yyv_Offset = yy_7_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyv_Offset;
    yy_0_1_3 = yyv_F;
    yy_0_1_4 = yyv_P;
    yy_0_1_5 = yyv_A;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 3;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yy_0_1[5] = ((long)yy_0_1_5);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-3].attr[0];
  } break;
  case 161:
#line 4937 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_V;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Tempo;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_V = yy_1_1;
    yyv_P = yy_2;
    NewTempo(&yy_3_1);
    yyv_Tempo = yy_3_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyv_V;
    yy_0_1_3 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 5;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 162:
#line 4972 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_N;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Tempo;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_N = yy_1_1;
    yyv_P = yy_2;
    NewTempo(&yy_3_1);
    yyv_Tempo = yy_3_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyv_N;
    yy_0_1_3 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 6;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 163:
#line 5007 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yyv_S;
    yy yy_1_1;
    yy yyv_P;
    yy yy_2;
    yy yyv_Tempo;
    yy yy_3_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yy_2 = (yy)(yypvt[-0].attr[0]);
    yyb = yyh;
    yyh += 4;
    if (yyh > yyhx)
      yyExtend();
    yyv_S = yy_1_1;
    yyv_P = yy_2;
    NewTempo(&yy_3_1);
    yyv_Tempo = yy_3_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyv_S;
    yy_0_1_3 = yyv_P;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 7;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 164:
#line 5043 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_P;
    yy yy_2;
    yy yyv_X;
    yy yy_3_1;
    yy yyv_Tempo;
    yy yy_4_1;
    yy_2 = (yy)(yypvt[-1].attr[0]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 6;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    yyv_X = yy_3_1;
    NewTempo(&yy_4_1);
    yyv_Tempo = yy_4_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyb + 5;
    yy_0_1_2[0] = 2;
    yy_0_1_3 = yyv_P;
    yy_0_1_4 = yyv_X;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 165:
#line 5083 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yy_0_1_1;
    yy yy_0_1_2;
    yy yy_0_1_3;
    yy yy_0_1_4;
    yy yyv_P;
    yy yy_2;
    yy yyv_X;
    yy yy_3_1;
    yy yyv_Tempo;
    yy yy_4_1;
    yy_2 = (yy)(yypvt[-1].attr[0]);
    yy_3_1 = (yy)(yypvt[-0].attr[1]);
    yyb = yyh;
    yyh += 6;
    if (yyh > yyhx)
      yyExtend();
    yyv_P = yy_2;
    yyv_X = yy_3_1;
    NewTempo(&yy_4_1);
    yyv_Tempo = yy_4_1;
    yy_0_1_1 = yyv_Tempo;
    yy_0_1_2 = yyb + 5;
    yy_0_1_2[0] = 1;
    yy_0_1_3 = yyv_P;
    yy_0_1_4 = yyv_X;
    yy_0_1 = yyb + 0;
    yy_0_1[0] = 2;
    yy_0_1[1] = ((long)yy_0_1_1);
    yy_0_1[2] = ((long)yy_0_1_2);
    yy_0_1[3] = ((long)yy_0_1_3);
    yy_0_1[4] = ((long)yy_0_1_4);
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-1].attr[0];
  } break;
  case 166:
#line 5124 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_X;
    yy yy_2_1;
    yy_2_1 = (yy)(yypvt[-1].attr[1]);
    yyv_X = yy_2_1;
    yy_0_1 = yyv_X;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-2].attr[0];
  } break;
  case 167:
#line 5139 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_I;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_I = yy_1_1;
    yy_0_1 = yyv_I;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
  case 168:
#line 5154 "gen.y"
  {
    yy yyb;
    yy yy_0_1;
    yy yyv_I;
    yy yy_1_1;
    yy_1_1 = (yy)(yypvt[-0].attr[1]);
    yyv_I = yy_1_1;
    yy_0_1 = yyv_I;
    yyval.attr[1] = ((long)yy_0_1);
    yyval.attr[0] = yypvt[-0].attr[0];
  } break;
#line 532 "/usr/ccs/bin/yaccpar"
  }
  goto yystack; /* reset registers in driver code */
}
