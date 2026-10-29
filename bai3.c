#include <stdio.h>
int main ()
{
	int i=1;
	while(i<=100) 
{
		printf("---BANG CUU CHUONG %d---\n",i);
		int j=1;
		while (j<=10)
{
	printf("%d*%d =%d\n", i, j, i*j);
		j++;
	}
	printf ("\n");
	i++;
	}
	return 0;
	}
