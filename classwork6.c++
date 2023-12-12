//  6. Write C++ code to show use of pass by value ,pass by reference, and pass by pointer.

#include<iostream>

int passbyValue(int value){
    return value;
}

int passbyReference(int *ptr){
    return *ptr;
}
int passbyPointer(int value){
    return value;
}

int main(){
 int a=10;
 int *ptr=&a;
 std::cout<<passbyValue(a)<<std::endl;
 std::cout<<passbyReference(&a)<<std::endl;
 std::cout<<passbyPointer(*ptr)<<std::endl;
 return 0;
}