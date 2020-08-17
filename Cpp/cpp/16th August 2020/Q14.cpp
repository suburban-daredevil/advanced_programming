#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    char str[100];
    cout << "Input a string: ";
    cin.get(str,100); //getline(cin,100,str);

    char ch = str[0];
    int count = 0, i=0;

    while(ch)
    {
        count++;
        i++;
        ch=str[i];
    }

    cout << count;

    return 0;

}
