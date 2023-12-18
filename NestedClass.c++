// 3. Write nested class example in C++.

#include <iostream>
using namespace std;

class OuterClass
{

public:
  void OuterClassfun()
  {
    cout << "This is Outer class..." << endl;
    inner.InnerClassfun();
  }
  
  class InnerClass
  {
  public:
    void InnerClassfun()
    {
      cout << "This is Inner class..." << endl;
    }
  };

private:
  InnerClass inner;
};

int main()
{
  OuterClass outer;
  outer.OuterClassfun();
  return 0;
}