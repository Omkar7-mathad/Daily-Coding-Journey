// loops(for loop)//
// To print odd numbers only//

#include<iostream>
using namespace std;
int main()
{
int i,n;
cout<<"Enter the number range"<<endl;
cin>>n;
for(i=1;i<=n;i+=2)
{
    cout<<i<<" ";
}
return 0;
}