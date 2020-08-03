#include <stdio.h>
#include <math.h>
double calculate_area(double r);
int main()
{
    double r;
    printf("Enter radius to calculate the area of a circle : \n");
    scanf("%lf",&r);
    double area = calculate_area(r);
    printf("%lf",area);
    return 0;
}
double calculate_area(double r)
{
    double area = 3.1416 * pow(r,2);
    return area;
}
