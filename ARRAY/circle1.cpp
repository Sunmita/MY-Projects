#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
     int count=0;
     for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
       for(int j=1;j<arr[i];j++)
       {
           for(int z=1;z<arr[i];z++)
           {
               if(((j*j)+(z*z))==arr[i])
               {
                     count++;
               }
           }
       }
        
    }
        cout<<"the no of good circle"<<" "<<count;
}