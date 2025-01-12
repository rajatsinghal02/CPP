#include <iostream>
using namespace std;


string isPrime(int n)
{
   for(int i=2;i*i<=n;i++)
   {
    if(n%i==0)
    {
        return "Not Prime";
    }
   }
   return "Prime";
}




int main() {
    // Your code here
    int num;
    cout<<"Enter the Number:"<<endl;
    cin>>num;
cout<<isPrime(num)<<endl;

    return 0;
}