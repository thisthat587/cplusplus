#include <iostream>
using namespace std;

class Student
{
public:
    double marks;
    Student(double m)
    {
        marks = m;
    }
};

void displayMarks(Student s1, Student s2)
{
    double avg = (s1.marks + s2.marks) / 2;
    cout << "Average : " << avg << endl;
}

int main()
{
    Student student1(97);
    Student student2(70);
    displayMarks(student1, student2);
    return 0;
}