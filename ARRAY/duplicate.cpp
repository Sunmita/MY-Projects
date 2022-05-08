#include <iostream>
using namespace std;
 class array
{
    public:
        int *A;
        int size;
        int length;
    
    public:
    array(int size){
     this->size= size;
     A = new int [size];
}

void create()
{
    cout << "enter the number"<<flush;
    cin>>length;
    cout << "enter the elements of array"<<endl;
    for(int i=0;i<length;i++)
    {
        cout<<"the elements are"<<i<<"="<<flush;
        cin>>A[i];
    }
}
void display()
{
    int i;
    for( i=0;i<length;i++)
    {
   cout << A[i]<<" ";
}
}
void miss(struct array M,int n)
{
    int i,j;
   for(i=0;i<M.length;i++)
{
    for(j=i+1;j<M.length;i++)
{
    if(M.A[i] == M.A[j])
    cout<<"the duplicate element\n"<<M.A[i];
}
    
}
}
};
int main()
{
    array Arr(10);
    Arr.create();
   
    int n1;
    n1=   sizeof(Arr) / sizeof(int);
    Arr.miss(Arr,n1);
    
    return 0;
}
