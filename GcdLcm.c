#include <stdio.h>
#include <math.h>

int main(){
    int num1,num2;
    printf("ENTER 2 NUMBERS: ");
    scanf("%d %d",&num1,&num2);
    //GCD
    int x,gcd;
    for(x=1;x<=num1 && x<=num2;x++){
        if(num1%x==0&&num2%x==0)
        {
            gcd = x;
        }
    }
    printf("%d",gcd);
    return 0;
}