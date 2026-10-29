#include <>stdio.h>
#include <math.h>
int main ()
{
	int n,i=2;
	int la_so_nguyen_to=1;
	printf ("nhap vao so nguyen n: ");
	scanf ("%d",&n);
	if (n<2)
	{
		la_so_nguyen_to=0;
		}
		else {
			while(i<+sqrt(n))
			{
		if (n%i==0)
		{
			la_so_nguyen_to=0;
			break;
			}
			i++;
			}
			}
			if (la_so_nguyen_to)
			{
				printf("%d la so nguyen to.\n",n);
				}
				return 0;
				}
