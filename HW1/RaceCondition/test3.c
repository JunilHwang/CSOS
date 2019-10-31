#include <stdlib.h>
#include <sys/param.h>
#include <unistd.h>
#include <stdio.h>

void main(){
  char *fn = "/tmp/XYZ";
  unlink(fn);
  symlink("/home/seed/Desktop/CSOS/HW1/RaceCondition/textRes.txt", fn);
  printf("/tmp/XYZ -> ./resCheck.txt\n");
}
