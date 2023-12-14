#include<iostream>
#include <ostream>

class A {
    private:
        int a=10;
    public:
    int b=20;
    friend void friendcalss(A);
};

void friendcalss(A obj){
    std::cout<<obj.a<<std::endl;
}

class B:public A{

};

int main(){
    A obj1;
    friendcalss(obj1);
    B obj2;
    std::cout<<obj2.b<<std::endl;
}