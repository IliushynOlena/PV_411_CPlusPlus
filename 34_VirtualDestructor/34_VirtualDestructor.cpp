#include <iostream>
using namespace std;

class Student
{
	string name;
	string spetialization;
	int* marks;
	int countMark ;
public:
	Student():name("none"),spetialization("none"),marks(nullptr),countMark(0){}
	Student(string n, string s):name(n),spetialization(s)
	{
		countMark = rand() % 12 + 1;
		marks = new int[countMark];
		for (int i = 0; i < countMark; i++)
		{
			marks[i] = rand() % 5 + 8 ;//0...4
		}
	}
	virtual void Print()const
	{
		cout << "Student : " << name << endl;
		cout << "Spetialization : " << spetialization << endl;
		cout << "Marks : ";
		for (int i = 0; i < countMark; i++)
		{
			cout << marks[i] << " ";
		}
		cout << endl;
	}
	virtual ~Student()
	{
		if (marks != nullptr)
			delete[]marks;
	}
};
class Aspirant: public Student
{
	string *subjects;
	int countSubjects;
public:
	Aspirant():subjects(nullptr),countSubjects(0), Student(){}
	Aspirant(string n, string s, initializer_list<string> list):Student(n,s){
	
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
		Student::Print();
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
	Student student("Vasia", "Programing");
	student.Print();

	Aspirant asp("Ivanka", "Finance",{"Bank system","Deposit","Kredut"});
	asp.Print();

	Student* group[3]
	{
		new Student("Vasia", "Programing"),
		new Aspirant("Ivanka", "Finance",{"Bank system","Deposit","Kredut"}),
		new Aspirant("Olga", "Design",{"Main page","UA/UX"})
	};

	for (int i = 0; i < 3; i++)
	{
		group[i]->Print(); 
		cout << "____________________________" << endl;
		delete group[i];
	}

}
