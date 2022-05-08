#include <stdio.h>
#include <stdlib.h>

struct Sort
{
    int R[10];
    int size;
    int lenght;
};
void display(struct Sort Rev)
{
    int i;
printf("elements are:\n");
for(i=0;i<Rev.lenght;i++)
printf("%d",Rev.R[i]);
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int array(struct Sort *Sor )
{
for(int i=0;i<Sor->lenght-1;i++)
if(Sor->R[i]>Sor->R[i+1])
{
   printf("Not sorted\n");
    swap(&Sor->R[i],&Sor->R[i+1]);
    
}
else{
   printf("sorted\n");
}
}

int main()
{
    struct Sort Sor1={{2,3,17,16,18,21,28,32,35},10,9};
     printf("%d\n",array(&Sor1));
    display(Sor1);
return 0;

}