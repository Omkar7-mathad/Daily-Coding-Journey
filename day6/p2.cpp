// code to print binary number from 1 to 10//
#include<iostream>
using namespace std;

int dectobinary(int decnum){
    int ans=0,pow=1;
    while(decnum>0){
        int rem=decnum%2;
        decnum=decnum/2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;//binary form
}
int main(){
    
    for(int i=1;i<=10;i++){
    cout<<dectobinary(i)<<endl;
    }
    return 0;
}