#include <stdio.h>

int main(void)
{
	int n, i, j, k;
	int p[23]= {};
	scanf ("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &j);
		p[j]++; 
	}
	for(k=1; k<=23; k++)
	{
	    
		printf("%d ", p[k]); 
	} 
	
	return 0;
}
