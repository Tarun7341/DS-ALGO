#include<iostream>
using namespace std;

int main()
{
    int div=2,num,flag=0;
    cout<<"Enter the number";
    cin>>num;
    while(div<num){
        if(num%div==0)
        {
            flag = 1;
        }
        div++;
    }
    if(flag==1)
    {
        cout<<num<<" is a not a prime number";
    }
    else
    {
        cout<<num<<" is a prime number";
    }

}