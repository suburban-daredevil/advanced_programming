#include<iostream>

using namespace std;

class student
{
    char name[10];
    int roll;
    float mark;

    void display()
    {
        cout << "Name: "<<  name;
        cout << endl << "Roll no: " << roll;
        cout << endl << "Marks: " << mark;
    }

public:
    void studetails()
    {
        cin.get(name,10);
        cin >> roll;
        cin >> mark;

        display();

    }

}s1;


int main()
{
    s1.studetails();
    return 0;
}
