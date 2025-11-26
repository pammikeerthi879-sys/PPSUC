#include<stdio.h>
int main()
{
	int a,b,c;
	float d,e;
	scanf("%d%d%d%f",&a,&b,&c,&d);
	e=((a/b*c)-b+(a*d/3));
	printf("e=%f\n",e);
	return 0;
}
