#include<iostream>

using namespace std;

/* Write a C++ Program to find Factorial of a number by defining function outside of a
class
*/

class fact
{
	int factorial,i;

	public:

		void find_fact();

		void get_data()
		{
			cout << "Enter number to find factorial: ";
			cin >> i;

			find_fact();
		}
}obj;

void fact::find_fact()
{
	factorial=1;
	for(int j=1;j<=i;j++)
	{
		factorial*=j;
	}

	cout << "The factorial is: " << factorial;
}

int main()
{
	obj.get_data();
	return 0;
}
