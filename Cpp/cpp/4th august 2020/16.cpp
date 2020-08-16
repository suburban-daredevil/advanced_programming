#include<iostream>

using namespace std;

int main()
{
    cout << "Make a rectangular shape by a single digit number :\n-------------------------------------------------------- \n";
    int num,row,col;
    cout << "Input the desired number: ";
    cin >> num;
    cout << "Enter the number of rows and columns desired: ";
    cin >> row >> col;

    int i=0;
    while(i<col)
    {
        cout << num;
        i++;
    }
    cout<<endl;
    for(int i=1;i<row-1;i++)
    {

        cout << num;
        for(int j=2;j<col;j++)
        {
            cout << " ";
        }
        cout << num << endl;
    }
    i = 0;
    while(i<col)
    {
        cout << num;
        i++;
    }
    cout<<endl;


    return 0;
}
