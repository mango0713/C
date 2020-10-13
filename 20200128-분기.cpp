#include <stdio.h>

main()
{
	int jumsu;
	
	printf ("score input \n");
    scanf ("%d", &jumsu);
	
	if (jumsu >= 90);
	{
		if (jumsu >= 97)
		{
			printf ("A+ 학점 \n");
		}
		else if (jumsu >= 94)
		{
		    printf ("A학점 \n");	
		}
		else
		{
			printf ("A- 학점 \n");
		}
	}   
	
	else if (jumsu >= 80)
	{
		if (jumsu >= 87)
		{
			printf ("B+ 학점 \n");
		}
		else if (jumsu >= 84)
		{
		    printf ("B학점 \n");	
		}
		else
		{
			printf ("B- 학점 \n");
		}
	}
	
	else if (jumsu >= 70)
	{	
	    if (jumsu >= 77)
		{
			printf ("C+ 학점 \n");
		}
		else if (jumsu >= 74)
		{
		    printf ("C학점 \n");	
		}
		else
		{
			printf ("C- 학점 \n");
		}
		
	}
	
	else if (jumsu >= 60)
	{
	    if (jumsu >= 67)
		{
			printf ("D+ 학점 \n");
		}
		else if (score >= 64)
		{
		    printf ("D학점 \n");	
		}
		else
		{
			printf ("D- 학점 \n");
		}
	}
	
	else if (jumsu < 60)   //else
	{
		printf ("F 학점 \n");
	}
		
}
