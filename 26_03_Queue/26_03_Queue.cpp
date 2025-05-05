#include <iostream>
#include <conio.h>
using namespace std;

class Queue {
	int* arr;
	int maxSize;
	int topIndex;
public:
	Queue() = default;
	Queue(int size)
	{
		this->maxSize = size;
		arr = new int[maxSize];
		topIndex = 0;
	}
	~Queue()
	{
		if (arr != nullptr)
			delete[]arr;
	}
	bool IsFull()const
	{
		return topIndex == maxSize ;
	}
	bool IsEmpty()const
	{
		return topIndex == 0;
	}
	void Enqueue(int elem)
	{
		if (!IsFull())
			arr[topIndex++] = elem;
	}
	/*int Dequeue()
	{
		if (!IsEmpty())
		{
			int first = arr[0];
			for (int i = 0; i < topIndex; i++)
			{
				arr[i] = arr[i + 1];
			}
			topIndex--;
			return first;
		}
	}*/
	int Dequeue()
	{
		if (!IsEmpty())
		{
			int first = arr[0];
			for (int i = 0; i < topIndex; i++)
			{
				arr[i] = arr[i + 1];
			}
			//topIndex--;
			arr[topIndex - 1] = first;
			return first;
		}
	}
	int GetCount()const
	{
		return topIndex;
	}
	void Clear()
	{
		topIndex = 0;
	}
	int Peek()const
	{
		if (!IsEmpty())
		{
			return arr[0];
		}
	}
	void Print()const
	{
		for (int i = 0; i < topIndex; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	Queue q(25);
	for (int i = 0; i < 10; i++)
	{
		q.Enqueue(rand() % 50);
	}
	q.Print();
	cout << "Length : " << q.GetCount() << endl;
	int num;
	cin >> num;
	while (!q.IsEmpty())
	{
		cout << "Element : " << q.Dequeue() << endl;
		_getch();
	}





}

