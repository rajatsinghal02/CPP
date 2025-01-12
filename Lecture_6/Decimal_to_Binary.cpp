#include <iostream>
using namespace std;
int main() {
    // Your code here
    int n;
    cout<<"Enter no:";
    cin>>n;
    int ans=0;
    int pow=1;
    while(n!=0)
    {
        int rem=n%2;
        n=n/2;
        ans+=(rem*pow);
        pow = pow*10;
    }
    cout<<ans<<endl;

    return 0;
}