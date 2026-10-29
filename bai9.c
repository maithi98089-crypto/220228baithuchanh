#include <stdio.h>
int main ()
{
	long long n, temp;
	long long dao_nguoc=0;
	int tong_chu_so =0;
	printf("nhap vao mot so nguyen:");
	scanf ("%lld", &n);
	temp=n;
	long long num=(n<0)? -n :n;
	while (num >0)
	{
		int chu_so=num % 10;
		dao_nguoc=dao_nguoc*10+chu_so;
		tong_chu_so +=chu_so;
		num /=10;
		}
		if (n<0)
		{
			dao_nguoc;
			}
	printf ("so dao nguoc cua %lld la : %lld\n",n ,dao_nguoc);
	printf("tong cac chu so cua %lld la :%d\n",n,tong_chu_so);
	return 0;
	}
