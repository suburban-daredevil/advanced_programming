#include<iostream>

using namespace std;

int main()
{

    for(int j=1;j<501;j++)
    {
        int i=1, sum=0;
        while(i<j){
            if(j%i==0)
            sum=sum+i;
            i++; }

            if(sum==j)
                cout << i << " ";

    }

    return 0;
}
