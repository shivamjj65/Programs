// Sum of series 1+1/2+1/3+1/4......//
#include<stdio.h>
int main()
{
	int n,i;
	float sum=0.0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+1.0/i;
	}
	printf("\n Sum is %f",sum);
}
