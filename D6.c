#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	srand(time(0));	
	int rNum = rand() % 6 + 1;
	printf("%d\r\n", rNum);	
	return 0;
}
