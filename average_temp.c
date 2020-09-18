#include <stdio.h>

#define MONTHS 12
#define YEARS 3

int main()
{
	double arr[3][12] = { -0.9,1.0,7.1,12.1,19.4,22.5,25.9,27.2,22.6,16.4,7.6,1.4,	//2019
		-4.0,-1.6,8.1,13.0,18.2,23.1,27.8,28.8,21.5,13.1,7.8,-0.6,	//2018
		-1.8,-0.2,6.3,13.9,19.5,23.3,26.9,25.9,22.1,16.4,5.6,-1.9,	//2017
		 };						
	double avg_year[3] = { 0 };
	double avg_month[12] = { 0 };

	printf("[Temperature Data]\n");

	printf("Year index :");
	for (int i = 0; i < 12; i++)
		printf("\t%d", i + 1);
	printf("\n");

	for (int j = 0; j < 3; j++)
	{
		printf("Year %d\t   :", j + 1);

		for (int i = 0; i < 12; i++)
			printf("\t%.1f", arr[j][i]);
		
		printf("\n");
	}


	printf("\n[Yearly average temperatures of 3 years]\n");
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 12; i++)
			avg_year[j] += arr[j][i];
	
		avg_year[j] /= 12;
		printf("Year %d : average temperature = %.1f\n", j, avg_year[j]);
	}


	printf("\n[Monthly average temperatures for 3 years\n");
	printf("Year index :");
	for (int i = 0; i < 12; i++)
		printf("\t%d", i + 1);

	printf("\n");

	printf("Avg temps :");
	for (int j = 0; j < 12; j++)
	{
		for (int i = 0; i < 3; i++)
			avg_month[j] += arr[i][j];

		avg_month[j] /= 3;
		printf("\t%.1f", avg_month[j]);
	}
	
	printf("\n");

	return 0;

}


