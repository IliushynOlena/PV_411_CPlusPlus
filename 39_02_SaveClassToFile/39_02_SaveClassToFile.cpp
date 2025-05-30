
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Animal
{
	string name;
	string type;
	int age;
	float weight;
public:
	Animal() :name("none"), type("none"), age(0), weight(0) {}
	Animal(string n, string t, int a, float w) :name(n), type(t), age(a), weight(w) {}
	void Show()const
	{
		cout << "Name : " << name << endl;
		cout << "Type : " << type << endl;
		cout << "Age : " << age << endl;
		cout << "Weight : " << weight << endl;
	}
	void Move()const;
	friend ofstream&operator << (ofstream& out, const Animal& animal);
	friend ifstream& operator >> (ifstream& in,  Animal& an);
};
void Animal::Move() const
{
	cout << "I am moving............" << endl;
}
ofstream& operator << (ofstream& out, const Animal& animal)
{
	out << animal.name << " " << animal.type << " " << animal.age << " " << animal.weight;
	return out;
}
ifstream& operator >> (ifstream& in,  Animal& animal)
{
	in >> animal.name >> animal.type >> animal.age >> animal.weight;
	return in;
}
class Zoo
{
	string name;
	Animal* animals;
	int countAnimals;
public:
	Zoo() :name("no name"), animals(nullptr), countAnimals(0) {}
	Zoo(string name) :name(name), animals(nullptr), countAnimals(0) {}
	void AddAnimal(Animal an)
	{
		countAnimals++;
		Animal* temp = new Animal[countAnimals];
		for (int i = 0; i < countAnimals-1; i++)
		{
			temp[i] = animals[i];
		}
		temp[countAnimals - 1] = an;
		delete[]animals;
		animals = temp;
	}
	~Zoo()
	{
		if (animals != nullptr)
			delete[]animals;
	}
	void ShowZoo()const
	{
		cout << "===============" << name << "================" << endl;
		for (int i = 0; i < countAnimals; i++)
		{
			animals[i].Show();
			cout << endl;
		}
	}
	void SaveToFile()
	{
		ofstream out("Zoo.txt", ios_base::out);
		out << name << endl;
		out << countAnimals << endl;
		for (int i = 0; i < countAnimals; i++)
		{
			out << animals[i] <<endl;
		}
		out.close();
		cout << "Save to file" << endl;
	}
	void ReadFromFile()
	{
		ifstream in("Zoo.txt", ios_base::in);
		getline(in, name); //in >> name;
		in >> countAnimals;
		animals = new Animal[countAnimals];
		for (int i = 0; i < countAnimals; i++)
		{
			in >> animals[i];
		}
		in.close();
	}
	void BinarySave()
	{
		ofstream out("BinaryZoo.bin", ios_base::out | ios_base::binary);
		out.write((char*)&name, sizeof(name));
		out.write((char*)&countAnimals, sizeof(countAnimals));
		for (int i = 0; i < countAnimals; i++)
		{
		  out.write((char*)&animals[i], sizeof(animals[i]));
		}
		out.close();
		cout << "Save to file" << endl;
	}
	void BinaryRead()
	{
		ifstream in("BinaryZoo.bin",  ios_base::binary);
		in.read((char*)&name, sizeof(name));
		in.read((char*)&countAnimals, sizeof(countAnimals));
		animals = new Animal[countAnimals];
		for (int i = 0; i < countAnimals; i++)
		{
		   in.read((char*)&animals[i], sizeof(animals[i]));

		}
		in.close();
	}

};

int main()
{
	
	/*Animal cat("Andgelo", "House pet", 4, 5);
	cat.Show();
	Zoo zoo("Rivne zoo");
	zoo.AddAnimal(cat);
	zoo.AddAnimal(Animal("Dolphin","mammal",5,300));
	zoo.AddAnimal(Animal("Elephant","herbivorous",2,850));
	zoo.AddAnimal(Animal("Turtle","predator",100,250));
	zoo.AddAnimal(Animal("Lion","predator",7,150));
	zoo.ShowZoo();
	zoo.BinarySave();*/
	//zoo.SaveToFile();
	Zoo read;
	//read.ReadFromFile();
	read.BinaryRead();
	read.ShowZoo();

    
}


