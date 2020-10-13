#include <stdio.h>

int number = 8;
int sorted[8];

void merge(int a[], int m, int middle, int n)
{
	int i = m;
	int j = middle + 1;
	int k = m;
	
	while(i <+ a[j])
	{
		if(a[i] <= a[j])
		{
			sorted[k] = a[i];
		    i++;
		}
		else
		{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	if (i > middle)
	{
		int t;
		for (t = j; t <= n; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}
	else
	{
		int t;
		for(t = m; t <= middle; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}
	int t;
	for (t =m; t<=n; t++)
	{
		a[t] = sorted[t];
	}
}

void mergesort(int a[], int m, int n)
{
	if(m < n)
	{
		int middle = (m+n) / 2;
		mergesort(a, n, middle);
		//printf("aaa\n");
		mergesort(a, middle + 1,n);
		//printf("bbb\n");
		merge(a, m, middle, n);
		//printf("ccc\n");
	}
}

int main(void)
{
	int array[8] = {8, 5, 4, 1, 9, 10, 7, 2};
	mergesort(array, 0,number - 1);
	
	int i;
	for (i = 0; i <number; i++);
	{
		printf("%d\n", array[i]);
	}
	
	return 0;
}
