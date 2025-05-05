#include <iostream>
using namespace std;

class Stack
{
    enum{EMPTY = -1};
    int* arr;
    int maxSize;
    int topIndex;
public:
    Stack() = delete;
    Stack(int size)//50
    {
        maxSize = size;
        arr = new int[maxSize];//50
        topIndex = EMPTY;
    }
    bool IsFull()const
    {
        return topIndex == maxSize-1;
    }
    bool IsEmpty()const
    {
        return topIndex == EMPTY;
    }
    bool Push(int elem)
    {
        if (!IsFull())
        {
            arr[++topIndex] = elem;
            return true;
        }
        return false;
    }
	int Pop()
	{
		if (!IsEmpty())
		{
			return arr[topIndex--];
		}
	}
	int GetCount()const
	{
		return topIndex + 1;
	}
	void Clear()
	{
		topIndex = EMPTY;
	}
	int Peek()const
	{
		if (!IsEmpty())
		{
			return arr[topIndex];
		}
	}
	void Print()const
	{
		for (int i = 0; i <= topIndex; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	~Stack()
	{
		if (arr != nullptr)
			delete[]arr;
	}

};

int main()
{
	Stack st(15);
	for (int i = 0; i < 10; i++)
	{
		st.Push(rand() % 100);
	}
	st.Print();
	cout << "Count : " << st.GetCount() << endl;

	while (!st.IsEmpty())
	{
		cout << "Element : " << st.Pop() << endl;
	}
	cout << "Count : " << st.GetCount() << endl;
}

