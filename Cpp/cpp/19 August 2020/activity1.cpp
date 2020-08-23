#include<iostream>

using namespace std;

class NumberHolder{

public:
    int a;
    float b;

    void printval()
    {
        cout << a << " " << b ;
    }

    void getval()
    {
        cin >> a;
        cin >> b;
        printval();
    }
};


int main()
{
    NumberHolder obj;
    obj.getval();
    return 0;
}
