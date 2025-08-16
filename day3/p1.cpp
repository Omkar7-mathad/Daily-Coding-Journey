// conditional statements  (if-else)//
// to  print weather the number is +ve or-ve//
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter any number:"<<endl;
cin>>n;
if(n>=0)
{
    cout<< n<< " is positive number"<<endl;
}
else
{
    cout<<  n <<" is negative number"<<endl;
}
return 0;
}