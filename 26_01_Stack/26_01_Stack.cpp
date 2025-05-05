#include <iostream>
using namespace std;
class Test {
	//default c-tor
	//destructor
	//copy c-tor
	//move c-tor
	//operaotor =
};
class Stack {
	enum { EMPTY = -1, FULL = 9 };
	int arr[FULL + 1];//10
	int topIndex;//5   --- > topInndex = 5
	int* arr;//0123d  --> 0123d
public:
	//default
	//delete
	Stack()
	{
		topIndex = EMPTY;
	}
	Stack(const Stack& other) = delete;
	bool IsFull()const
	{
		return topIndex == FULL;
	}
	bool IsEmpty()const
	{
		return topIndex == EMPTY;
	}
	bool Push(int elem)
	{
		if (!IsFull())
		{
			/*topIndex++;
			arr[topIndex] = elem;*/
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
	~Stack() = default;//~Stack(){ }
};
int main()
{
	Stack st;
	st.Push(15);
	st.Push(7);
	st.Push(8);
	st.Push(12);
	st.Push(3);
	st.Push(1);
	st.Print();
	cout << "Lenght : " << st.GetCount() << endl;

	while (!st.IsEmpty())
	{
		cout << "Element : " << st.Pop() << endl;
	}

	//Stack copy(st);
	
	
	
	
	
}

