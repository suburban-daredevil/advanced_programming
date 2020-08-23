#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << "\n\n Formatting output using type casting: " << endl;

	cout<<"Print floating-point number in fixed format with 1 decimal place: ";
    setprecision(1);
    cout << fixed << endl;
    cout<<"Explicit type casting: " << endl;
    int i1 = 20, i2 = 28;
    cout <<"Integer: " << i1 << "/" << i2 << "=" << i1 / i2 << endl;
    cout << "Double/Integer: " << i1 << "/" << i2 << "=" <<(double)i1 / i2 << endl;
    cout << "Integer/Double: " << i1 << "/" << i2 << "=" << i1 / (double)i2 << endl;
    cout << "Double: " << i1 << "/" << i2 << "=" << (double)(i1 / i2) << endl;

   double d1 = 5.5, d2 = 6.6;
   cout<<"Implicit type casting :" << endl;
   cout << (int)d1 / i2 << endl;
   cout << (int)(d1 / i2) << endl;
    cout <<"\nint implicitly casts to double: \n";
   d1 = i1;
   cout << d1 << endl;  // 4.0
    cout<<"double truncates to int!: \n";
   i2 = d2;
   cout << i2 << endl;  // 6
}
