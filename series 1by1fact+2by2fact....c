#include<stdio.h>
int main()
{
	int n,f=1,i;
	float sum=0.0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
		sum=sum+(1.0/f);
	}
	printf("Sum is %f",sum);

}
