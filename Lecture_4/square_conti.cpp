#include <iostream>
using namespace std;
int main() {
    // Your code here
    int n;
    cout<<"Enter no:"<<endl;
    cin >>n;
    int no=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<no<<" ";
            no++;
        }
        cout<<endl;
    }

    return 0;
}