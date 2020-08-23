#include<iostream>

using namespace std;

int main()
{
    long int num;
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    cout<<"Input a number: ";
    cin >> num;

    long int n=num; int rem;
    while(n>0)
    {
        rem = n%10;
        n = n/10;

        arr[rem]+=1;
    }

    for(int i=0;i<10;i++)
    {
        cout<<"The frequency of " << i << " is: " << arr[i] << endl;
    }

    return 0;
}
