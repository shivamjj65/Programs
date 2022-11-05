// Fibonacci series //
#include<stdio.h>
int main()
{
	int i=1,a=0,b=1,n,c;
	printf("Enter number to diplay terms of series: ");
	scanf("%d",&n);
	printf("%d\t%d",a,b);
	while(i<=n-2)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
		i++;
	}
	
}
