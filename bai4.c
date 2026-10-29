#include <stdio.h>
int main ()
{
	int n;
	printf("Nhap vao so n :");
	scanf("%d", &n);
	int i=1;
	long long s=0;
	while (i<=n)
	{
	s+=i;
	i++;
	
	}
	printf ("tong s =1+2+.....+%d la :%d\n",n,s);
	return 0;
	}
	
