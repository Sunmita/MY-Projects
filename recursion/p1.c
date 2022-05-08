#include <stdio.h>
int main()
{
 int arr[100],n,i;
 int temp;
 
 printf("Enter total number of elements: ");
 scanf("%d",&n);
 printf("Enter array elements:\n");
 for(i=0;i < n;i++)
 {
 printf("Enter element %d:",i+1);
 scanf("%d",&arr[i]);
 }
 if(n%2 !=0)
 {
 for(i=0;i < n-1;i+=2)
 {
 temp = arr[i];
 arr[i] = arr[i+1];
 arr[i+1]= temp;
 }
 }
 else
 for(i=0;i < n;i+=2)
 {
 temp = arr[i];
 arr[i] = arr[i+1];
 arr[i+1]= temp;
 }
 
 printf("\nArray elements after swapping adjacent elements:\n");
 for(i=0;i < n;i++)
 {
 printf("%d\n",arr[i]);
 }
 return 0;
}