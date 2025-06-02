#include <iostream>
#include <map>
#include <list>
#include <string>
using namespace std;

map<string, int>::iterator FindByValue(map<string, int>& clients, int value)
{

	for (map<string, int>::iterator i = clients.begin(); i != clients.end(); i++)
	{
		if (i->second == value)
		{
			return i;
		}
	}
	return clients.end();
}
struct ID
{
	int id;
	string name;
	ID() {}
	ID(int id, string name) :id(id), name(name) {}
	void Show()const
	{
		cout << "Id : " << id << "  Name : " << name << endl;
	}
	bool operator < (const ID& other)const
	{
		return this->id < other.id;
	}

};
class Dictionary
{
	map<string, list<string>> dic;
};
int main()
{
	map<string, list<string>> dic;

	string word = "run";
	list<string> meanings = { "bigtu", "pochatu","zapochatkevatu" };

	dic.insert(make_pair(word, meanings));
	dic.insert(make_pair("word", list<string>({ "slovo" })));
	dic.insert(make_pair("mind", list<string>({ "dumka","dusha","spogad" })));
	dic.insert(make_pair("bad", list<string>({ "poganuy","borg" })));

	for (string item : dic["bad"])
	{
		cout << item << " ";
	}
	cout << endl;
	for (auto elem : dic)
	{
		cout <<"Word : "<<  elem.first << " - ";
		for (string tr: elem.second)
		{
			cout << tr << " ";
		}
		cout << endl;
	}

	//////////////////// add translate
	string input = "";
	cout << "Enter word to add translatins: "; getline(cin, input);

	if (dic.find(input) == dic.end())
		cout << "Word not found!\n";
	else
	{
		string translate = "";
		do
		{
			cout << "Enter translate: ";
			getline(cin, translate);
			dic[input].push_back(translate);

		} while (!translate.empty());
	}

	for (string item : dic[input])
	{
		cout << item << " ";
	}


	////////////////////// check translate
	cout << "Enter word to translate: "; getline(cin, input);

	if (dic.find(input) == dic.end())
		cout << "Translate not found!\n";
	else
	{
		cout << "\tMeans:\n";
		for (string elem : dic[input])
			cout << elem << " ";
	}
	/*
	map<ID, int> m1;
	ID id1(1, "Taras");
	pair<ID, int> p1(id1, 15000);

	m1.insert(p1);

	m1.insert(make_pair(ID(2, "Olga"), 25000));
	m1.insert(make_pair(ID(3, "Anna"), 12000));
	m1.insert(make_pair(ID(7, "Vasia"), 7350));
	m1[ID(8, "Anna")] = 38000;

	for (auto i : m1)
	{
		i.first.Show();
		cout << "Value : " << i.second << endl;
		cout << "_________________________________" << endl;
	}
	map<string, int> m;

	m.insert(make_pair("Petro", 3));
	m.insert(make_pair("Yura", 11));
	m.insert(make_pair("Anna", 8));
	pair<string, int> p("Olga", 7);
	m.insert(p);

	for (auto el : m)
	{
		cout << "Key : " << el.first << ". Value : " << el.second << endl;
	}
	pair<map<string, int>::iterator, bool>  res = m.insert(make_pair("Inna", 9));
	if (res.second)
	{
		cout << "Added......" << endl;
	}
	else
	{
		cout << "Not added " << endl;
	}
	//auto res = m.insert(make_pair("Olga",9));
	cout << "-------------------------------------" << endl;
	for (auto el : m)
	{
		cout << "Key : " << el.first << ". Value : " << el.second << endl;
	}

	cout << "Value : " << m["Olga"] << endl;
	cout << "Value : " << m["Inna"] << endl;


	auto it = m.find("Olga");
	if (it == m.end())
		cout << "Not found" << endl;
	else
	{
		cout << "Found" << endl;
		cout << "Key : " << it->first << ". Value : " << it->second << endl;
		//it->first = "Lilia";//error
		it->second = 15;
		cout << "Key : " << it->first << ". Value : " << it->second << endl;
	}

	it = FindByValue(m, 9);
	if (it != m.end())
	{
		cout << "Key : " << it->first << " Value : " << it->second << endl;
	}

	if (it != m.end())
	{
		m.erase(it);
	}
	cout << "_______________________________________________" << endl;
	for (auto el : m)
	{
		cout << "Key : " << el.first << ". Value : " << el.second << endl;
	}
	cout << "_______________________________________________" << endl;

	m["Olga"] = 100;
	m["Kolya"] = 55;
	for (auto el : m)
	{
		cout << "Key : " << el.first << ". Value : " << el.second << endl;
	}

	*/

}

