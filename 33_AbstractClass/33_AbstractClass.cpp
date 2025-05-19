#include <iostream>
using namespace std;

class Animal//abstract class
{
	string name;
	string place;
	float weight;
public:
	Animal():name("none"), place("no place"),weight(0){}
	Animal(string n, string p, float w):name(n), place(p),weight(w){}
	void Show()const
	{
		cout << "Name : " << name << endl;
		cout << "Place : " << place << endl;
		cout << "Weight : " << weight << endl;
	}
	//virtual function
	virtual void Move()const
	{
		cout << "I am moving......" << endl;
	}
	//pure virtual function = 0;
	virtual void Say()const = 0;
	
};
class Lion: public Animal
{
	float runSpeed;
public:
	Lion():runSpeed(0),Animal(){}
	Lion(string n, string p, float w, float r):runSpeed(r),Animal(n,p,w){}

	void Say()const override
	{
		cout << "Rrrrrrrrrrrrrrrrrrrr-rrrrrrrrrrrrrrrr-rrrrrrrrr" << endl;
	}
	void Move()const override
	{
		cout << "I am running with speed : " << runSpeed << " km/h" << endl;
	}
};
class Parrot : public Animal
{
	float flyHeight;
public:
	Parrot():flyHeight(0),Animal(){}
	Parrot(string n, string p, float w, float f):flyHeight(f),Animal(n,p,w){}
	void Say()const override
	{
		cout << "Awwwww-awwwww-awwwwww" << endl;
	}
	void Move()const override
	{
		cout << "I am flying up to : " << flyHeight << " m" << endl;
	}	
};
class Dolphin : public Animal
{
	float depth;
public:
	Dolphin() :depth(0), Animal() {}
	Dolphin(string n, string p, float w, float d) :depth(d), Animal(n, p, w) {}
	void Say()const override
	{
		cout << "Pipipipipipippipipipipipipiipipipip" << endl;
	}
	void Move()const override
	{
		cout << "I am swimming up to : " << depth << " m" << endl;
	}
};
class Reptile: public Animal//abstract class 
{
protected:
	float depth;
public:
	Reptile() :depth(0), Animal() {}
	Reptile(string n, string p, float w, float d) :depth(d), Animal(n, p, w) {}
	void Move()const override
	{
		cout << "I am crawling and swimming up to : " << depth << " m" << endl;
	}
};
class Frog : public Reptile
{
public:
	Frog(string n, string p, float w, float d) : Reptile(n, p, w,d) {}
	void Say()const override
	{
		cout << "Kva-kva" << endl;
	}
	void Move()const override
	{
		cout << "I am jumping and swimming up to : " << depth << " m" << endl;
	}
};


void RollCall(Animal&  animal)
{
	animal.Move();
	animal.Say();
	cout << endl;
}
int main()
{

	/*Animal animal;
	animal.Show();
	animal.Move();
	animal.Say();*/

	Lion l("Simba","Africa",150,70);
	l.Move();
	l.Show();
	l.Say();

	Parrot p("Kesha", "House", 0.4, 1000);
	p.Move();
	p.Show();
	p.Say();

	Dolphin d("Oscar", "Black Sea",150, 300);
	d.Move();
	d.Show();
	d.Say();

	Frog f("Crazy Frog", "Boloto", 0.5, 40);
	f.Move();
	f.Show();
	f.Say();
	cout << "-----------------------------" << endl;
	Animal* zoo[4]
	{
		&l,&p,&d,&f
	};
	for (int i = 0; i < 4; i++)
	{
		zoo[i]->Show(); cout << endl;
	}
	cout << "-----------------------------" << endl;
	RollCall(l);
	RollCall(p);
	RollCall(d);
	RollCall(f);
}

