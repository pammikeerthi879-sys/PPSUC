#include<stdio.h>
int main()
{
	int a,u,t,x;
	printf("enter a,u,t values");
	scanf("%d%d%d",&a,&u,&t);
	x=u*t+(a*t*t)/2;
	printf("distance is:%d",x);
	return 0;
}
