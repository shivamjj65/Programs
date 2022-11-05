// Factorial using while loop //
#include<stdio.h>
void main()
{
	long int i=1,f=1,n;
	printf("Enter a number");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("\n \a Factorial is: %d",f);
	getch();
}
