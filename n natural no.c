// Display n natural numbers //
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter any number:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\n %d",i);
		i=i+1;
	}
	getch();
}
