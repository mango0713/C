#include <stdio.h>

main()
{
	int grade[] = {85, 90, 92, 100, 98, 72, 90, 0};
	int i;
	int max = grade[0]; 
	 
	
	for (i = 0; i <= 7; i++)
	{
		if(max < grade[i])
		{
			max = grade[i];
		}
    }
	printf ("배열에서의 최대값은 %d 입니다. \n", max); 

} 
