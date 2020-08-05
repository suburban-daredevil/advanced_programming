#include <iostream>

using namespace std;

int main()
{
    int a = 57;
    cout << "The number before any modification is " << a << endl;
    a++;
    cout << "After post increment the number is " << a << endl;
    cout<< "After increment the number is " << ++a << endl;
    a = a+1;
    cout << "After increasing by 1 the number is " << a << endl;
    a--;
    cout << "After post decrement the number is " << a << endl;
    cout << "After pre decrement the number is " << --a << endl;
    a = a-1;
    cout << "After decreasing by 1 the number is " << a << endl;
    return 0;
}
