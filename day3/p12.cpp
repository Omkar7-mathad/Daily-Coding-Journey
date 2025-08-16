// sum of all odd number using while loop//

#include<iostream>
using namespace std;
int main()
{
int i,n,oddsum=0;
cout<<"enter the number range:"<<endl;
cin>>n;
i=1;
while(i<=n)
{
  if(i%2!=0)
  {
    oddsum+=i;
  }
 i++;
}
cout<<"sum of "<<n<<" number is :"<<oddsum;
return 0;
}