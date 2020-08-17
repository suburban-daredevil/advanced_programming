#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of terms to be displayed: ";
    cin >> n;

    int out=-1, sum=0;

    cout<<"The odd numbers are: ";
    for(int i=1;i<=n;i++)
    {
        out+=2;
        cout << out << " ";
        sum+=out;
    }

    cout<<endl;

    cout << "The sum of odd natural numbers until n: " << sum;

    return 0;
}
