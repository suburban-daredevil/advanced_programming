#include <iostream>

using namespace std;

int main()
{
 int num,num1,i,j,k;

 cout << "Enter the number :" << endl;
 cin >> num;
 num1 = num;

 for(i=1;i<=num1;i++)
 {
     for(j=1;j<=num;j++)
      cout << j;

     for(j=num-1;j>0;j--)
        cout << j;

     cout << endl;

     for(k=0;k<i;k++)
         cout << " ";

     num--;



 }
    return 0;
}
