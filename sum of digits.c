// Sum of digits number //
#include<stdio.h>
void main()
{
	int sum=0,n,r;
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of digits is:%d",sum);

getch();
}

