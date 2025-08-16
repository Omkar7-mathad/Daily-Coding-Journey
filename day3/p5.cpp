// conditional statements  (else-if)//
// to check weather the character is owercase or upper case //
#include<iostream>
using namespace std;
int main()
{
char ch ;
cout<<"Enter character:"<<endl;
cin>>ch;
if(ch>='a'&& ch<='z')//lowre case
{
    cout<<"The character "<<ch<<" is lower case"<<endl;
}
else 
{
   cout<<"The character "<<ch<<" is upper case"<<endl;

}

return 0;
}