#include <stdio.h>

main()
{
	int pengsoo;
	
	printf ("input number \n");
	scanf ("%d", &pengsoo);
	
	if (pengsoo % 2 == 0)
	{
		printf ("even \n");
	}
	else
	{
		printf ("odd \n");
	}
}
