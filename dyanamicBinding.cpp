#include <iostream>
using namespace std;

class Animal
{
public:
    Animal() // constructor
    {
        cout << "Something" << endl;
    }
    virtual void makeSound() // Virtual function
    {
        cout << "Animal is sounding" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Dog is barking" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Cat is meowing" << endl;
    }
};

int main()
{
    Animal *dog = new Dog();
    Animal *cat = new Cat();
    Animal animal;
    cat->makeSound();
    dog->makeSound();
    return 0;
}