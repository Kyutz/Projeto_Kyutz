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
    void MA3();
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

void A::MA3()
{
    cout << "Alteração a classe A partir do clone";
}


int main()
{

    return 0;
} 

