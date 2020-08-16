#include<iostream>

using namespace std;

int main()
{
    cout << "Find the Area and Perimeter of a Rectangle :\n-------------------------------------------------";
    float length,breadth;
    cout << endl << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    cout << "Area of the rectangle is: " << length*breadth << " units." << endl;
    cout << "Perimeter of the rectangle is: " << 2* (length+breadth) << " units. ";

    return 0;
}
