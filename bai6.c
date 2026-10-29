#include <stdio.h>
int main ()
{
	int n,i =1;
	printf("nhap vao so n : ");
	scanf("%d",&n);
	printf("---BANG CUU CHUONG CUA %d :\n",n);
	while (i<=10)
	{
		printf ("%d x %d =%d\n",n,i,n*i);
		i++;
		}
		return 0;
		}
