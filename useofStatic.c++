#include <iostream>

using namespace std;

class Main
{
public:
  static int staticVariable;

  static void staticFunction()
  {
    cout << "I am Static function" << endl;
  }
};
int Main::staticVariable = 9;

int main()
{
    cout << Main::staticVariable << endl;
    Main::staticFunction();
}
