#include <iostream>

using namespace std;

int main()
{
    int num_1, num_2;
    cout<<"Compute quotient and remainder :\n-------------------------------------\n";
    cout << "Enter dividend and divisor: ";
    cin >> num_1 >> num_2;

    cout << "The quotient: " << num_1/num_2 << endl;
    cout << "The remainder: " << num_1%num_2 << endl;

    return 0;
}
