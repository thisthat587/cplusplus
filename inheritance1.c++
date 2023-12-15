#include <iostream>

class Base1
{
public:
    void func1()
    {
        std::cout << "Walking" << std::endl;
    }
};

class Base2
{
public:
    void func1()
    {
        std::cout << "Running" << std::endl;
    }
};

class Derived : public Base1, public Base2
{
};

int main()
{
Derived obj;
    obj.Base1::func1(); // scope resolution use krte h class ke scope ko define krne k liye
    obj.Base2::func1();
}