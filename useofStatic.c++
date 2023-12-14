// 5. Write c++ ( OOP ) program to show use of static member variable.
#include <iostream>

class Main
{
private:
  static int roll;

public:
  static void getroll()
  {
    std::cout << roll << std::endl;
  }
};

int Main::roll = 12;

int main()
  {
  Main::getroll();
  return 0;
  }