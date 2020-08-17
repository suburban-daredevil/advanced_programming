#include<iostream>

using namespace std;

int main()
{
    int start,end;
    cout << "Enter the start and ending values: ";
    cin>>start;
    cin>>end;

    for(int j=start;j<=end;j++)
    {
        for(int i=2;i<j;i++)
        {
            bool flag = false;
            if(j%i==0)
            {
                flag=true;
            }

            
        }
    }
    return 0;
}
