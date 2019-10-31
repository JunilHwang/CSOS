#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int bof(FILE *badfile) {
  char buffer[12];
  // int guard = 1;
  fread(buffer, sizeof(char), 40, badfile);
  /*if (guard != 1) {
    printf("guard number changed\n");
    exit(1);
  }*/
  return 1;
}

int main(int argc, char **argv) {
  FILE *badfile;
  char *shell = (char *)getenv("MYSHELL");
  printf("Address: %x\n", (unsigned int)shell);
  badfile = fopen("badfile", "r");
  bof(badfile);
  printf("Returned Properly\n");
  fclose(badfile);
  return 1;
}
