/*

   GENTLE 97

   Gentle Compiler Construction System 3.0
   Copyright (C) 1992, 1997  F.W. Schroeer

*/

static scanargs();

void main(int argc, char **argv) {

  scanargs(argc, argv);

  init_scanner();
  init_idtab();

  ROOT();

  exit(0);
}

/*----------------------------------------------------------------------------*/

static int TraceFlag = 0;

int TraceOption() { return TraceFlag; }

static int SymbolFileFlag = 0;

int SymbolFileOption() { return SymbolFileFlag; }

/*----------------------------------------------------------------------------*/

static scanargs(argc, argv) int argc;
char **argv;
{
  int i;
  int source_defined = 0;

  i = 1;
  while (i < argc) {
    if (strcmp(argv[i], "-subdir") == 0)
      SetOption_SUBDIR();
    else if (strcmp(argv[i], "-alert") == 0)
      SetOption_ALERT();
    else if (strcmp(argv[i], "-if") == 0)
      SymbolFileFlag = 1;
    else if (strcmp(argv[i], "-trace") == 0)
      TraceFlag = 1;
    else {
      int len;

      len = strlen(argv[i]);

      if (len > 0 && argv[i][0] == '-') {
        printf("Invalid option: %s\n", argv[i]);
        exit(1);
      }
      if (len <= 2 || argv[i][len - 2] != '.' || argv[i][len - 1] != 'g') {
        printf("Invalid filename: %s\n", argv[i]);
        exit(1);
      }

      DefSourceName(argv[i]);
      source_defined = 1;
    }
    i++;
  }
  if (!source_defined) {
    printf("Missing file name\n");
    exit(1);
  }
}

/*----------------------------------------------------------------------------*/
