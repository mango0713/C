#include <stdio.h>

int NumberCompare(int num1, int num2); 



int main(void)
{
	printf ("3�� 4�߿��� ū���� %d �Դϴ�. \n", NumberCompare(3, 4));
	printf ("-7�� 2�߿��� ū���� %d �Դϴ�. \n", NumberCompare(-7, 2));

	return 0;
}

 
int NumberCompare(int num1, int num2) 
{
	if (num1 > num2)
	{
		return num1;                     //return 2�� �̻� �ɼ� ����. 
	}
	else
	{
		return num2;
	}
}



 

