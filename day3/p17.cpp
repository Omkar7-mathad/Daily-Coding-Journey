// sum of all number which is devisible by 3//
#include <iostream>
using namespace std;

int main() {
    int n,i,sum=0;
    cout<<"enter the number:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%3==0)
        {
            sum+=i;
        }

    }
    cout<<"sum is:"<<sum<<endl;

    return 0;
}
