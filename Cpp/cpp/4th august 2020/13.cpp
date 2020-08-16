#include<iostream>

using namespace std;

int main()
{
    float radius,height;
    cout << "Calculate the volume of a cylinder :\n-----------------------------------------";
    cout<<endl << "Enter the radius: ";
    cin >> radius;
    cout << "Enter the height: ";
    cin >> height;
    cout<< "The area of the given cylinder is :" << 3.14*radius*radius*height;

    return 0;
}
