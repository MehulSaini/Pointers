#include <iostream>
using namespace std;
int main()
{
    double var[5]={1,2,3,4,5};
    double *ptr = &var[0];
    cout<<"Enter index to be printed: "<<endl;
    int pos;
    cin>>pos;
    ptr = ptr+pos;
    cout<<"value at "<<pos<<" is: "<<*ptr<<endl;
}