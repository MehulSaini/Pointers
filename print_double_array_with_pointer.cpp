#include <iostream>
using namespace std;
int main()
{
    double var[5]={1,2,3,4,5};
    double *ptr = &var[0];
    cout<<"Array: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Address: "<<ptr<<" Value: "<<*ptr<<endl;
        ptr++;
    }
    return 0;
}