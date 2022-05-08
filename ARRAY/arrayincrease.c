#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,*q;
    int i;
p=(int *)malloc(5*sizeof(int));
p[0]=9;
p[1]=8;
p[2]=3;
p[3]=5;
p[4]=6;
q=(int *)malloc(10*sizeof(int));
for(i=0;i<5;i++)
q[i]=p[i];
free(p);
p=q;
q= NULL;
for(i=0;i<5;i++)
printf("%d \n",p[i]);
return 0;


}