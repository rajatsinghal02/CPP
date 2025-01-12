#include <iostream>
using namespace std;

int gcd(int a, int b) {
   while(a> 0 && b>0)
   {
    if(a>b)
    {
        a= a%b;
    }
    else
    {
        b = b%a;
    }
   }

  if(a==0)
  {
    return b;
  }
  
    return a;
}



int gcd_recursion(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd_recursion(b,a%b);
}
int lcm(int a, int b)
{
    int gcd = gcd_recursion(a,b);
    return a*b/gcd;
}
int main() {
    // Your code here
    int a, b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
      cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
      cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd_recursion(a,b)<<endl;
        cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm(a,b)<<endl;

    return 0;
}