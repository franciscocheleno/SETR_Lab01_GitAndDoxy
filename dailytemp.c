/**
 * \file:   dailytemp.c
 * \author: Francisco Heleno <francisco.c.heleno@ua.pt> and Hugo Carola <hugocarola@ua.pt>
 *
 * \date February, 2024, 15:47 PM
 * \brief Daily temperature
 * 
 */

#include <stdio.h>

#define SIZE 24

/**
 * @brief Initializes the temperature vector with zeros
 * @param temperatures Pointer to the temperature vector
 */
void dtInit(int *temperatures) 
{
	for(int i = 0;i < SIZE;i++)
	{
		temperatures[i] = 0;
	}
	printf("Vector for storing temperatures during a day has been initialized\n");
	return;
}

/**
 * @brief Adds a temperature value to the temperature vector at a specific hour
 * @param vect_temp Pointer to the temperature vector
 * @param hour Hour of the day (0-23)
 * @param temp Temperature value
 */
void dtAdd(int vect_temp[SIZE],int hour, int temp) 
{
		if ((temp >= -50) && (temp <= 50)){

			vect_temp[hour] = temp;

		printf ("Temperature at %d'o clock is %d\n",hour ,temp);
		}
		else {

			printf("Invalid temperature (Out of range value)\n");

		}
}

/**
 * @brief Calculates the minimum, maximum, and average temperature values from the temperature vector
 * @param vect_temp Pointer to the temperature vector
 * @param min Minimum temperature value
 * @param max Maximum temperature value
 * @param avg Average temperature value
 */
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
	printf("Average is %d\n", avg);
	return;
}

/**
 * @brief Main function.
 */
int main(void)
{
	int tempDay[SIZE];
	int min = 0,max = 0,avg = 0;

	dtInit(tempDay);

  	dtAdd(tempDay,11,34);
	dtAdd(tempDay,12,-2);
	dtAdd(tempDay,15,57);
	dtAdd(tempDay,19,-43);
	dtAdd(tempDay,5,1000);

	dtStat(tempDay,min,max,avg);
	
	return 0;
}
