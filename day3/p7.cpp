// loops(while loop)//
// to print the number form 1 to n//
#include<iostream>
using namespace std;
int main()
{
int i,n;
cout<<"enter the number range: "<<endl;
cin>>n;
i=1;
while(i<=n)
{
    cout<<i<<" ";
    i++;
}
cout<<endl;
return 0;
}