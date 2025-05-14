#include <iostream>
using namespace std;

//private public protected
class Enemy
{
protected:
    string name;
    int health;
    float strength;
    static const int maxHealth = 100;
public:
    Enemy():name("no name"),health(0),strength (0){}
    Enemy(string name, int s):name( name),health(maxHealth),strength (s){}
    void Print()
    {
        cout << "Name : " << name << endl;
        cout << "Health : " << health << endl;
        cout << "Strength : " << strength << endl;
    }
    bool IsAlive()
    {
        return health > 0;
    }
    void DecreaseHealth(int value)
    {
        if (health - value < 0)
            health = 0;
        else
            health -= value;
    }
};
//Inheritance
//class Child : [spetificator]Parent
class Dragon : public Enemy
{
    float fire;
public:
    Dragon():fire(0), Enemy(){}
    Dragon(string n, int s, float f):fire(f), Enemy(n,s){}
   /* {
        name = "no name";
        strength = 0;
        health = 0;
    }*/
    void Fight(int damage)
    {
        cout << "Getting damage : " << damage << endl;
        DecreaseHealth(damage - fire);
        cout << "Health after damage : " << health << " % " << endl;
    }
    float Attack()
    {
        cout << "Attacking with strength : " << strength << endl;
        return strength;
    }
    void Print()
    {
        cout << "------------- Dragon-------------------" << endl;
        Enemy::Print();
        cout << "Fire : " << fire << endl;
    }

};

class Monster: public Enemy
{
    float run_speed;
public:
    Monster():run_speed(0),Enemy(){}
    Monster(string n, int s, int r):run_speed(r),Enemy(n,s){}
    void Print()
    {
        cout << "------------- Monster-------------------" << endl;
        Enemy::Print();
        cout << "Run speed : " << run_speed << endl;
    }
    void Run()
    {
        cout << "Run speed : " << run_speed << endl;
    }
};
int main()
{
    Dragon d("Bob",10,5);
    d.Print();
    Dragon boss("Boss", 15, 7);
    boss.Print();
    int i = 1;
    do
    {
        cout << "------------- Round [ " << i << " ] ---------------" << endl;
        boss.Fight(d.Attack());
        d.Fight(boss.Attack());
        d.Print();
        boss.Print();
        i++;

    } while (d.IsAlive() && boss.IsAlive());

    Monster m("Crazy frog", 2, 150);
    m.Print();
    m.Run();
  
}

