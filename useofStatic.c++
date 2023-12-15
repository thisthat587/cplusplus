// // 5. Write c++ ( OOP ) program to show use of static member variable.
// #include <iostream>

// class Main
// {
// private:
//   static int roll;

// public:
//   static void getroll()
//   {
//     std::cout << roll << std::endl;
//   }
// };

// int Main::roll = 12;

// int main()
//   {
//   Main::getroll();
//   return 0;
//   }
#include <iostream>

int *fun()
{
  int a = 10;
  int *ptr = &a;
  std::cout<<*ptr<<std::endl;
  return ptr;
}

int main()
{
  int *ptr=fun();
  std::cout<<*ptr<<std::endl;
  std::cout<<*ptr<<std::endl;

  return 0;
}