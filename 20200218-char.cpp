#include <stdio.h>

int main(void)
{
	
	int age;
	double h;
	char gender;
	
	
	printf ("���̸� �Է��ϼ��� :");
	scanf ("%d", &age);
	printf("Ű�� �Է��ϼ��� :");
	scanf ("%lf", &h);
	printf ("������ �Է��ϼ���(���ڴ� M, ���ڴ� F) :");
	scanf (" %c", &gender);
	
	
	printf ("\n");
	printf ("���� : %3d \n", age);
	printf ("Ű�� : %.1lf \n",h);
	printf ("���� : %3c \n", gender);
	
	return 0;
}
