#include <stdio.h>

int main(void)
{
	int i, j, temp; 
	int array[10] = {3, 0, 1, 8, 7, 2, 5, 4, 6, 9};
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9-i; j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d \n", array[i]);
	}
	return 0;
}
