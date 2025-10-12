// Write a program to input two numbers and display their sum, difference, product, and quotient.*
#include <stdio.h>
int main (){
    float num1 , num2;
    float sum,difference,product,quotient;
    printf("enter the first number \n");
    scanf("%f",&num1);

    printf("enter the second number\n");
    scanf("%f",&num2);
    sum = num1+num2;
    difference = num1-num2;
    product = num1*num2;
    quotient = num1/num2;
    printf("sum=%f\ndifference=%f\nprodunt=%f\nquotient=%f",sum,difference,product,quotient);
return 0;
}