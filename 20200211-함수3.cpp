#include <stdio.h>

int add(int num1, int num2) 
{
	return num1+num2;
}
int sub(int num1, int num2)
{
	return num1-num2;
} 
int mux(int num1, int num2)
{
	return num1*num2;
} 
double div(int num1, int num2)
{
	return (double)num1/num2;
} 

int main(void)
{
	int a;
	int b;
	
	printf ("input number 1 :");
	scanf ("%d", &a);
	printf ("input number 2 :");
	scanf ("%d", &b);
	printf ("%d     %d      %d     %lf", add(a, b), sub(a, b), mux(a, b), div(a, b));
	
	return 0;
}

