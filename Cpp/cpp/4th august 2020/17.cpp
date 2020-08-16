#include<iostream>

using namespace std;

int num;

int main()
{
    cout << "Check whether a number is positive, negative or zero :\n ----------------------------------------------------------- \n";

    cout << "Enter a number: ";
    cin >> num;

    if(num>0)    cout << "This is a positive number.";
    else if(num<0)      cout << "This is a negative number.";
    else     cout << "Zero.";
    return 0;
}
