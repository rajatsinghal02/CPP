#include <iostream>
using namespace std;
int main() {
    // Your code here
    int n;
    cout<<"Enter the no:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}