#include <stdio.h>

int main (void)
{
	char ab;
	
	do
	{
		scanf("%c", &ab);
		printf ("%c\n", ab);
	}while(ab != 'q');
	
	return 0;
	
}

