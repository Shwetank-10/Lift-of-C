// Q3. Write a C program to check whether a number is even or odd using switch case.

#include<stdio.h>
void main(){
    int a;
    printf("Enter the value ");
    scanf("%d",&a);
    switch(a%2){
        case 0:
        printf("The no. is even");
        default:
        printf("The no. is odd");
        break;
    }
}