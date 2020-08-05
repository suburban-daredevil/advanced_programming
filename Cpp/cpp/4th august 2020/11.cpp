#include <iostream>
#include<cmath>

using namespace std;

int main()
{
   float radius;
   cout << "Calculate the volume of a sphere : "<< endl <<  "--------------------------------------- " << endl;
   cout << "Enter radius: ";
   cin >> radius;
   if(radius <= 0)
   {
       cout<<"Invalid input, please try again.";
       return -1;
   }
   cout << "The volume of the sphere is " << (4.0/3.0)*3.14*radius*radius*radius;
   //pow(radius,3)
   return 0;
}
