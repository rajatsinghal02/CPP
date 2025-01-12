#include <iostream>
using namespace std;
int main() {
    // Your code here
    int n;
    cout<<"Enter the no:";
    cin>>n;
  
    for(int i=1;i<=n;i++)
    {
         
        for(int j=0;j<i;j++)
        {
            cout<<(char)('A' -1 + i) ;
           
        }
        cout<<endl;
    }

    return 0;
}