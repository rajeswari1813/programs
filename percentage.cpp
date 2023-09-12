#include<stdio.h>
int main()
{
    float math,phy,cs,mech,civil,percentage;
    printf( "math");
	scanf("%f",&math);
	printf("phy");
	scanf("%f",&phy);
	printf("cs");
	scanf("%f",&cs);
	printf("mech");
	scanf("%f",&mech);
	printf("civil");
	scanf("%f",civil);
	percentage = (math+phy+cs+mech+civil)/5;
	printf("%f",percentage);
	
}
