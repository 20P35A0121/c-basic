#include<stdio.h>
void main()
{
	int m, h;
	printf("entre the minutes");
	scanf("%d",&m);
	h= m/60;
	m =m%60;
    printf("%d hour(s) %d minute(s)", h, m);
}
