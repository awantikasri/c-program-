//Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main()
{ int a,b,c;
printf("enter number 1");
scanf("%d", &a);
printf("enter number 2");
scanf("%d", &b);
printf("enter number 3");
scanf("%d", &c);
if( a>b && a>c )
printf("largest number is:", a);
else if(b>a && b>c)
printf("largest number is:", b);
else 
printf("largest number is:", c);
return 0;
} 