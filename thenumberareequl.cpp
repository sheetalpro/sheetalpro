#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    if(a<50&&a<b)
    {
        cout<<true;
    }
    else
    {
        cout<<false;
    }
    return 0;
}