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
	printf ("�迭������ �ִ밪�� %d �Դϴ�. \n", max); 

} 
