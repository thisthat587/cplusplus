#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    float s1, s2, s3;
#include <iostream> // Include the necessary header for using cout

int main(int argc, const char *argv[]) {
    enum state { ok, error, warning };
    enum state s1, s2, s3;
    s1 = ok;
    s2 = warning;
    s3 = error;
    std::cout << s1 << s2 << s3; // Use std::cout to print the values
    return 0;
}

public:
    Triangle(float side1, float side2, float side3)
    {
        s1 = side1;
        s2 = side2;
        s3 = side3;
    }
    int isEquilateral()
    {
        if (s1 == s2 && s2 == s3)
        {
            return 1;
        }
        else
            return 0;
    }
    int isScalene()
    {
        if (s1 != s2 && s2 != s3 && s1 != s3)
        {
            return 1;
        }
        else
            return 0;
    }
    int isIsosceles()
    {
        if ((s1 == s2 && s2 != s3) || (s1 == s3 && s2 != s3) || (s2 == s3 && s1 != s3))
        {
            return 1;
        }
        else
            return 0;
    }
    float calculatePerimeter()
    {
        return s1 + s2 + s3;
    }
    float calculateArea()
    {
        float s = (s1 + s2 + s3) / 2;
        return sqrt(s * (s - s1) * (s - s2) * (s - s3));
    }
    void typeOfTriangle()
    {
        if (isEquilateral())
        {
            cout << "Triangle is Equilateral" << endl;
        }
        else if (isScalene())
        {
            cout << "Triangle is Scalene" << endl;
        }
        else if (isIsosceles())
        {
            cout << "Triangle is Isosceles" << endl;
        }
    }
};

int main()
{
    Triangle triangle(2.0, 2.0, 1.0);
    triangle.typeOfTriangle();
    float perimeter = triangle.calculatePerimeter();
    float area = triangle.calculateArea();
    cout << perimeter << endl;
    cout << area << endl;
}