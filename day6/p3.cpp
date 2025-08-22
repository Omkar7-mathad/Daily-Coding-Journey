// code to convert binary to decimal//
#include<iostream>
using namespace std;

int bintodecimal(int binnum){
    int ans=0,pow=1;
    while(binnum>0){
        int rem=binnum%10;
        ans+=(rem*pow);
        binnum/=10;
        pow*=2;
    }
    return ans;//binary form
}
int main(){
    cout<<bintodecimal(101)<<endl;//5
    cout<<bintodecimal(1010)<<endl;//10
    return 0;
}