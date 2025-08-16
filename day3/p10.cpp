// loops(for loop)//
// sum of 1 to n//

#include<iostream>
using namespace std;
int main()
{
int i,n,sum=0;
cout<<"Enter the number :"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
    sum+=i;
}
cout<<"sum of "<<n<<" number is:"<<sum<<endl;
return 0;
}