// to find factorial of n numbers//
#include<iostream>
using namespace std;
int main(){
    int n,i;
    unsigned long long factorial = 1; 
    cout<<"Enter the n number:"<<endl;
    cin>>n;
    if(n<0)
    {
        cout<<"Factorial not exist"<<endl;
    }
    else
    {
       for(i=1;i<=n;i++)
       factorial*=i;
    }
    cout<<"factorial of "<< n << " number is:"<<factorial<<endl;
    
    return 0;
}

