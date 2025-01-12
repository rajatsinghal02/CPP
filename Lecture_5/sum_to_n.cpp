#include <iostream>
using namespace std;

int sumToNum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n;
        n=n-1;
    }
    return sum;
}


int main() {
    // Your code here
    int n;
    cout<<"Enter no:"<<endl;
    cin>>n;
    cout<<sumToNum(n);

    return 0;
}