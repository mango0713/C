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
			printf ("%d �� ¦�� �Դϴ�. \n", i);
		}
		else
		{
			sumodd = sumodd + i;
			printf ("%d�� Ȧ���Դϴ�. \n", i);
		}
	}
	printf ("¦���� ���� %d �̰�, Ȧ���� ���� %d �Դϴ�.", sumeven, sumodd);
}
