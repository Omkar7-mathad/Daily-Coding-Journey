// check if number is prime or not//
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    bool isprime=true;
    cout<<"enter any number:"<<endl;
    cin>>n;
    for (i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime==true)
    {
        cout<<"prime number\n";
    }
    else
    {
        cout<<"non prime niumber\n";
    }

    return 0;
}
