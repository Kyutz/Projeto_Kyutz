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