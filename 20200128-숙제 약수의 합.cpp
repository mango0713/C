#include <stdio.h>
main()
{
	int i, n;
	int gp = 0; 
	int count = 0;
	         
	printf ("������� �Է��ϼ��� \n");
	scanf ("%d", &n);
	
	for (i = 1; i <=n; i++)
	{
		if (n % i == 0)
		{
			printf ("%d�� %d�� ����Դϴ�. \n", i, n);
			gp = gp + i;
			count = count + 1;
			
		} 
	}
	
	printf ("����� ���� %d �Դϴ�. \n", gp);
	printf ("��ü ����� ������ %d �Դϴ�. \n", count);
}
