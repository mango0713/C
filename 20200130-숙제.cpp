#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	int menu, loop, value, i;
	while (1)
	{
	    printf("=============================\n");
	    printf("==   1. ���� �ѷ� ���ϱ�   ==\n");
	    printf("==   2. ���� ���� ���ϱ�   ==\n");
	    printf("==   3. ���� ���� ���ϱ�   ==\n");
	    printf("==   4. �׸��α�           ==\n");
	    printf("=============================\n");
	    printf ("�޴��� �����ϼ��� \n");
	    scanf ("%d", &menu);
	    
	    if (menu == 4)
	    {
	    	printf ("���α׷��� �����ϴ� \n");
	    	break;  
		}
		
		if ( menu == 1 || menu == 2 || menu == 3 ) 
		{
			printf ("�ݺ��� Ƚ���� �Է��� �ּ���.\n");
			scanf ("%d", &loop);
			printf ("������ �Է��ϼ���. \n");
			scanf ("%d", &value);
	    }
	    
	    if (menu == 1)
	    {
	    	printf (" ���� �ѷ����� ���ϱ� �����մϴ�. \n");
	    	for (i = 1; i <= loop; i++)
	    	{
	    		if (value * 2 = i ); 
			   	printf ("���� �ѷ��� %d �Դϴ�. \n", i);
			}
	    	
		}
	    else if (menu == 2)
	    {
	    	printf ("���� ������ ���� ���ϱ�  �����մϴ�. \n");
			for (i = 1; i <= loop; i++)
			{
				if ( value * value == 0);
				{ 
				    printf ("���� ������ %d �Դϴ�. \n", i);
				}
			} 
	     	
		}
		else if (menu == 3)
	    {
	    	printf ("���� ���� ���ϱ⸦ �����մϴ�. \n");
	    	for (i = 1; i <= loop; i++)
			{
				if (value * value * value * 4/3);
				{
					printf ("���� ���̴� %d �Դϴ�. \n", i);
					
				} 
				 
			}
			
	    	
	    }
    	printf ("����Ϸ��� �ƹ�Ű�� �������� \n");
		getch();
		system("cls");
		

	    	
	}
}
   


