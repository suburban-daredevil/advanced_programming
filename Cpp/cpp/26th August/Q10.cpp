/*Write a C++ program for various Mathematical Operations using Switch case(Hint:
Multiple class)
*/

#include<iostream>

using namespace std;

class add
{
	int n1,n2;

	void summation()
	{
		cout<< n1+n2;
	}

	public:

		void get_data(int num1,int num2)
		{
			n1 = num1;
			n2 = num2;

			summation();
		}
}add_obj;

class subt
{
	int n1,n2;

	void difference()
	{
		cout <<n1-n2;
	}

	public:

		void get_data(int num1,int num2)
		{
			n1 = num1;
			n2 = num2;

			difference();
		}

}sub_obj;

class mult
{
	int n1,n2;

	void product()
	{
		cout<< n1*n2;
	}

	public:

		void get_data(int num1,int num2)
		{
			n1 = num1;
			n2 = num2;

			product();
		}
}mult_obj;

class div
{
	int n1,n2;

	void quotient()
	{
		cout<< n1/n2;
	}

	public:

		void get_data(int num1,int num2)
		{
			n1 = num1;
			n2 = num2;

			quotient();
		}
}div_obj;

int main()
{
	int choice,num1,num2;

	cout << "Enter choice: " << endl << "1. Addition" << endl << "2. Subtraction" << endl << "3. Multiplication" << endl <<"4. Division" << endl;

	cin >> choice;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;


	switch(choice)
	{
		case 1: add_obj.get_data(num1,num2);
				break;

		case 2: sub_obj.get_data(num1,num2);
				break;

		case 3: mult_obj.get_data(num1,num2);
				break;

		case 4: div_obj.get_data(num1,num2);
				break;

		default: cout << "Error. ";
				 break;
	}



	return 0;
}
