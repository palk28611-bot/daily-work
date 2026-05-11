#include <stdio.h>
//simple interest
int main()
{
	float p, r, t,si;
	
	printf("enter principal: ");
	scanf("%f", &p);
	
	printf("enter rate: ");
	scanf("%f", &r);
	
	printf("enter time: ");
	scanf("%f", &t);
	
	si = (p * r * t)/ 100;
	printf("simple interest = % .2f", si);
	return 0;
}