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
void dtStat(int vect_temp[SIZE],int min,int max,int avg)
{
	int sum = 0;
	int count = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if(vect_temp[i] != 0){
			count++;
		}
		if (vect_temp[i] > max)
		{
			max = vect_temp[i];
		}
		else if (vect_temp[i] < min)
		{
			min = vect_temp[i];
		}
		sum += vect_temp[i];
	}
	avg = sum/count;
	printf("Minimum is %d\n", min);
	printf("Maximum is %d\n", max);
	printf("Average is %.2f", avg);
	return;
}

int main(void)
{
	int tempDay[SIZE];
	int min,max,avg = 0;

	dtInit(tempDay);

  	dtAdd(tempDay,11,34);
	dtAdd(tempDay,15,57);

	dtStat(tempDay,min,max,avg);
	
	return 0;
} 
