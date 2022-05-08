#include <stdio.h>
#include <stdlib.h>
int main()
{
int A[5]={3,6,7,8,9};
int *p;
int i;
p=(int *)malloc(5*sizeof(int));
p[0]=7;
p[1]=9;
p[2]=8;
p[3]=5;
p[4]=2;

for(int i=0; i<5; i++)
      printf("%d ",A[i]);
      printf("\n");
for(int i=0; i<5; i++)
      printf("%d ",p[i]);

return 0;
}