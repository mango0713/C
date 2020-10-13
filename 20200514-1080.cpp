#include<stdio.h>
int main()
{
    int sum = 0;
    int i = 1;
    int n;
    
    scanf ("%d", &n);
    while (1)
    {
        sum = sum + i;
        
        if (n <= sum)
        {
            printf("%d", i);
            break;
        }
       
       i++;
    }
    
    return 0;
}
