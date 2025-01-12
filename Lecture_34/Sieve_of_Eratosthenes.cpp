#include <iostream>
using namespace std;

int rangePrime(int n)
{
    vector <bool> isPrime(n+1, true);
    int count = 0;
    for(int i=2;i<n;i++)
    {
        if(isPrime[i])
        {
          count++;
          for(int j=i*2;j<n;j=j+i)
          {
            isPrime[j] = false;
          }
        }
    }
    return count;
}


int main() {
    // Your code here
    //Assume all numbers are prime.
    //Discard all the multiples of that number from that range
  int n;
  cout<<"Enter the number:"<<endl;
  cin>>n;
  cout<<rangePrime(n)<<endl;

    return 0;
}