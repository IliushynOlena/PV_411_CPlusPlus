#include <iostream>
#include <vector>

using namespace std;
void Print(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
class User{};
int main()
{
	vector<User> users;
   //vector stack queue map multymap set multyset string list
	vector<int> vect1;//empty size = 0;
	cout << "Size : " << vect1.size() << endl;
	cout << "capacity : " << vect1.capacity() << endl;
	vector<int> vect2(10);
	cout << "Size : " << vect2.size() << endl;
	cout << "capacity : " << vect2.capacity() << endl;
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;
	vector <int> v2({ 10,20,30,40,50,60});

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	v[0] = 15;
	v[2] = 33;
	v[9] = 99;

	/*v.begin();
	v.end();*/
	//readonly
	for (int elem : v)
	{
		cout << elem << " ";
	}
	cout << endl;
	//delete
	v.erase(v.begin());
	Print(v);
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;
	v.erase(v.begin()+2);
	Print(v);
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;
	v.erase(v.begin() + 2, v.end()-2);
	Print(v);
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;
	v.erase(v.end()-1);
	Print(v);
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;

	//insert
	v.insert(v.begin(), { 11,12,13,14,15 });
	Print(v);
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;
	v.insert(v.end(), 5, 88);
	Print(v);
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;
	v.insert(v.begin() + 2, 105);
	Print(v);
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;
	v.insert(v.begin(), v2.begin() + 2, v2.end());
	Print(v);
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;

	//add to the end
	v.push_back(444);
	v.push_back(444);
	v.push_back(444);
	v.push_back(444);
	Print(v);

	//delete from the end
	v.pop_back();
	Print(v);

	cout << "----------------------------" << endl;
	/*Print(v);
	Print(v2);
	v.swap(v2);
	Print(v);
	Print(v2);*/
	
	cout << "Show first element : " << v.front() << endl;
	Print(v);
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;
	v.resize(50);
	Print(v);
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;

	v.push_back(444);
	Print(v);
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;

	v.shrink_to_fit();
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;

	v.push_back(444);
	Print(v);
	cout << "Size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;
}

