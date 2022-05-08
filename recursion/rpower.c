#include<stdio.h>
int rpow(int m,int n)
{
    if(n==0)
    return 1;
    return rpow(m,n-1) * m;

}
int main()
{
    int r;
    r = rpow(2,9);
    printf("%d ",r);
}