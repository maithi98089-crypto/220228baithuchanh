#include <stdio.h>
#include<string.h>
int main (){
	int a;
	float f; 
	char ch;
	char hoten[30];
	
	scanf("%d",&a);
	fflush(stdin);
	scanf("%f",&f);
	fflush(stdin);
	scanf("%c",&ch);
	strcpy(hoten,"ToMaiThi");
	
	printf("\n%d\t%f\t%c\t%s", a,f,ch,hoten);
	
	return 0;
}
	
