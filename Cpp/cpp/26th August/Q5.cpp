#include<iostream>

using namespace std;

//Write a C++ Program to find Largest of three Numbers by defining functions inside class

class numop
{
	int a,b,c,largest;

	void find_largest()
	{
		largest = a;

		if(b>largest)
			largest = b;

		if(c>largest)
			largest = c;

			cout << "The largest  numeber is: " << largest;
	}

	public:

		void get_data()
		{
			cout << "Enter the three numbers: ";
			cin >> a >> b >> c;

			find_largest();
		}
}obj;

int main()
{
	obj.get_data();
	return 0;
}
