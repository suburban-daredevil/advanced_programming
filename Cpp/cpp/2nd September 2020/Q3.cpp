#include<iostream>

using namespace std;

class Employee
{
	protected:
		int eno;
		char name[20],des[20];

		void get_data()
		{
			cout << "Enter employee number: ";
			cin >> eno;

			cout << "Enter name: ";
			cin >> name;

			cout << "Enter designation: ";
			cin >> des;

		}
};
//public private
class salary: protected Employee
{	//public:
	float basicpay, hra, da, pf, netpay;

	void calc_pay()
	{
		cout << "Enter basic pay: " ;
		cin >> basicpay;
		cout << "Enter HR Allowance(in decimal 0-1): ";
		cin >> hra;
		cout << "Enter daily allowance (in decimal 0-1): ";
		cin >> da;
		cout << "Enter provident fund (0-1): ";
		cin >> pf;

		netpay = basicpay+(basicpay*hra)+(basicpay*da)+(basicpay*pf);

		cout << "----------------------------------------------";
		cout << "Name: " << name << endl;
		cout << "Employee no: " << eno << endl;
		cout << "Designation: " << des << endl;
		cout << "Netpay: " << netpay << endl;
	}

	public:

		void begin_function()
		{
			get_data();
			calc_pay();
		}
}emp;

int main()
{
	cout << "Payroll System" << endl;
	emp.begin_function();
	return 0;
}


/*
Here, the base class Employee is inherited as a protected class, meaning it's
variables and methods will be accessible to the sub class as protected variables.
The members are also defined as protected. Alternatively, members of the base class
can also be declared as public, in which case they'll again be inherited as protected members
of the subclass.

If the inheritance mode is changed from protected to public, the members inherited
will still be inherited in the subclass as protected members. To change this behaviour the
access specifiers will also need modification as public.

*/
