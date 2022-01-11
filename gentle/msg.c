/*

   GENTLE 97

   Gentle Compiler Construction System 3.0
   Copyright (C) 1992, 1997  F.W. Schroeer

*/

#include <stdio.h>
#include <stdlib.h>

//extern void id_to_string(Ident id, char **repr)
extern void yyGetPos(long *n);

/*----------------------------------------------------------------------------*/

static void printpos(long pos) {
  if (pos == 0)
    printf("at unknown position: ");
  else {
    extern char *GetFileName();
    extern long GetLine();
    extern long GetCol();
    printf("\"%s.g\", line %ld, col %ld: ", GetFileName(pos), GetLine(pos),
           GetCol(pos));
  }
}

/*----------------------------------------------------------------------------*/

int Option_ALERT = 0;

void SetOption_ALERT() { Option_ALERT = 1; }

/*----------------------------------------------------------------------------*/

void MESSAGE(char *msg, long pos) {

#ifdef MAC

  {
    extern char *GetFileName();
    extern long GetLine();
    extern long GetCol();

    if (Option_ALERT) {
      FILE *CmdFile;

      CmdFile = fopen("CmdFile", "w");
      if (CmdFile < 0) {
        Fatal("Cannot open CmdFile");
      }
      fprintf(CmdFile, "Open \"%s.g\"; Find %ld \"%s.g\"\n", GetFileName(pos),
              GetLine(pos), GetFileName(pos));
      fprintf(CmdFile, "Alert -s %s\n", msg);
      exit(2);

    } else {
      printf("### Error: %s\n", msg);
      printf("    File \"%s.g\"; Line %ld\n", GetFileName(pos), GetLine(pos));
    }

    exit(1);
  }

#else

  printpos(pos);
  printf("%s\n", msg);
  exit(1);

#endif
}

/*----------------------------------------------------------------------------*/

void MESSAGE1(char *msg1, long id, char *msg2, long pos) {
  char buf[200];
  char *str;
  id_to_string(id, &str);
  sprintf(buf, "%s%s%s", msg1, str, msg2);
  MESSAGE(buf, pos);
}

/*----------------------------------------------------------------------------*/

void MESSAGE2(char *msg1, long id1, char *msg2, long id2, char *msg3, long pos) {
  char buf[200];
  char *str1;
  char *str2;
  id_to_string(id1, &str1);
  id_to_string(id2, &str2);
  sprintf(buf, "%s%s%s%s%s", msg1, str1, msg2, str2, msg3);
  MESSAGE(buf, pos);
}

/*----------------------------------------------------------------------------*/

void yyerror(char *msg) {
  long pos;
  yyGetPos(&pos);
  MESSAGE(msg, pos);
}

/*----------------------------------------------------------------------------*/

void yyerrorexit(int rc)
{ exit(1); }

/*----------------------------------------------------------------------------*/

void ScanError(char *msg) {
  long pos;
  yyGetPos(&pos);
  MESSAGE(msg, pos);
}

/*----------------------------------------------------------------------------*/

void Fatal(char *msg) {
  printf("Fatal Error: %s\n", msg);
  exit(1);
}

/*----------------------------------------------------------------------------*/
