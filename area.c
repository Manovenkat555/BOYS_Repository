#include<stdio.h>

float rectangle( float len, float breadth);

int main()
{
printf("Enter the length:");scanf("%d",&a);
printf("Enter the breadth:");scanf("%d",&b);
float area=rectangle(a,b);
printf("Area of rectangle:%d",area);
}
float rectangle(float a, float b){
    return (a*b);
}