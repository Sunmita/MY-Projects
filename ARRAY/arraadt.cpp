#include <iostream>
using namespace std;
class array
{
    private:
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

~array(){
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};
int main()
{
    array Arr(10);
    Arr.create();
    Arr.display();
    return 0;

}