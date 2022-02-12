//Q5. Write a C program to enter the radius of a circle and find its diameter, circumference and area.

#include<stdio.h>
float pi = 3.14;
void main(){
    float r,d,C,A;
    printf("Enter the radius of the given circle");
    scanf("%f",&r);
    d = 2*r;
    C = 2*pi*r;
    A = pi*r*r;
    printf("Diameter is %f \n Circumference is %f \n Area is %f", d, C, A);
}