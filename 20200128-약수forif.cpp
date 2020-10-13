#include <stdio.h>
main()
{
	int i, n;
	printf ("약수값을 입력하세요 \n");
	scanf ("%d", &n);
	
	for (i = 1; i <=n; i++)
	{
		if (n % i == 0)
		{
			printf ("%d는 %d의 약수입니다. \n", i, n);
		} 
	}
}

