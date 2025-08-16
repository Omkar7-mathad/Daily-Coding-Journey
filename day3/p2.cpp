// conditional statements  (if-else)//
// age vote condition checking//
#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"Enter your age:"<<endl;
cin>>age;
if(age>=18)
{
    cout<<"your age is "<<age<<" and you are eligible for voting"<<endl;
}
else
{
    cout<< "you are not eligible for voting"<<endl;
}
return 0;
}