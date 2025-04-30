#pragma once
#include "Book.h"
class Library
{
	string name;
	Book* books;
	int countBook;
public:
	Library();
	Library(string name);
	Library(const Library & other)
	{
		this->name = other.name;
		this->books = new Book[other.countBook];
		for (int i = 0; i < other.countBook; i++)
		{
			this->books[i] = other.books[i];
		}
		this->countBook = other.countBook;
	}
	Library(Library&& other)
	{
		name = other.name;	
		countBook = other.countBook;
		books = other.books;
		other.books = nullptr;
	}
	Library operator =(const Library& other)
	{
		this->name = other.name;

		if (books != nullptr)
			delete[]books;
		this->books = new Book[other.countBook];
		for (int i = 0; i < other.countBook; i++)
		{
			this->books[i] = other.books[i];
		}
		this->countBook = other.countBook;
		return *this;
	}
	void AddBook(Book book);
	void Show()const;
	~Library()
	{
		if (books != nullptr)
			delete[]books;
	}
};

