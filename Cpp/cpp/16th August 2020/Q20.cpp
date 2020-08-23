#include<iostream>

using namespace std;

int main()
{
    int rem,num,n,sum=0;

    cout<<"Enter number to find digit sum: ";
    cin>>num;
    n = num;

    while(n>0)
    {
        rem = n%10;
        n = n/10;
        sum+=rem;
    }

    cout << "The sum of digits of the given number is: " << sum;

    return 0;
}
