#include <stdio.h>

main()
{
	int grade[] = {100, 100, 100, 100, 100, 100, 100, 100};
	int i; 
	int total =  0; 
	
	for (i = 0; i <= 7; i++)
	{
		printf ("%d \n", grade[i]);
		total = total + grade[i];
	} 
	printf ("������ ������ %d �Դϴ�. \n", total);
	printf ("������ ����� %lf �Դϴ�. \n", (double)total/8);
} 
