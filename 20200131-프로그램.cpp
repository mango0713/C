#include <stdio.h>

main()
{
	int menu;
	while (1)
	{
	    printf ("= = = = = = = = = = = = = =\n");
	    printf ("==== 1. ��������ϱ�====== \n");
	    printf ("==== 2. ¦������ϱ�====== \n");
	    printf ("==== 3. Ȧ������ϱ�====== \n");
	    printf ("==== 4. �������ϱ�====== \n");
	    printf ("==== 5. �������ϱ�====== \n");
	    printf ("==== 6. �׸��ϱ�    ====== \n");
	    printf ("= = = = = = = = = = = = = =\n");
	    
	    printf ("�޴��� �����ϼ��� \n");
	    scanf ("%d", &menu);
	    
	    if (menu == 6)
	    {
	    	printf ("���α׷��� �����ϴ� \n");
	    	break;  
		}
	}
   

}
