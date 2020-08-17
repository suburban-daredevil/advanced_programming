#include<iostream>

using namespace std;

int main()
{
    int n;

    cout << "Input the value of n: ";
    cin >> n;

    int sum=0;

    for(int i=1;i<=n;i++)
    {
        cout<<i<<"*"<<i<<"= "<< (i*i) << endl;
        sum+=(i*i);
    }

    cout<<"The sum of the sequence is: " << sum;
    return 0;
}
