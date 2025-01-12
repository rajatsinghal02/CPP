#include <iostream>
using namespace std;
int main() {
    // Your code here
    int n;
    cout<<"Enter no:"<<endl;
     cin>>n;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
     }

    return 0;
}