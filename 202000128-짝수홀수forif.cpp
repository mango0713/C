#include <stdio.h>
main()
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		if (i % 2 == 0) //i & 2 ! =1
		{
			printf ("%d 는 짝수 입니다. \n", i);
		}
		else
		{
			printf ("%d는 홀수입니다. \n", i);
		}
	}
}
