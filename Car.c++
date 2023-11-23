#include <iostream>
using namespace std;

class Cars
{
private:
    string brand;
    string color;
    int manf_year;
    string owner;

public:
    void setbrand(string new_brand)
    {
        brand = new_brand;
    }
    string getbrand()
    {
        return brand;
    }
    void setColor(string new_color)
    {
        color = new_color;
    }
    string getColor()
    {
        return color;
    }
    void setManfYear(int new_manf_year)
    {
        manf_year = new_manf_year;
    }
    int getManfYear()
    {
        return manf_year;
    }
    void setowner(string new_owner)
    {
        owner = new_owner;
    }
    string getowner()
    {
        return owner;
    }
    
};

int main()
{
    system("cls");
    Cars car1;
    car1.setbrand("Honda");
    car1.setColor("Black");
    car1.setManfYear(2021);
    car1.setowner("Piyush singh");
    cout <<car1.getbrand() << endl;
    cout << car1.getColor() << endl;
    cout << car1.getManfYear() << endl;
    cout << car1.getowner() << endl;
    return 0;
}
