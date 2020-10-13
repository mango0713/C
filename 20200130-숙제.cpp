#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	int menu, loop, value, i;
	while (1)
	{
	    printf("=============================\n");
	    printf("==   1. 원의 둘레 구하기   ==\n");
	    printf("==   2. 원의 넓이 구하기   ==\n");
	    printf("==   3. 구의 부피 구하기   ==\n");
	    printf("==   4. 그만두기           ==\n");
	    printf("=============================\n");
	    printf ("메뉴를 선택하세요 \n");
	    scanf ("%d", &menu);
	    
	    if (menu == 4)
	    {
	    	printf ("프로그램을 끝냅니다 \n");
	    	break;  
		}
		
		if ( menu == 1 || menu == 2 || menu == 3 ) 
		{
			printf ("반복할 횟수를 입력해 주세요.\n");
			scanf ("%d", &loop);
			printf ("지름을 입력하세요. \n");
			scanf ("%d", &value);
	    }
	    
	    if (menu == 1)
	    {
	    	printf (" 원의 둘레값을 구하기 시작합니다. \n");
	    	for (i = 1; i <= loop; i++)
	    	{
	    		if (value * 2 = i ); 
			   	printf ("원의 둘레값 %d 입니다. \n", i);
			}
	    	
		}
	    else if (menu == 2)
	    {
	    	printf ("원의 넓이의 값을 구하기  시작합니다. \n");
			for (i = 1; i <= loop; i++)
			{
				if ( value * value == 0);
				{ 
				    printf ("원의 넓이은 %d 입니다. \n", i);
				}
			} 
	     	
		}
		else if (menu == 3)
	    {
	    	printf ("구의 넓이 구하기를 시작합니다. \n");
	    	for (i = 1; i <= loop; i++)
			{
				if (value * value * value * 4/3);
				{
					printf ("구의 넓이는 %d 입니다. \n", i);
					
				} 
				 
			}
			
	    	
	    }
    	printf ("계속하려면 아무키나 누르세요 \n");
		getch();
		system("cls");
		

	    	
	}
}
   


