#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers :";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"a is greater = "<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"b is greater ="<<b;
    }
    else
    {
        cout<<"c is greater ="<<c;

    }
    return 0;
}