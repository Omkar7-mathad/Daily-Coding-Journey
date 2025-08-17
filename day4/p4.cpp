// Patterns//
// to print the patterns n=3//
// 123
// 456
// 789

#include<iostream>
using namespace std;
int main()
{
int i,j,n=3,num=1;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<num<<" ";
        num++;
    }
    cout<<endl;
}
return 0;
}