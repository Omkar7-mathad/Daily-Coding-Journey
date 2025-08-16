// loops(for loop)//
// sum of all odd number from 1 to n//

#include<iostream>
using namespace std;
int main()
{
int i,n,sum=0;
cout<<"enter the number range:"<<endl;
cin>>n;
for(i=1;i<=n;i+=2)
{
    sum+=i;
}
cout<<"sum of "<<n<<" number is :"<<sum;
return 0;
}