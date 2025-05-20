#include <iostream>
using namespace std;

class Person//absract class
{
	string name;
public:
	Person() :name("none") {}
	Person(string n) :name(n) {}
	virtual void Print()const
	{
		cout << "Student : " << name << endl;
	}
	//pure virtual method
	virtual ~Person() = 0 {};
};
class Aspirant : public Person
{
	string* subjects;
	int countSubjects;
public:
	Aspirant() :subjects(nullptr), countSubjects(0), Person() {}
	Aspirant(string n, initializer_list<string> list) :Person(n) {

		this->countSubjects = list.size();
		subjects = new string[countSubjects];
		int i = 0;
		for (string sub : list)
		{
			subjects[i] = sub;
			i++;
		}
	}
	void Print()const override
	{
		Person::Print();
		cout << "Subject : ";
		for (int i = 0; i < countSubjects; i++)
		{
			cout << subjects[i] << " | ";
		}
		cout << endl;
	}
	~Aspirant()
	{
		if (subjects != nullptr)
			delete[]subjects;
	}
};
int main()
{
	srand(time(0));
	/*Person student("Vasia");
	student.Print();*/

	Aspirant asp("Ivanka", { "Bank system","Deposit","Kredut" });
	asp.Print();

	Person* group[2]
	{
		//new Person("Vasia"),
		new Aspirant("Ivanka",{"Bank system","Deposit","Kredut"}),
		new Aspirant("Olga", {"Main page","UA/UX"})
	};

	for (int i = 0; i < 2; i++)
	{
		group[i]->Print();
		cout << "____________________________" << endl;
		delete group[i];
	}

}
