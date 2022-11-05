//Sum of Series 1/2+3/4+5/6...//
#include<stdio.h>
int main()
{
	int a=1,b=2,i,n;
	float sum=0.0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	sum=sum+(float)a/b;
	a=a+2;
	b=b+2;
}
printf("Sum is %f",sum);
}
