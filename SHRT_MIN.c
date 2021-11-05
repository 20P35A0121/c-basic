#include<stdio.h>
#include<limits.h>
void main()
{
	printf("shotr:\nsigned:%hd to %hd\nunsigned:%u to %u,\n int:\nsigned:%d to %d\nunsigned:%U TO %U,\nlong: \nsigned:%ld to %ld\nunsigned:%lu to %lu\nlong long:\nsigned:%lld to %lld\nunsigned:%llu to %llu",SHRT_MIN,SHRT_MAX,0,USHRT_MAX,INT_MIN,INT_MAX,LONG_MIN,LONG_MAX,0,ULONG_MAX,LLONG_MIN,LLONG_MAX,0,ULLONG_MAX);
	
}
