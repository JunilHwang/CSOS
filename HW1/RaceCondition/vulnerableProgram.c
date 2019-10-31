#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>

int main(){
  char *fn = "/tmp/XYZ";
  char buffer[60];
  FILE *fp;
  scanf("%50s", buffer);
  
  if(!access(fn, W_OK)) {
    fp = fopen(fn, "a+");
    if (!access(fn, W_OK)) {
      fwrite("\n", sizeof(char), 1, fp);
      fwrite(buffer, sizeof(char), strlen(buffer), fp);
    } else printf("No Write Permission \n");
    fclose(fp);
  } else printf("No permission \n");
  return 0;
}

