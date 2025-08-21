// function in memory
#include<iostream>
using namespace std;

void fun(){   // should return int, not void
    int x = 25;
    cout<<"x= "<<x<<endl;
}

int main(){
    fun();
    return 0;
}
