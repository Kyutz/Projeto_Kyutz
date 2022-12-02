#include <iostream>
using namespace std;

// Classe D
class D
{
private:
    int D1;
    float D2;

public:
    void setD1(int);
    void setD2(float);
    int getD1();
    float getD2();
    void MD1();
    void MD2();
};

int D::getD1()
{
    return D1;
}
float D::getD2()
{
    return D2;
}
void D::setD1(int x)
{
    D1 = x;
}
void D::setD2(float y)
{
    D2 = y;
}

void D::MD1()
{
    cout << "MD1";
}

void D::MD2()
{
    cout << "MD2";
}



int main()
{

    return 0;
}

