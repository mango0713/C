#include <stdio.h>

main()
{
	int menu;
	while (1)
	{
	    printf ("= = = = = = = = = = = = = =\n");
	    printf ("==== 1. 정수출력하기====== \n");
	    printf ("==== 2. 짝수출력하기====== \n");
	    printf ("==== 3. 홀수출력하기====== \n");
	    printf ("==== 4. 배수출력하기====== \n");
	    printf ("==== 5. 약수출력하기====== \n");
	    printf ("==== 6. 그만하기    ====== \n");
	    printf ("= = = = = = = = = = = = = =\n");
	    
	    printf ("메뉴를 선택하세요 \n");
	    scanf ("%d", &menu);
	    
	    if (menu == 6)
	    {
	    	printf ("프로그램을 끝냅니다 \n");
	    	break;  
		}
	}
   

}
