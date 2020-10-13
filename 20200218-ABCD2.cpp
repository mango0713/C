#include <stdio.h>

int main(void)
{
	char start, ch;
	
	for (start='z'; start>='a'; start--)
	{
		for (ch='a'; ch<start; ch++)
		    printf(" ");
		
		for (ch=start; ch<='z'; ch++)
		    printf("%c",ch);
		    
		printf("\n");
	}
	return 0;
}
