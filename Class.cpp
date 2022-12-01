#include <iostream>
using namespace std;

// Classe A
class A
{
private:
    int A1;
    float A2;

public:
    void setA1(int);
    void setA2(float);
    int getA1();
    float getA2();
    void MA1();
    void MA2();
};

int A::getA1()
{
    return A1;
}
float A::getA2()
{
    return A2;
}
void A::setA1(int x)
{
    A1 = x;
}
void A::setA2(float y)
{
    A2 = y;
}

void A::MA1()
{
    cout << "MA1";
}

void A::MA2()
{
    cout << "MA2";
}

// Classe B
class B
{
private:
    int B1;
    float B2;

public:
    void setB1(int);
    void setB2(float);
    int getB1();
    float getB2();
    void MB1();
    void MB2();
};

int B::getB1()
{
    return B1;
}
float B::getB2()
{
    return B2;
}
void B::setB1(int x)
{
    B1 = x;
}
void B::setB2(float y)
{
    B2 = y;
}

void B::MB1()
{
    cout << "MB1";
}

void B::MB2()
{
    cout << "MB2";
}

int main()
{   
   
    return 0;
}