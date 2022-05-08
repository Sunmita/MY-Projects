#include<stdio.h>
int rfac(int n);
int main()
{
     int a,b;
    printf("Enter a positive integer: ");
    scanf("%d",&a);
    printf("Factorial of %d = %ld", a, rfac(a));
   return 0;
}
int rfac(int n)
{

    if(n==0)
    return 1;
    return rfac(n-1)*n;
}