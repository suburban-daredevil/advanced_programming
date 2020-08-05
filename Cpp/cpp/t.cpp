#include<iostream>
#include<string.h>

using namespace std;


class engine{

  int capacity;
  int fuel;
  int size[3];
  string manufactured_location;

};

class coach{
public:
  int size[3];
  char type;
  int coach_no;
  int seats;
  char type_return(){
    return type;
  }
};

class train{

public:
  int train_no;
  string train_route;
  int time;

  coach.type_return();

}obj_train[50];



int main()
{
  train obj;
  char type = obj.type_return();
  return 0;


}
