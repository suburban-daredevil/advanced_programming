#include<iostream>
#include<cstring>


using namespace std;

class Student
{
	int marks;
	char Grade[2];

	public:

		void disp_data()
		{
			cout << "Marks: " << marks << endl;
			cout << "Grade: " << Grade << endl;
		}

		Student(int mark,char grade[2])
		{
			marks = mark;
			strcpy(Grade,grade);
		}
};


int main()
{
	Student stud1(730,"A");
	cout << "Record of student 1:: ------------- " << endl;
	stud1.disp_data();

	Student stud2(621,"B");-
	cout << "Record of student 2:: ------------- " << endl;
	stud2.disp_data();

	return 0;
}
