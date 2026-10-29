#include<tdio.h>
int main()
{
	int n, i=1;
	printf("nhap vao so n:");
	scanf("%d",&n);
	printf("cac so chan tu 1 den %d:",n);
	i=1;
	while (i<=n)
	{
			if(i%2==0)
	{
		printf("%d", i);
	}
		i++;
	}
	//in so le
	printf ("\mcac so le tu 1 den %d:",n);
	i=1;
	while (i<=n)
	{
	if (i%2 ! =0)
	{
			printf("%d",i);
	}
	i++;
	}
	return 0;
	}
	
			
		
