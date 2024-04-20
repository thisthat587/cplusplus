#include <iostream>
using namespace std;

class Animal
{
public:
    void displayAnimal()
    {
        cout << "Animal" << endl;
    }
};

class Mammal : public Animal
{
public:
    void displayMammal()
    {
        cout << "Animal is Mammal" << endl;
    }
};

class Dog : public Mammal
{
public:
    void displayDog()
    {
        cout << "Mammal is Dog" << endl;
    }
};

int main()
{
    Dog dog;
    dog.displayAnimal();
    dog.displayMammal();
    dog.displayDog();
    return 0;
}