// Q4. Write a program to enter two numbers and perform all arithmetic operationsusing switch case.

#include<stdio.h>
#include<math.h>
void main(){
    int x,y,z;
    printf("Enter two numbers");
    scanf("%d %d", &x, &y);
    printf("1.Add \n 2.Subtract \n 3.Multiply \n 4.Divide \n 5.Modulous \n ");
    printf("Enter the operator");
    scanf("%d",&z);
    switch(z){
        case 1:
        printf("The result is %d", x+y);
        break;
        case 2:
        printf("The result is %d", x-y);
        break;
        case 3:
        printf("The result is %d", x*y);
        break;
        case 4:
        printf("The result is %d", x/y);
        break;
        case 5:
        printf("The result is %d", x%y);
        break;
        default:
        printf("Wrong input, please select valid operator\n");
    }
}