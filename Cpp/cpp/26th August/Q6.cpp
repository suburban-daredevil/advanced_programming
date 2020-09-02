#include<iostream>

using namespace std;

//Write a C++ program to find Square of a Number using inline function
int num1;

inline void square()
{
	int square = num1*num1;
	cout << "Square: " << square;
}
int main()
{

	cout << "Enter number: ";
	cin >> num1;

	square();

	return 0;
}
