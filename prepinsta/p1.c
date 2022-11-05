
#include<stdio.h>

//positive or negative no
void positiveOrNegative(){
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("No is negative");
    }
    else if(n==0){
        printf("No is zero");
    }
    else{
        printf("No is positive");
    }
}

//even or odd
void evenOrOdd(){
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}

//sum of n natural no's
void sumOfN(){
    int a,b,sum=0,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        sum=sum+i;
    }
    printf("Sum of %d to %d is: %d",a,b,sum);
}

//Greatest
void Greatest(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        printf("%d is greatest",a);
    }
    else if(b>a&&b>c){
        printf("%d is greatest",b);
    }
    else{
        printf("%d is greatest",c);
    }
}

//Prime no
void Primecheck(){
    int n,i,c=1;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            c=0;
        }
    }
    if(c==1){
            printf("%d is prime ",n);
        }
        else{
            printf("Not prime");
        }
}

//Sum of digits
void SumOfDigits(){
    int n,sum=0,rem;
    scanf("%d",&n);
    while (n>0)
    {
        rem = n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum of digits is: %d",sum);
}

//Reverse of number
void rev(){
    int n,digit=0,rem;
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        digit=digit*10+rem;
        n=n/10;
    }
    printf("Reverse is: %d",digit);
}

//Armstrong no
void Armstrong(){
    int num ,n,n1,c=0,mul=1,sum=0,r,f,i;
      printf("enter any num: \n");
      scanf("%d",&num);
      n=num;
      n1=num;
      while(n!=0)
      {
          r=n%10;
          c++;
          n=n/10;
     }
     while (num!=0)
     {
         f=num%10;
         mul=1;
         for(i=1;i<=c;i++)
         {
              mul=mul*f;
         }

        sum=sum+mul;
       num=num/10;
     }
     if(n1==sum)
         printf("Armstrong Number");
    else
         printf("Not an Armstrong Number");
}

//Finonacci series
void fibo(){
    int n;
    scanf("%d",&n);
    int a=0,b=1,i=0,c;
    printf("0 1");
    while(i<n){
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
        i++;
    }
}

//Harshad no
void harshad(){
    int no;
    scanf("%d",&no);
    int n=no,rem,sum=0;
    while(no>0){
        rem=no%10;
        sum=sum+rem;
        no=no/10;
    }
    if(n%sum==0){
        printf("Harshad number");
    }
    else{
        printf("Not Harshad no");
    }
}

int main(){
    printf("\n------------------ +ve or -ve\tenter number---------------------\n");
    positiveOrNegative();
    
    printf("\n------------------Even/Odd\tEnter number----------------\n");
    evenOrOdd();
    
    printf("\n------------Sum of n natural no's\tEnter range-------------------\n");
    sumOfN(); 
    
    
    printf("\n------------Greatest no's\t Enter a,b,c-------------------\n");
    Greatest(); 
    
    printf("\n------------Prime\t Enter no-------------------\n");
    Primecheck();    
    
    printf("\n------------Sum of digits\t Enter no-------------------\n");
    SumOfDigits(); 
    
    printf("\n------------Reverse of a no\t Enter no-------------------\n");
    rev();
    
    printf("\n------------Armstrong no\t Enter no-------------------\n");
    Armstrong();
    
    printf("\n------------Fibonacci series\t Enter nth term-------------------\n");   
    fibo();

    printf("\n------------Harshad no\t Enter no -------------------\n");
    harshad();
}