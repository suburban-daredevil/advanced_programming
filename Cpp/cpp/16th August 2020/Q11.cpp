#include<iostream>
#include<cmath>

using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{                                               // 1 - X^2/2! + X^4/4!
    int num,x;
    float val,sum=0.0;
    cout<<"Enter the value of n: ";
    cin >> num;
    cout<<"Enter the value of X: ";
    cin >> x;


    int sign=-1, power=0;
    for(int i=1;i<=num;i++)
    {
        sign*=-1;
        val = (float)sign*pow(x,(power))/factorial(power);
        cout << "Term " << i << " value is: " << val << endl;
        power+=2;
        sum+=val;
    }

    cout << "The value of the given expression for X = " << x << " and n = " << num << " is " << sum;
    return 0;
}
