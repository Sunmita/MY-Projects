#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int d,base,h;
    int n;
    cin>>n;
    int arr[n];
     int s;
     int count=1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        d= sqrt(arr[i]);
        base=1;//assume
        h=sqrt((d-1));
        
    }
       int  sum=(h*h)+1;
       if(d==sum)
       {
           count++;
           
       }
       else
       {
           count=0;
       }
       cout<<count;
}