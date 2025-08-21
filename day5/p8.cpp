// Pass by value
#include<iostream>
using namespace std;

int sum(int a,int b){   // should return int, not void
    return a+b;
}

int main(){
   int a=5,b=4;
   cout<<sum(a,b)<<endl;
   return 0;
}
