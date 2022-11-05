#include <stdio.h>

void hcf()
{
    printf("\n------------HCF------------");
    //for initialize variables
    int a, b, i, hcf;
    printf("\nEnter 2 no's: ");
    scanf("%d %d", &a, &b);
    //find hcf of number
    for (i = 1; i <= a || i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    //display hcf
    printf("\nHCF = %d", hcf);
}

void lcm()
{
    printf("\n\n-------------LCM-------------");
    int n1, n2;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &n1, &n2);
    int check1, check2;
    check1 = n1;
    check2 = n2;
    while (check1 != check2)
    {
        if (check1 < check2)
            check1 = check1 + n1;
        else
            check2 = check2 + n2;
    }
    printf("\nL.C.M of %d and %d is: %d", n1, n2, check1);
}

int binToDec()
{
    printf("\n\n-------Binary To Decimal--------");
    int bin, i = 1, rem = 0, dec = 0;
    printf("\nEnter binary no: ");
    scanf("%d", &bin);
    printf("\n%d ", bin);
    while (bin > 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        dec = dec + (rem * i);
        i = i * 2;
    }
    printf(" to Decimal is: %d ", dec);
}

void decToBin()
{
    int dec;
    printf("\n\n--------Decimal to Binary---------");
    printf("\n Enter decimal no: ");
    scanf("%d", &dec);
    int rem, bin = 0, i = 0, base = 1;
    while (dec > 0)
    {
        rem = dec % 2;
        bin = bin + rem * base;
        dec = dec / 2;
        base = base * 10;
    }
    printf("%d is binary number", bin);
}

void binToOct()
{
    printf("\n\n---------Binary to Octal---------");
    int no, i = 1, rem = 0, oct = 0;
    printf("\nEnter binary no: ");
    scanf("%d", &no);
    printf("\n%d ", no);
    while (no != 0)
    {
        rem = no % 8;
        oct = oct + rem * i;
        i = i * 2;
        no = no / 8;
    }
    printf(" to Octal is %d ", oct);
}

void findQuad()
{
    printf("\n\n-------Find Quadrant----------");
    int x, y;
    printf("\nEnter x and y co-ordinates: ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
    {
        printf("\n1st Quadrant");
    }
    else if (x < 0 && y > 0)
    {
        printf("\n2nd Quadrant");
    }
    else if (x < 0 && y < 0)
    {
        printf("\n3rd Quadrant");
    }
    else if (x > 0 && y < 0)
    {
        printf("\n4th Quadrant");
    }
    else if (x == 0 && y == 0)
    {
        printf("\nLies on Origin");
    }
}

void noOfHandshakes()
{
    printf("\n\n------Count no of handshakes by people in room----------");
    int n;
    printf("\nEnter no of people in room");
    scanf("%d", &n);
    int count;
    count = (n * (n - 1)) / 2;
    printf("\n %d is no of handshakes done :", count);
}

void addFrac()
{
    printf("\n\n----------Add Fractions----------");
    int num1, num2, den1, den2;
    printf("\nEnter numerator and denominator");
    printf("\n num1 / den1  and num2 / den2");
    scanf("%d %d %d %d ", &num1, &num2, &den1, &den2);
    int num = (num1 * den2) + (num2 * den1);
    int den = den1 * den2;
    printf("%d / %d is addition ", num, den);
}

void findAscii()
{
    printf("\n\n---------Find Ascii value----------");
    char a;
    printf("\nEnter a character: ");
    scanf("%c", &a);
    printf("\n Ascii of %c is %d", a, a);
}

void findPrime()
{
    printf("\n\n---------Find Prime no's in range------------");
    int i, j, count = 0;

    //print values between 1 to 100
    printf("\nThe value between 1 to 100\n");

    for (i = 2; i <= 100; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            printf("%d ", i);
        count = 0;
    }
}



int main()
{

    decToOct();
    hcf();
    lcm();
    binToDec();
    decToBin();
    binToOct();
    octToBin();
    octToDec();
    noOfHandshakes();
    findQuad();
    addFrac();
    findAscii();
    findPrime();
}