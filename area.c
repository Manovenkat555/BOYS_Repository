#include<stdio.h>
<<<<<<< HEAD

float circle( float radius);


=======
float circle( float radius);
>>>>>>> eccd53b (RESOLVE THEIRS)
float rectangle( float len, float breadth);

int main()
{
<<<<<<< HEAD

float a,b,r;
=======
flaot a,b,r;
>>>>>>> eccd53b (RESOLVE THEIRS)
printf("Enter the length:");scanf("%f",&a);
printf("Enter the breadth:");scanf("%f",&b);
area=rectangle(a,b);
printf("Area of rectangle:%f",area);

printf("Enter the radius");scanf("%f",&r);
area=circle(r);
printf("Area of circle:%f",area);
<<<<<<< HEAD
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

=======
}

float circle(float radius){
    return (3.14*radius*radius);
>>>>>>> eccd53b (RESOLVE THEIRS)
}