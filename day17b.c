//Write a program to check if a number is prime.
#include <stdio.h>
int main()
{
int n;
printf("enter a number: \n");
scanf("%d",&n);
int c=0;
for(int i=1;i<=n;i++)
{
    if( n%i ==0)
    c++;
}
if(c==2)
printf("its a prime number");
else
printf("its not a prime number");
return 0;
}