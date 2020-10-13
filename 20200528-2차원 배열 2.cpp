#include <stdio.h>

int main(void)
{
    int array[19][19] = {};
    int n, i, a, b, j, k;
    
    scanf ("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf ("%d %d", &a, &b);
        array[a][b] = 1;
    }
    
    for (j = 0; j < 19; j++)
    {
        for (k = 0; k < 19; k++)
        {
            printf ("%d", array[j+1][k+1]);
        }
        printf ("\n");
    }
    
	return 0;
}
