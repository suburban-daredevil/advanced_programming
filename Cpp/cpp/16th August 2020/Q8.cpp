#include<iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int flag=0, i=num-1;

    while((i>1) && (flag==0))
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            flag=1;
            cout<<i<<endl;
        }

        if(flag!=1)
        i++;
    }

    cout << "The prime closest to " << num << " is " << i;
    return 0;
}
