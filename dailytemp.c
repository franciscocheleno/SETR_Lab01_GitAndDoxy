#include <stdio.h>

#define SIZE 24

void dtInit(int *temperatures) 
{
	for(int i = 0;i < SIZE;i++)
	{
		temperatures[i] = 0;
	}
	printf("Vector for storing temperatures during a day has been initialized\n");
	return;
}

void dtAdd(void) 
{
	printf("This is a function V2.1");
	return;
}
void dtStat(void) 
{
	printf("This is a function V2.1");
	return;
}

int main(void)
{
	int tempDay[SIZE];

	dtInit(tempDay);
  	dtAdd();
	dtStat();
	
	return 0;
} 
