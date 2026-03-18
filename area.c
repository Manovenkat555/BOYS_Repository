#include<stdio.h>

float circle( float radius);


float rectangle( float len, float breadth);

int main()
{

float a,b,r;
printf("Enter the length:");scanf("%f",&a);
printf("Enter the breadth:");scanf("%f",&b);
area=rectangle(a,b);
printf("Area of rectangle:%f",area);

printf("Enter the radius");scanf("%f",&r);
area=circle(r);
printf("Area of circle:%f",area);
}

float circle(float radius){
    return (3.14*radius*radius);

printf("Enter the length:");scanf("%d",&a);
printf("Enter the breadth:");scanf("%d",&b);
float area=rectangle(a,b);
printf("Area of rectangle:%d",area);
}
float rectangle(float a, float b){
    return (a*b);

}