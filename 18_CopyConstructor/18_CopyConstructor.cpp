#include <iostream>
using namespace std;
struct Point {
	int x;
	int y;
	/*Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}*/
};
class Student
{
private:
	string name;// Petro   ->  name = Petro
	int age;   //  age = 12 ->  age = 12
	int* marks;//  0cxv1xc32v  --> marks = 0cxv1xc32v
	int markCount;
public:
	//ctor + TAB 
	Student()
	{
		cout << "Default constructor" << endl;
		name = "no name";
		age = 2;
		marks = nullptr;
		markCount = 0;
	}
	Student(string name, int age)
	{
		cout << "Parametrized constructor" << endl;
		this->name = name;
	    this->age = age;
		marks = nullptr;
		markCount = 0;
	}
	Student(const Student & other)
	{
		this->name = other.name;//Nick --> Nick
		this->age = other.age;//15 ---> 15
		//this->marks = other.marks;//0x123 --> 0x123
		this->markCount = other.markCount;// 4 --> 4
		this->marks = new int[other.markCount];
		for (int i = 0; i < other.markCount; i++)
		{
			this->marks[i] = other.marks[i];
		}
	}
	void Print() {
		cout << "Name : "<< name << endl;
		cout << "Age : "<< age << endl;	
		cout << "Marks : ";
		for (int i = 0; i < markCount; i++)
		{
			cout << marks[i] << " ";
		}
		cout << endl << markCount << endl;
	}
	void AddMark(int mark)
	{
		markCount++;
		int* temp = new int[markCount];
		for (int i = 0; i < markCount - 1; i++)
		{
			temp[i] = marks[i];
		}
		temp[markCount - 1] = mark;


		if (marks != nullptr)
			delete[] marks;

		marks = temp;
	}

	//void AddVagon(Vagon newVagon)
	//{
	//	int n, pl, pass;
	//	cin >> n >> pl >> pass;
	//	vagonCount++;
	//	Vagon* temp = new Vagon[vagonCount];
	//	for (int i = 0; i < vagonCount - 1; i++)
	//	{
	//		temp[i] = marks[i];
	//	}
	//	temp[vagonCount - 1] = newVagon;
	//	temp[vagonCount - 1] = Vagon{n,pl,pass};
	//	temp[vagonCount - 1] = Vagon(n,pl,pass);
	//	if (marks != nullptr)
	//		delete[] marks;

	//	marks = temp;
	//}


	~Student()
	{
		cout << "Destructor" << name << endl;
		if (marks != nullptr)
			delete[] marks;
	}
};
class Animal
{
	//default constructor
	//destructor
	//copy constructor

};
struct Vagon {
	//public:
	int number;
	int places;
	int passanger;
	Vagon()
	{

	}
	void Show()
	{

	}
};
class Train
{
	//pribvate:
	string model;
	int countVagons;
	Vagon* vagons;

};
int main()
{
	Animal a;
	Student student_original("Nick",15);//default constrcutor
	student_original.AddMark(12);
	student_original.AddMark(8);
	student_original.AddMark(7);
	student_original.Print();
	cout << "Copy object" << endl;
	//student_original.AddVagon(Vagon{ 1,15,4 });

	{
		Student copy(student_original);
		copy.Print();
	}
	student_original.Print();

	/*
	//Point p( 10,20 );
	Point p{ 10,20};
	/*p.x = 10;
	p.y = 22;*/
	//cout << p.x << endl;
	//cout << p.y << endl;
	//int a;
	//int b = (float)3.33;//ініціалізація з копіюванням   3.33 - літерал
	//cout << b  << endl;

	//int numbers[2] {};//array int 2 уніфікована ініціалізація 
	//cout << numbers[0] << endl;
	//numbers[0] += 2;
	//cout << numbers[0] << endl;

	//int c = { 1.22 }; //error
	//cout << c << endl;
	// 
	// 
	// пряма ініціалізація 
	/*int g(22);
	cout << g << endl;

	int value{ 25 };
	cout << value << endl;
	const double PI{ 3.14 };
	cout << PI << endl;
	int marks[4]{ 11,12,10,4 };
	int* ptr{ nullptr };*/

	



}

