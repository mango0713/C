#include <stdio.h>

main()
{
	int day, i, count = 0;
	int gp[5];
	
	scanf ("%d", &day);
	scanf ("%d %d %d %d %d",  &gp[0], &gp[1], &gp[2], &gp[3], &gp[4]);
	
	for (i = 0; i <= 4; i++)
	{
		if (day == gp[i])
		{
			count = count + 1;
		}
	}
	printf ("%d", count);

} 
