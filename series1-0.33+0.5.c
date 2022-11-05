// Sum of series 1/1-1/3+1/5...//
#include<stdio.h>
int main()
{
	int n,i,a=1,z=1;
	float sum=0.0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1.0/a*z);
		a=a+2;
		z=z*(-1);
	}
	printf("Sum is %f",sum);
}
