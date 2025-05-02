#include <iostream>
using namespace std;

//int getMax(int* arr, int size)
//{
//    int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)max = arr[i];
//	}
//	return max;
//}
//long getMax(long* arr, int size)
//{
//	long max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)max = arr[i];
//	}
//	return max;
//}

template<typename T_arr>
T_arr getMax(T_arr* arr, int size)
{
	T_arr max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}


template<typename T_coll, typename T_value>
class MyClass
{
	T_coll* collection;
	int size;
	T_value point;
public:
	MyClass()
	{
		collection = nullptr;
		size = 0;
		//point = nullptr;
	}
	MyClass(T_coll*coll, T_value value):collection(coll), point(value){}
	~MyClass()
	{
		if (collection != nullptr)
			delete[]collection;
	}
	void setCollection(T_coll* coll);//prototype
	
	void setValue(T_value value);
	void Print()
	{
		cout << "Collection : " << collection << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << collection[i] << endl;
		}
		cout << "Value : " << point << endl;
	}

};

template<typename T_coll, typename T_value>
void MyClass<T_coll,T_value>::setCollection(T_coll* coll)
{
	this->collection = coll;
}
template<typename T_coll, typename T_value>
inline void MyClass<T_coll, T_value>::setValue(T_value value)
{
	this->point = value;
}
template<typename T_coord>
class Point
{
	T_coord x;
	T_coord y;
public:
	Point()
	{
		x = y = 0;//<------------
	}
	Point(T_coord value)
	{
		x = y = value;
	}
	Point(T_coord x, T_coord y)
	{
		this->x = x;
		this->y = y;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
	}
	void SetCoords(T_coord newX, T_coord newY)
	{
		this->x = newX;
		this->y = newY;
	}
	void Print()
	{
		cout << "X : " << this->x << " . Y : " << y << endl;
	}
};
template<typename T_X, typename T_Y>
class New_Point
{
	T_X x;
	T_Y y;
public:
	New_Point()
	{
		x = y = 0;//<------------
	}
	New_Point(T_X x, T_Y y)
	{
		this->x = x;
		this->y = y;
	}
	New_Point(const New_Point& other)
	{
		this->x = other.x;
		this->y = other.y;
	}
	void SetCoords(T_X newX, T_Y newY)
	{
		this->x = newX;
		this->y = newY;
	}
	void Print()
	{
		cout << "X : " << this->x << " . Y : " << y << endl;
	}
};
int main()
{
	Point<int> p1(5, 7);
	Point<float> p2(1.45, 7.96);
	p1.Print();
	p2.Print();
	p2.SetCoords(0.333, 0.78);
	p2.Print();
	New_Point<int ,float> p3(5, 1.14);
	p3.Print();
	p3.SetCoords(100, 55.55);
	p3.Print();
//	const int size = 7;
//	float arr[size] = { 5,7,8,14,15,32,54 };
//	cout << "Max = " << getMax(arr, size) << endl;
//	//string colors[5] = { "red","green","blue","yellow","white" };
//	//string colors[5] = { "Andriy","Oleg","Petro","Inna","Pavlo" };
//	string colors[5] = { "A","AA","AAA","AAAA","AAAAA" };
//	cout << "Max = " << getMax(colors, 5) << endl;
	long* long_arr = new long[4];
	char* char_arr = new char[4];
	for (int i = 0; i < 4; i++)
	{
		long_arr[i] = i + 1;
		cout << long_arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		char_arr[i] = i + 'a';
		cout << char_arr[i] << " ";
	}
	int a = 5;
	MyClass<long,string> cl1(long_arr, "Class with long arr");
	MyClass<char,string> cl2(char_arr, "Class with char arr");
	//MyClass<char,Point> cl3(char_arr, Point());
	//MyClass<char,int> cl4(char_arr, a);
	cl1.Print();
	cl2.Print();
	//cl3.Print();
	//cl4.Print();

	/*delete[]long_arr;
	delete[]char_arr;*/
}

