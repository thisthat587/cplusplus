#include <iostream>
using namespace std;

class Student
{
public:
    double marks1, marks2;
};

Student returnObj()
{
    Student student;
    student.marks1 = 20;
    student.marks2 = 50;
    return student;
}

int main()
{
    Student std;
    std = returnObj();
    cout << std.marks1 << endl;
    cout << std.marks2 << endl;
    return 0;
}