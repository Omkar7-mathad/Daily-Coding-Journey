// conditional statements  (if-else)//
// given number is odd or even//
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter any number:"<<endl;
cin>>n;
if(n%2==0)
{
    cout<<n<<" is even number"<<endl;
}
else
{
    cout<< n<<" is odd number"<<endl;
}
return 0;
}