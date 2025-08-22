// code to convert decimal to binary//
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
    int decnum=50;
    cout<<dectobinary(decnum)<<endl;
    return 0;
}