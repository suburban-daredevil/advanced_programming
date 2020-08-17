#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;

    cout<<"Enter n: ";
    cin >> n;

    float sum=0;

    for(int i=1;i<=n;i++)
    {
        sum+=(1/pow(n,n));
    }

    cout << sum << " is the sum of the sequence till " << n << " places.";
    return 0;
}
