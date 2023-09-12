#include<stdio.h>
int main()
{
	int a,b,sum,dif,mul,modul;
	float div;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	sum=a+b;
	dif=a-b;
	mul=a*b;
	div=a/b;
	modul=a%b;
	printf("%d",sum);
	printf("%d",dif);
	printf("%d",mul);
	printf("%f",div);
}
