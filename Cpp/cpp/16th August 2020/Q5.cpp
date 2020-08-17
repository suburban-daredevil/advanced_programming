#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter a number to check: ";
    cin >> num;

    if(num==1)
    {
        cout << "Neither prime nor composite.";
        return 0;
    }

    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"The given number is composite.";
            return 0;
        }

    }

    cout << "The given number is prime.";
    return 0;
}
