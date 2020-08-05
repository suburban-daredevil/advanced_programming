#include <iostream>

using namespace std;

int main()
{
   int a,b,swap_var;
   cout<< "Enter the two numbers to swap: ";
   cin >> a >> b;
   cout << "Pre swap:\na = " << a << "\nb = " << b << endl;

   swap_var = a;
   a = b;
   b = swap_var;

   cout << "Post swap:\na = " << a <<"\nb = " << b << endl;
   return 0;
}
