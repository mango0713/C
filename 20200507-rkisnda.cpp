#include <stdio.h>

int main (void)
{
	int a = 23;
	unsigned int b =  5;
	long long int c = 34;
	
	printf ("%d \n", a) ;
	printf ("%u \n", b) ;
	printf ("%11d \n", c) ;
	
	float d =3.56451456;
	double e = 3.5673424567856;
	
	printf (".10f \n", d);
	printf (".15lf \n", e);
	
	char f = 'A' ;
	
	printf ("%c \n", f);
	printf ("%c \n", f+3);
	
	int array01[5] =  {402, 478, 90, 123, 56 };
	
	for(int i = 0; i < 5; i++)
	{
		printf ("%d \n", array01[i]);
	}
	
	
	return 0;
}
