// write a program to show single and multiple inheritance

#include <iostream>

using namespace std;

class A
{
public:
    int a = 10;
};

class B
{
public:
    int b = 20;
};

class C
{
public:
    int c = 30;
};

class Achild : public A
{
};

class M : public A, public B, public C
{
    
};

class D : public Achild
{
public:
    D()
    {
        cout << "Multilevel inheritence" << endl;
    }
};
int main()
{
    Achild obj1;

    M obj2;

    // single inheritance...
    cout <<"Single inheritance : "<< obj1.a << endl;

    // multiple inheritence
    cout <<"Multiple inheritance : "<< obj2.a << endl;
    cout <<"Multiple inheritance : "<< obj2.b << endl;
    cout <<"Multiple inheritance : "<< obj2.c << endl;

    // miltilevel inheritence...
    D obj3;

    return 0;
}