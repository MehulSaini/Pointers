#include <iostream>
using namespace std;
int main()
{
    int var = 10;
    int *ptr = &var;
    cout<<"value stored at address ptr: "<<*ptr<<endl;
    cout<<"address of given var: "<<&var<<endl;
    cout<<"value of ptr: "<<ptr<<endl;
    cout<<"address of ptr: "<<&ptr<<endl;
    return 0;
}