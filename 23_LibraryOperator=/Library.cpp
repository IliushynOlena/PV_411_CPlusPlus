#include "Library.h"

Library::Library()
{
	name = "no name";
	books = nullptr;
	countBook = 0;
}

Library::Library(string name)
{
	this->name = name;
	books = nullptr;
	countBook = 0;
}

void Library::AddBook(Book book)
{
	countBook++;
	Book* temp = new Book[countBook];
	for (int i = 0; i < countBook - 1; i++)
	{
		temp[i] = books[i];
	}
	temp[countBook - 1] = book;
	if (books != nullptr)
		delete[]books;
	books = temp;
}

void Library::Show() const
{
	cout << "Name : " << name << endl;
	cout << "Count books : " << countBook << endl;
	for (int i = 0; i < countBook; i++)
	{
		books[i].ShowInfo();
	}
}
