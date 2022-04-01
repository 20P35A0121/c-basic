/*ARMSTRONG NUMBER*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,r,t,sum=0,l=0;
	scanf("%d",&n);
	t=a=n;
    while(n>0)
	{
		l++;
		n=n/10;
	}
	while(a>0)
	{
		r=a%10;
		sum=sum+pow(r,l);
		a=a/10;
	}
	if(t==sum)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not armstrong number");
	}
}
