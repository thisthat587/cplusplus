// 1. Create a class called student, then create 3 objects from it and use setter/getter method to put data in that object member.
#include<iostream>

using namespace std;

class Student{
    private:
    int roll;
    public:
    void setRoll(int r){
        roll=r;
    }

    int getRoll(){
        return roll;
    }
};

int main(){
    Student std1=Student();
    Student std2=Student();
    Student std3=Student();

    std1.setRoll(132);
    std2.setRoll(234);
    std3.setRoll(555);

    cout<<"Roll1 : "<<std1.getRoll()<<endl;
    cout<<"Roll2 : "<<std2.getRoll()<<endl;
    cout<<"Roll3 : "<<std3.getRoll()<<endl;

}