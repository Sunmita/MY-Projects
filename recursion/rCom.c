#include<stdio.h>

int fact(int n)
{

    if(n==0)
    return 1;
    return fact(n-1)*n;
}
int ncr(int n,int r)
{
    int nu,d;
    nu=fact(n);
    d=fact(n-r)*fact(r);
    return nu/d;

}
int main()
{
    printf("%d \n",ncr(5,1));
    return 0;
}