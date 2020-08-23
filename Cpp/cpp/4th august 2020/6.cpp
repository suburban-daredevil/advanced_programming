#include<iostream>

using namespace std;

int main()
{
    char gender;
    bool marital_status;
    int no_of_sons, year_of_appointment;
    long int salary,salary_drawn,balance_till;
    float height, GPA;

    cout<<"Enter gender: ";
    cin.get(gender,1);

    if((gender!='f')||(gender!='m')||(gender!='M')||(gender!='F'))
    {
        cout << "Error. ";
        return -1;
    }

    cout << "Enter marital status (0/1): ";
    cin>>marital_status;

    cout << "Enter number of children: ";
    cin>>no_of_sons;

    if(no_of_sons<0)
    {
        cout << "Error. ";
        return -1;
    }

    cout << "Enter year of appointment: ";
    cin >> year_of_appointment;

    if((year_of_appointment<1990)||(year_of_appointment>2020))
    {
        cout << "Error. ";
        return -1;
    }

    cout << "Enter salary (per annum): ";
    cin >> salary;

    if(salary>LLONG_MAX)
    {
        cout << "Error. ";
        return -1;
    }

    cout << "Enter salary drawn to date: ";
    cin >> salary_drawn;

    if(salary_drawn>LLONG_MAX)
    {
        cout << "Error. ";
        return -1;
    }

    cout << "Enter balance: ";
    cin >> balance_till;

    if(balance_till>LLONG_MAX)
    {
        cout << "Error. ";
        return -1;
    }

    cout << "Enter height in feet and inches (eg. 5.55): ";
    cin >> height;

    if((height<0.0)||(height>8.0))
    {
        cout << "Error. ";
        return -1;
    }

    cout << "Enter GPA: ";
    cin >> GPA;

    if((GPA<0.0)||(GPA>10.0))
    {
        cout << "Error. ";
        return -1;
    }

    return 0;
}
