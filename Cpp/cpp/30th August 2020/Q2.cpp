#include<iostream>

using namespace std;

class Counter
{
  int counter;

public:

  Counter()
  {

  }

  Counter(int flag)
  {
    counter = 1;
  }

  int ret_count()
  {
    return counter;
  }
};

int main()
{
  Counter init_obj;
  cout << "The initial value of counter is: " << init_obj.ret_count() << endl;

  Counter updated_obj(0);
  cout << "The updated value of counter is: " << updated_obj.ret_count();
  return 0;
}
