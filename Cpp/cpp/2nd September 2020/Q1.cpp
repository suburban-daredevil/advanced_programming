#include<iostream>

using namespace std;

class Square
{
	protected:
		int side;

		void getPeri()
		{
			cout << "The perimeter is given by: " << 4*side << endl;
		}

		void getArea()
		{
			cout << "The area is given by: " << side*side << endl;
		}

		public:
		void calc_function()
		{
			cout << "Enter side value: ";
			cin >> side;
			getPeri();
			getArea();
		}
};

class Cube : public Square
{
	void getArea()
	{
		cout << "The area of the cube is: " << 6*side*side << endl;
	}

	void getVolume()
	{
		cout << "The volume of the cube is: " << side*side*side;
	}

	public:
		void calc_function()
		{
			cout << "Enter cube side: ";
			cin >> side;
			getArea();
			getVolume();
		}
}object;

int main()
{
	int choice;
	cout << "Enter choice: (1. Square,2. Cube)"<<endl;
	cin>>choice;

	if(choice == 1)
	{
		object.Square::calc_function();
	}

	else if(choice == 2)
	{
		object.calc_function();
	}

	else cout << "Error" << endl;
	return 0;
}
