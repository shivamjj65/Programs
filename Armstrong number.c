// Armstrong number //
#include<stdio.h>
int main()
{
	int sum=0,t,n,r;
	printf("Enter any number: ");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==t)
	printf("Armstrong number");
	else
	printf("Not armstrong number");
	
}

