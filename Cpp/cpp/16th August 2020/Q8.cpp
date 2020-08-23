#include<iostream>

using namespace std;

int main(){

    int i,j,max,count,rem,max2;

    cout<<"\n Enter number: ";
    cin>>max;

    cout<<"Largest prime before number is: "<<max<<" is: ";

    for(i=1;i<max;i++)
    {   count = 0;

        for(j=1;j<=i;j++)
        {
            rem=i%j;
            if(rem==0)
            {
                count++;
            }
        }
        if(count==2)
           max2=i;

    }
    cout << max2;
    return 0;
}
