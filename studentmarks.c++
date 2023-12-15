// Student gets his/her marks in 3 subjects and also gets marks from one extra-activity work . He/She gets average of all provided marks, using multiple inheritance show his /her average marks.

#include <iostream>

class General
{
protected:
    int java;
    int IWD;

public:
    General()
    {
    }
};

class Eactivity : public General
{
protected:
    int Extra;

public:
    Eactivity()
    {
    }
    Eactivity(int E, int j, int iwd)
    {
        Extra = E;
        java = j;
        IWD = iwd;
        std::cout << java << std::endl;
        std::cout << Extra << std::endl;
        std::cout << IWD << std::endl;
    }

    int CalcavgMarks()
    {
        return (Extra + IWD + java)/3;
    }
};

int main()
{
    General GenObj;
    Eactivity EObj(98, 90, 95);
    std::cout << "Average Marks : " << EObj.CalcavgMarks() << std::endl;
    return 0;
}