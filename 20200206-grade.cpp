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
	printf ("성적의 총합은 %d 입니다. \n", total);
	printf ("성적의 평균은 %lf 입니다. \n", (double)total/8);
} 
