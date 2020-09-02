#include<iostream>

using namespace std;

class Rectangle
{
	int length, breadth;


		void Perimeter()
		{
			cout << "Perimeter is given by: " << 2*(length+breadth) << endl;
		}

		void Area()
		{
			cout << "Area is given by: " << length*breadth << endl;
		}

	public:

		void get_data()
		{
			cout << "Length: ";
			cin >> length;
			cout << "Breadth: ";
			cin >> breadth;
		}

		int return_length()
		{
			return length;
		}

		int return_breadth()
		{
			return breadth;
		}

		void calc_values()
		{
			get_data();
			Perimeter();
			Area();
		}

		Rectangle()
		{
			cout << "---------------------------------------------"<<endl;
			cout << "Rectangle constructor;" << endl;
			length = 1;
			breadth = 1;
			cout  << "---------------------------------------------"<<endl;
		}

		~Rectangle()
		{
			cout << "---------------------------------------------"<<endl;
			cout << "The rectangle destructor function has been called. Thank you, good day." << endl;
			cout << "---------------------------------------------"<<endl;
		}
};

class Cuboid : public Rectangle
{
	int height;

	void get_data()
	{

			cout << "Enter specifics of the cuboid: " << endl;
			Rectangle::get_data();
			cout << "Height: ";
			cin >> height;
	}

	void surface_area()
		{
			int length = Rectangle::return_length();
			int breadth = Rectangle::return_breadth();
			int s_area = 2*((length*height) + (breadth*height) + (length*breadth));

			cout << "Surface area: " << s_area << endl;
		}

		void volume()
		{
			int length = Rectangle::return_length();
			int breadth = Rectangle::return_breadth();
			int vol = length*breadth*height;

			cout << "Volume of the cuboid: " << vol << endl;
		}


	public:

		void calc_values()
		{
			get_data();
			surface_area();
			volume();
		}

		Cuboid()
		{
			cout << "---------------------------------------------"<<endl;
			cout << "cuboid constructor;" << endl;
			Rectangle();
			height = 1;
			cout << "---------------------------------------------"<<endl;
		}

		~Cuboid()
		{
			cout <<"---------------------------------------------"<<endl;
			cout << "The cuboid destructor function has been called. Thank you, good day." << endl;
			cout <<"---------------------------------------------"<<endl;
		}
}object;

int main()
{
	int choice;
	cout << "Enter your choice: (1. Rectangle 2.Cubiod)";
	cin >> choice;

	if(choice == 1)
	{
		object.Rectangle::calc_values();
	}

	else if(choice == 2)
	{
		object.calc_values();
	}

	else
	{
		cout << "Invalid selection.";
		return -1;
	}
	return 0;
}
