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

void dtAdd(int vect_temp[SIZE],int hour, int temp) 
{
	//for (int i=0; i<SIZE;i++){
	
		if ((temp >= -50) && (temp <= 50)){

			vect_temp[hour] = temp;

		printf ("Temperature at %d'o clock is %d\n",hour ,temp);
		}

		else {

			printf("Invalid temperature (Out of range value)\n");

		}
	//}
	
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
  	dtAdd(tempDay,11,34);
	dtAdd(tempDay,15,57);
	dtStat();
	
	return 0;
} 
