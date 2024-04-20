#include <iostream>
using namespace std;

class Animal
{
public:
    void eating()
    {
        cout << "Animla is eating" << endl;
    }
};

class Dog : public Animal
{
public:
    void speaking()
    {
        cout << "Dog is barking..." << endl;
    }
};

int main()
{
    Dog dog;
    dog.eating();
    dog.speaking();
    return 0;
}