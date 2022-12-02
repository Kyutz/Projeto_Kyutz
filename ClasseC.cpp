#include <iostream>
using namespace std;

// Classe C
class C
{
private:
    int C1;
    float C2;

public:
    void setC1(int);
    void setC2(float);
    int getC1();
    float getC2();
    void MC1();
    void MC2();
    void MC3();
};

int C::getC1()
{
    return C1;
}
float C::getC2()
{
    return C2;
}
void C::setC1(int x)
{
    C1 = x;
}
void C::setC2(float y)
{
    C2 = y;
}

void C::MC1()
{
    cout << "MC1";
}

void C::MC2()
{
    cout << "MC2";
}

void C::MC3()
{
    cout << "MC3";
}


int main()
{

    return 0;
}