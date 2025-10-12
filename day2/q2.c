//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>

void main(){

  printf("**TO FIND AREA AND CIRCUMFERENCE OF A CIRCLE\n");
float radius , area , circumference ;
printf("enter radius : ");
scanf("%f",&radius);

area= 3.14*radius*radius;
printf("area of the circle is : %f\n",area);
circumference= 2*3.14*radius ;
printf("circumference of the circle is : %f\n", circumference);


}