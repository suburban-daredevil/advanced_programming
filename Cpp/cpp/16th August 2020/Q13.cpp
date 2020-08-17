#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Input the number of terms: ";
    cin >> n;

    int init_num = 1;
    int fin_num, sum=0;

    for(int i=1;i<=n;i++)
    {
        init_num*=10;
        fin_num=init_num-1;
        cout << fin_num << " ";
        sum+=fin_num;
    }

    cout<<endl<<"The sum of the series is: " << sum;

    return 0;
}
