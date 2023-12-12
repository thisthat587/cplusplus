// 2. Write a program which show the use of friend funcion.
#include<iostream>

using namespace std;

class Person {
    private:
    int roll=2;
    public:
    friend class Person1; 
} ;

class Person1{
    public:
    Person1(Person &p) {
        cout<<p.roll<<endl;
    }
};

int main() {
    Person p;
    Person1 p1= Person1(p);
    return 0;
}