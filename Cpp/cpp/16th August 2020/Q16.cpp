#include<iostream>

using namespace std;

int main(){

    int i,j,max,num=1,pos,k;

    cout << endl << "\n Enter the number of rows: ";
    cin >> max;

    pos=(max/2)+(max-1);

    for(i=1;i<=max;i++)
    {
        for(k=pos;k>0;k--){
        cout << " ";}

        for(j=1;j<=i;j++)
         {
             cout << num <<" ";
             num=num+1;
         }
        pos=pos-1;
        cout << endl;
    }
   return 0;
}
