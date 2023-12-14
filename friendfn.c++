#include <iostream>
#include <ostream>

class A
{
private:
    int a = 10;

public:
    A()
    {
        std::cout << "original value of a : " << a << std::endl;
    }
    friend void friendfn(A);
};

void friendfn(A obj)
{
    obj.a = 30;
    std::cout << "Modified value of a " << obj.a << std::endl;
}

int main()
{
    A obj1;
    friendfn(obj1);

    return 0;
}