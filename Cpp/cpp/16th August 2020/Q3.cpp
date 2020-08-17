#include<iostream>

using namespace std;

int main()
{
    int terms,sum=0;
    cout << "Input a number of terms:";
    cin >> terms;
    cout<<"The first " << terms << " natural numbers are: ";
    for(int i=1;i<(terms+1);i++)
    {
        cout<<i<<" ";
        sum+=i;
    }
    cout<<endl;

    cout<<"The sum of the first " << terms << " natural numbers is: " << sum;
    return 0;
}
