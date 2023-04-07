#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum();
int substraction();
int multiplication();
int division();
double squareRoot();
double power();

int main()
{
    int number;
    printf("For addition press 1");
    printf("\nFor substraction press 2");
    printf("\nFor multiplication press 3");
    printf("\nFor division press 4");
    printf("\nFor square root press 5");
    printf("\nFor power of a number press 6");
    printf("\nEnter your number: ");
    scanf("%d", &number);
    if (number == 1)
    {
        int summation=sum();
        printf("%d", summation);
    }
    if (number == 2)
    {
        int sub=substraction();
        printf("%d", sub);
    }
    if (number == 3)
    {
        int mult=multiplication();
        printf("%d", mult);
    }
    if (number == 4)
    {
        int div=division();
        printf("%d", div);
    }
    if (number == 5)
    {
        double sqrt=squareRoot();
        printf("%.3lf", sqrt);
    }
    if (number == 6)
    {
        double pow=power();
        printf ("%.0lf", pow);
    }

    return 0;
}

int sum()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    return a+b;
}
int substraction()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    return a - b;
}
int multiplication()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    return a * b;
}
int division()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    return a / b;
}
double squareRoot()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    return sqrt(a);
}
double power()
{
    double base, exp;
    printf("Enter the base value from the user: ");
    scanf("%lf", &base);
    printf("Enter the power value for raising the power of base: ");
    scanf("%lf", &exp);
    return pow(base, exp);
}