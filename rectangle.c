#include<stdio.h>
void main()
{
	int l, b, a, p;
	printf("enter the length of the rectangle");
	scanf("%d", &l);
	printf("enter the width of the rectangle");
	scanf("%d", &b);
	a = l*b , p = 2*(l+b);
	printf("area of the rectangle:%d\n",a);
	printf("perimeter of the rectangle:%d",p);
}
