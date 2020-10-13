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

main()
{
	 printf ("%d     %d      %d     %lf", add(120, 360), sub(130, 272), mux(12, 79), div(79, 19));
}

