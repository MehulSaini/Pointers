#include <iostream>
#include <string>
using namespace std;
int main()
{
    char name[100],i;
    int j=0,c=0;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    while(c==0)
    {
        i=name[j];
        if(i==' '){
        c++;}
        j++;
    }
    char mid = name[j];
    c=0;
    while(c==0)
    {
        i=name[j];
        if(i==' '){
        c++;}
        j++;
    }
    char last = name[j];
    cout<<"Initials:"<<endl;
    cout<<name[0]<<" "<<mid<<" "<<last<<endl;
    return 0;
}