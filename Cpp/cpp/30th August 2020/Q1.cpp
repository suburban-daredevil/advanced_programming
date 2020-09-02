#include<iostream>

using namespace std;

class volume{
  int side;
  int vol;
  void calc_vol()
  {
    vol = side*side*side;
  }

public:
  volume()
  {
    side = 1;
    vol = 1;
  }

  volume(int i)
  {
    side = i;
    vol = 1;
  }

  int ret_vol()
  {
	calc_vol();
    return vol;
  }

};


int main() {
  volume obj;
  cout << "Default constructor volume: "<< obj.ret_vol();

  volume obj1(5);
  cout << endl << "Parameterized constructor with side = 5 passed: " << obj1.ret_vol();

  return 0;
}
