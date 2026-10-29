#include <stdio.h>
int main ()
{
	int n ;
	unsigned long long giai-thua=1;
	int i=1;
	printf 9"nhap vao so nguyen duong n:");
	scanf("%d",&n);
	if (n<0)
	{
		printf ("khong ton tai giai thua cho so am!\n");
	}
	else {
		while (i<=n)
	{
		giai-thua *=i;
		i++;
		}
		printf ("%d! =%llu\n",n,giai-thua);
		}
		return 0;
		}
