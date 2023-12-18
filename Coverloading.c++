#include<iostream>

using namespace std;

class Main{
    public:
    Main(){
        cout<<"This is default constructor..."<<endl;
    }

    Main(int a){
        cout<<"This is prameterized constructor...."<<endl;
    }
};

int main(){
    Main obj;
    Main obj1(3);
}