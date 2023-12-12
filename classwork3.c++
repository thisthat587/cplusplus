// 3. Write nested class example in C++.

#include <iostream>

using namespace std;

class Upperclass {

  int roll = 5;

public:
  class Innerclass {
    int innerroll;

  public:
    void Setinneroll(int r) { innerroll = r; }

    int getRoll() { return innerroll; }
  };
  Innerclass i;
};

int main() {
  Upperclass u1 = Upperclass();
  u1.i.Setinneroll(12);
  cout << u1.i.getRoll() << endl;
  return 0;
}