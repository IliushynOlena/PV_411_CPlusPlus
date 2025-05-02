#include <iostream>
using namespace std;

class Array
{
	int* arr;
	int size;
public:
	Array()
	{
		arr = nullptr;
		size = 0;
	}
	explicit Array(int size)
	{
		this->size = size;
		arr = new int[size] {};
		/*for (int i = 0; i < size; i++)
		{
			arr[i] = 0;
		}*/
	}
	Array(const initializer_list<int> &list)
	{
		this->size = list.size();
		arr = new int[size];
		/*for (int i = 0; i < size; i++)
		{
			arr[i] = list[i];
		}*/
		///foreach
		int i = 0;
		for (int elem : list)
		{
			arr[i] = elem;
			i++;
		}
	}
	void Fill(const initializer_list<int>& list)
	{
		if (arr != nullptr)
			delete[]arr;
		this->size = list.size();//10 --> 3
		arr = new int[size];
		int i = 0;
		for (int elem : list)
		{
			arr[i] = elem;
			i++;
		}
	}
	void Print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	~Array()
	{
		if (arr != nullptr)
			delete[]arr;
	}
};


int main()
{
	
	int stat_arr[] = { 1,2,3,4,5 ,8,9,7,5};
	int* dynam_arr = new int[5] {10, 11, 12, 13, 14};
		
	Array arr;
	arr.Print();

	/*Array arr2 = 10;
	arr2.Print();*/
	Array arr3 ({10, 11, 12, 13, 14,15,16,17,18,19});
	arr3.Print();
	arr3.Fill({ 1,2,3 });
	arr3.Print();


	delete[]dynam_arr;
}

