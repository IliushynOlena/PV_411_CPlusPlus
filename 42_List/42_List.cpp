#include <iostream>
#include <list>
using namespace std;

void Show(list<int>& l1, list<int>l2)
{
	cout << "List 1: ";
	list<int>::iterator iter;
	for ( iter = l1.begin(); iter != l1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	/*int a = 5;
	float b = 3.14;
	int f;
	auto c = 8;
	auto p = 7.14;*/


	cout << "List 2: ";
	for (auto iter = l2.begin(); iter != l2.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	cout << endl;
}
struct Book {
	string name;
	string author;
	int pages;
};
bool CompareBookByName(const Book& b1, const Book& b2)
{
	return b1.name < b2.name;
}
bool CompareBookByAuthor(const Book& b1, const Book& b2)
{
	return b1.author < b2.author;
}
bool CompareBookByPages(const Book& b1, const Book& b2)
{
	return b1.pages < b2.pages;
}
int main()
{
	list<Book> library;
	library.assign({
		Book{"Night","Gogol",789},
		Book{"Day","Taras",345},
		Book{"Evening","Franko",548}
		});
	cout << "Size : " << library.size() << endl;

	cout << "------------------- Original list : ---------------" << endl;
	for (Book b : library)
	{
		cout << b.name<<" "<< b.author<< " "<< b.pages << endl;
	}
	library.sort(CompareBookByName);
	cout << "------------------- Sorted by name list : ---------------" << endl;
	for (Book b : library)
	{
		cout << b.name << " " << b.author << " " << b.pages << endl;
	}

	library.sort(CompareBookByAuthor);
	cout << "------------------- Sorted by author list : ---------------" << endl;
	for (Book b : library)
	{
		cout << b.name << " " << b.author << " " << b.pages << endl;
	}

	library.sort(CompareBookByPages);
	cout << "------------------- Sorted by pages list : ---------------" << endl;
	for (Book b : library)
	{
		cout << b.name << " " << b.author << " " << b.pages << endl;
	}


	/*
    list<int> l1, l2;

	for (int i = 0; i < 10; i++)
	{
		l1.push_back(i); 
		l2.push_front(i);
	}
	Show(l1, l2);

	l1.assign({ 10,11,12,13,14 });
	Show(l1, l2);

	//l1.erase(l1.begin());
	auto it = l1.begin();
	it++;
	l1.erase(it);
	Show(l1, l2);

	l1.push_back(10);
	l1.push_back(10);
	l1.push_back(10);
	Show(l1, l2);
	l1.remove(10);
	Show(l1, l2);

	l1.insert(l1.begin(), 5, 77);
	Show(l1, l2);
	l1.insert(l1.end(),555);
	Show(l1, l2);
	l1.insert(l1.begin(), {1,2,3});
	Show(l1, l2);
	l1.insert(l1.end(), l2.begin(), l2.end());
	Show(l1, l2);

	//l1.resize(100);
	l1.resize(30,5);
	Show(l1, l2);

	l1.splice(l1.end(), l2, l2.begin());
	//l1.splice(l1.end(), l2, l2.begin(), l2.end());
	Show(l1, l2);

	l1.reverse();
	Show(l1, l2);

	l1.sort();
	l2.sort();
	Show(l1, l2);

	l1.merge(l2);
	Show(l1, l2);

	l1.unique();
	Show(l1, l2);

	l1.swap(l2);
	Show(l1, l2);
	*/

}

