// 4. Give example of constructor overloading.

#include<iostream>

using namespace std;
class Main{
    public:
    Main(){
        cout<<"Default contructor..."<<endl;
    }
    Main(int a){
        cout<<"Parameterized constructor..."<<endl;
        cout<<"Value is : "<<a<<endl;
    }
};

int main(){
    Main obj1=Main();
    Main obj2=Main(12);
}

