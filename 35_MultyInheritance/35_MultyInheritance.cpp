#include <iostream>
using namespace std;

class Car
{
public:
    void Drive()
    {
        cout << "I can drive " << endl;
    }
    void Use()
    {
        cout << "I can drive " << endl;
    }
};
class Airplane
{
public:
    void Fly()
    {
        cout << "I can fly " << endl;
    }
    void Use()
    {
        cout << "I can drive " << endl;
    }
};
class FlyCar: public Car, public Airplane
{

};
class A
{
public :
    int value;
};
class B: public A{};
class C: public A{};
class D : public B, public C
{
public:
    int getValue()
    {
        //return value;
        return B::value;
        return C::value;
        return B::A::value;
        return C::A::value;
    }
};
int main()
{
    Car car;
    car.Drive();

    Airplane air;
    air.Fly();

    FlyCar fc;
    fc.Drive();
    fc.Fly();

    ((Car)fc).Use();
    ((Airplane)fc).Use();

}