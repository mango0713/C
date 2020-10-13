#include <stdio.h>

int main(void)
{
	int gp[5] = {78, 56, 90, 43, 12};
	double gps[3] = {13.5, 43.1, 1000.23};
	char ebs[7] = {'P', 'E', 'N', 'G', 'S', 'O', 'O'};
	int kmj[5] = {};
	printf ("%d \n", gp[2]);
	printf ("%.2lf \n", gps[2]);
	for (int i = 0; i <= 6; i++)
	{
		printf ("%C \n", ebs[i]);
	}
	for (int n =0; n <= 4; n++)
	{
		printf ("%d \n", gp[n]);
	}
	for (int m = 0; m <= 4; m++)
	{
		scanf ("%d", &kmj[m]);
	}

	return 0;
}
