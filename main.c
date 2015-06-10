#include <stdio.h>

int main()
{
	int i = 0;
	int s = i++ + ++i;
	printf("%d\n %d\n",s,i);
	return 0;
}
