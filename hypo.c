#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    float c;
    printf("Enter sides a and b  : ");
    scanf("%d %d",&a,&b);
    a = pow(a,2);
    b = pow(b,2);
    c = sqrt(a+b);
    printf("Hypotenuse of triangle is : %f ",c);
}