#include <stdio.h>
main()
{
	int i, n;
	int gp = 0; 
	int count = 0;
	         
	printf ("약수값을 입력하세요 \n");
	scanf ("%d", &n);
	
	for (i = 1; i <=n; i++)
	{
		if (n % i == 0)
		{
			printf ("%d는 %d의 약수입니다. \n", i, n);
			gp = gp + i;
			count = count + 1;
			
		} 
	}
	
	printf ("약수의 합은 %d 입니다. \n", gp);
	printf ("전체 약수의 개수는 %d 입니다. \n", count);
}
