// sum of n mumbers//
#include<iostream>
using namespace std;
int main(){
    int n;
    int count=1,sum=0;
    cout<<"enter the numer to find the sum\n";
    cin>>n;
    while(count<=n)
    {
        sum+=count;
        count+=1;
    }
    cout<<"sum of n numbers is \n"<<sum<<endl;
    return 0;
}

