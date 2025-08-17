#include<iostream>
using namespace std;
int main()
{
    int n=4, i, j;

    // top half
    for(i=0;i<n;i++){
        // spaces
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";

        if(i!=0){
            // inside spaces
            for(j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    // bottom half
    for(i=n-2;i>=0;i--){
        // spaces
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";

        if(i!=0){
            // inside spaces
            for(j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
