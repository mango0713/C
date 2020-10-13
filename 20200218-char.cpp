#include <stdio.h>

int main(void)
{
	
	int age;
	double h;
	char gender;
	
	
	printf ("나이를 입력하세요 :");
	scanf ("%d", &age);
	printf("키를 입력하세요 :");
	scanf ("%lf", &h);
	printf ("성별을 입력하세요(남자는 M, 여자는 F) :");
	scanf (" %c", &gender);
	
	
	printf ("\n");
	printf ("나이 : %3d \n", age);
	printf ("키는 : %.1lf \n",h);
	printf ("성별 : %3c \n", gender);
	
	return 0;
}
