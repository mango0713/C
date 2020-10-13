#include <stdio.h>
int main(void)
{
    int array[100][100];
    int n;
    int value = 0;
    int i, j;
    
    scanf ("%d",&n);
    
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            value = value + 1;
            array[i][j] = value;
            printf ("%d ", array[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
