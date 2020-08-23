#include<iostream>

using namespace std;

int main()
{
    char bin_num[8];
    cout<<"Enter a binary number of 8 bits: ";
    cin.getline(bin_num,8);

    for(int i=0;i<8;i++)
    {
        if(bin_num[i]=='0')  bin_num[i]='1';

        else if(bin_num[i]=='1')   bin_num[i]='0';

        /*else {
            cout<<"Invalid input, please enter a binary number." << endl;
            return -1;
        }*/

    }

    cout<<"The ones complement of given binary number is: " << bin_num;
    
    return 0;
}
