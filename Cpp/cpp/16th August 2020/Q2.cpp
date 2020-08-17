#include<iostream>

using namespace std;

int main()
{
    int sum=0;
    cout<<"Find the sum of the first 10 natural numbers\n---------------------------------------"<<endl;
    cout<<"The first 10 natural numbers are: ";
    for(int i=1;i<11;i++)
    {
        cout<<i<<" ";
        sum+=i;
    }
    cout<<endl;

    cout<<"The sum of the first 10 natural numbers is: " << sum;
    return 0;
}
