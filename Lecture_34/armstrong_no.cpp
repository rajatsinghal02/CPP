#include <iostream>
using namespace std;
int main() {
    // Your code here
    int num;
    cout<<"Enter the  number:"<<endl;
    cin>>num;
    int sum=0;
    int temp= num;
    while(temp>0)
    {
        int rem= temp%10;
        sum = sum+rem*rem*rem;
        temp = temp/10;
    }
    if(sum == num)
    {
        cout<<"Armstrong number"<<endl;

    }
    else
    {
        cout<<"Not Armstrong number"<<endl;
    }

    return 0;
}