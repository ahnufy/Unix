#include <stdio.h>
#include <fcntl.h>


int main()
{
	int fd = 0;
	
	fd = open("main.c",O_RDWR);

	printf("%d\n",fd);

	return 0;
}
