#include <iostream>
using namespace std;
//sum
int sum(int a, int b)
{
    return a+b;
}
//min
int mini(int a, int b) //Parameters are the copies of that function
{
    if(a<b)
    {
        return a;
    }
    return b;
}
int main() {
    // Your code here
    cout<<sum(5,4)<<endl; //arguments are the actual values
    cout<<mini(5,4)<<endl;

    return 0;
}