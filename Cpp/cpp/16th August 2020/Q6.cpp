#include<iostream>
using namespace std;
int main(){
    int i,j,min,max,count,rem;
     cout<<" Enter first number in range: ";
     cin>>min;
     cout<<"\n Enter last number in range: ";
     cin>>max;
     cout<<endl<< "The prime numbers between "<< min <<" and "<< max <<" are: " <<endl;
    for(i=min;i<=max;i++)
    {   count=0;
        for(j=1;j<=i;j++)
        {
            rem=i%j;
            if(rem==0)
            {
                count++;
            }
        }
        if(count==2)
           cout << i << endl;

    }
}
