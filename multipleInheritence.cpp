#include <iostream>

using namespace std;

class Parent1
{
public:
    void display()
    {
        cout << "Parent1" << endl;
    }
};

class Parent2
{
public:
    void display()
    {
        cout << "Parent2" << endl;
    }
};

class Child : public Parent1, public Parent2
{
public:
    void show()
    {

        Parent1::display();
        Parent2::display();
    }
};

int main()
{
    Child child;
    child.show();
    return 0;
}