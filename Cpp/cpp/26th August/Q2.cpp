#include<iostream>

using namespace std;

/*
Write a c++ class called 'student' with
Data members:
name(char type),
marks1,marks2 (integer type)
The program asks the user to enter name and marks. Then calc_media() calculates the
media note and disp() display name and total media mark on screen in different lines.

*/

class student
{
  char name[50];
  int marks1,marks2;
  int calc_media()
  {
    return (marks1+marks2);
  }

  public:

    void display()
    {
      cout << "Name: " << name << endl;
      cout << "Total marks: " << calc_media();
    }

    void get_data()
    {
      cout << "Name: ";
      cin.get(name,50);
      cout<<"Marks: ";
      cin >> marks1 >> marks2;

      display();
    }
}obj;

int main()
{
  obj.get_data();
  return 0;
}
