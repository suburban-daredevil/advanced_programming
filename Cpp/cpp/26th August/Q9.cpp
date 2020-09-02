#include<iostream>

using namespace std;

//Write a C++ Program to find Sum of odd numbers between 1 and 100 using class

class numop
{
	void calc_sum()
	{
		int i=1,j=99,sum=0;

		for(i=1;i<100;i+=2)
		{
			sum+=i;
		}

		cout << "Sum: " << sum;
	}

	public:

		void display()
		{
			calc_sum();
		}
}obj;

int main()
{
	obj.display();
	return 0;
}
