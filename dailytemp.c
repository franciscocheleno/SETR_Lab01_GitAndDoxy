#include <stdio.h>

void dtInit(void) 
{
	printf("This is a function V2.1");
	return;
}

void dtAdd(int vect_temp[SIZE],int hour, int temp) 
{
	for (int i=0; i<SIZE;i++){
	
		if ((vect_temp[i] >= -50) && (vect_temp[i] <= 50)){

			temperatures[i] = vect_temp[hour] ;

		printf ("Temperature at %d'o clock is %d",hour ,temp);
		}

		else {

			printf("Invalid temperature (Out of range value)");

		}
	}
	
	return;
}
void dtStat(void) 
{
	printf("This is a function V2.1");
	return;
}

void main(void)
{
	dtInit();
  	dtAdd(tempDay,11,34);
	dtAdd(tempDay,15,57);
	dtStat();
} 
