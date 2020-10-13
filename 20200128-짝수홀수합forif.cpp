#include <stdio.h>
main()
{
	int i;
	int sumeven = 0, sumodd = 0; 
	for (i = 0; i <= 100; i++)
	{
		if (i % 2 == 0) //i & 2 ! =1
		{
			sumeven = sumeven + i;
			printf ("%d 는 짝수 입니다. \n", i);
		}
		else
		{
			sumodd = sumodd + i;
			printf ("%d는 홀수입니다. \n", i);
		}
	}
	printf ("짝수의 합은 %d 이고, 홀수의 합은 %d 입니다.", sumeven, sumodd);
}
