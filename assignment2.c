#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double AreaofSquare(int a);
double PerimeterofSquare(int a);
double AreaofCircle(int r);
double PerimeterofCircle(int r);

int main()
{
    int number;
    printf("Enter 1 for square and 2 for circle: ");
    scanf("%d", &number);
    if (number==1)
    {
        int a;
        scanf("%d", &a);
        double area=AreaofSquare(a);
        double perimeter=PerimeterofSquare(a);
        printf("Area is: %.2lf and perimeter is: %.2lf", area, perimeter);
    }
    if (number==2)
    {
        int r;
        scanf("%d", &r);
        double AREA=AreaofCircle(r);
        double PERIMETER=PerimeterofCircle(r);
        printf("Area is: %.2lf and perimeter: %.2lf", AREA, PERIMETER);
    }
    return 0;
}

double AreaofSquare(int a)
{
    return (double)a*a;
}
double PerimeterofSquare(int a)
{
    return (double)a*4;
}
double AreaofCircle(int r)
{
    return (double)3.14*r*r;
}
double PerimeterofCircle(int r)
{
    return (double)2*3.14*r;
}