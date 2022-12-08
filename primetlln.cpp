#include<iostream>
using namespace std;

int main()
{
    int div=1,num;
    cout<<"Enter the number ";
    cin>>num;

   
    for(int i=1;i<=num;i++)
    { 
         while(div<=i)
        {

            if(div%i!=0)
            {
                cout<<i<<"is a prime number"<<endl;
            }
            
        }
        div++;

    }

}