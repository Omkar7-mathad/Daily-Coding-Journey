// calculate the sum of digits of numbers 
#include<iostream>
using namespace std;

int sumofdegit(int num){   
     int digitsum=0;
    while(num>0){
        int lastdig=num%10;
        num/=10;
        digitsum+=lastdig;
    }
    return digitsum;
}

int main(){
    
    cout<< "sum= " <<sumofdegit(2356)<<endl;
    return 0;
}
