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
			printf ("A+ ���� \n");
		}
		else if (jumsu >= 94)
		{
		    printf ("A���� \n");	
		}
		else
		{
			printf ("A- ���� \n");
		}
	}   
	
	else if (jumsu >= 80)
	{
		if (jumsu >= 87)
		{
			printf ("B+ ���� \n");
		}
		else if (jumsu >= 84)
		{
		    printf ("B���� \n");	
		}
		else
		{
			printf ("B- ���� \n");
		}
	}
	
	else if (jumsu >= 70)
	{	
	    if (jumsu >= 77)
		{
			printf ("C+ ���� \n");
		}
		else if (jumsu >= 74)
		{
		    printf ("C���� \n");	
		}
		else
		{
			printf ("C- ���� \n");
		}
		
	}
	
	else if (jumsu >= 60)
	{
	    if (jumsu >= 67)
		{
			printf ("D+ ���� \n");
		}
		else if (score >= 64)
		{
		    printf ("D���� \n");	
		}
		else
		{
			printf ("D- ���� \n");
		}
	}
	
	else if (jumsu < 60)   //else
	{
		printf ("F ���� \n");
	}
		
}
