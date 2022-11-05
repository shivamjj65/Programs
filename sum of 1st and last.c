// Sum of first and last digit of a number //
#include<stdio.h>
int main()
{
	int sum=0,n,a;
	printf("Enter any number:");
	scanf("%d",&n);
	a=n%10;
	sum=sum+a;
	while(n!=0)
	{
		n=n/10;
		if(n==1||n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9)
		sum=sum+n;
	}
	printf("SUM OF FIRST AND LAST DIGIT IS: %d",sum);
	getch();
}
