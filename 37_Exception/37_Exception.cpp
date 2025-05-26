#include <iostream>
using namespace std;
class User{};

class List
{
private:
	int size;
	User* users;
public:
	List() :size(0) {}
	List(int size) :size(size) {}//10

	int GetFromPosition(int pos)// 2
	{
		//1 - code - collection is empty
		if (size == 0) return 1;
		//2 - code - out of range
		if (pos < 0 || pos > size) return 2;

		return rand() % 10;///0.....9
	}
};
float Divide(float a, float b)
{
	float res = 0;
	//exception ex("Divide by zero");
	if (b == 0)
	{
		cout << "Can't divide by zero ...." << endl;
		//throw ex;
		throw exception("Divide by zero!");
	}
	if (b == 1)
	{
		throw 404;
	}
	if (b == 5)
	{
		throw "Divide by 5";
	}
	else
	{
		res = a / b;
		cout << "Result = " << res << endl;
		return res;
	}
	
}
class PasswordInvalidException: public exception
{
public:
	PasswordInvalidException(const char * mess):exception(mess){}
};

class PasswordSmallException : public exception
{
	int lenght;
public:
	PasswordSmallException(const char* mess, int length) :lenght(lenght), exception(mess) {}

	void Message()
	{
		cout << what() << endl;
		cout << "Actual length : " << lenght << endl;
	}

};
void Login(const char* login, const char* password)
{
	if (strlen(password) < 6)
		throw PasswordSmallException( "To small password",strlen(password));
	if (!isalpha(login[0]) || !isupper(login[0]))
		throw exception("login is invalid");
	if (!isalpha(password[0]) || !islower(password[0]))
		throw PasswordInvalidException("Passworrd invalid");

	cout << "Loading..........." << endl;
}

int main()
{
	char login[100];
	char password[100];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter login : "; cin >> login;
		cout << "Enter password : "; cin >> password;

	
		try
		{
			Login(login, password);
		}	
		catch (PasswordInvalidException ex)
		{
			cout << "Password must start with low letter" << endl;
			cout << ex.what() << endl;
		}
		catch (PasswordSmallException ex)
		{
			cout << "Password length must be more than >= 6" << endl;
			ex.Message();
		}
		catch (exception ex)
		{
			cout << ex.what() << endl;
		}
		
		
	}
	//try catch throw
	//float a, b;
	//cout << "Enter two number : ";
	//cin >> a >> b;
	//
	//try
	//{
	//	float res = Divide(a, b);
	//	cout << "Result in main : " << res << endl;
	//}
	//catch (exception ex)
	//{
	//	cout << ex.what() << endl;
	//}
	//catch (int ex)
	//{
	//	cout << "Error int..........." << endl;
	//	cout << ex << endl;
	//}
	//catch (const char* ex)
	//{
	//	cout << "Error string..........." << endl;
	//	cout << ex << endl;
	//}
	//catch (...)
	//{
	//	cout << "Unknown exception" << endl;
	//}
	//cout << "Continue......" << endl;
	//cout << "Continue......" << endl;
	//cout << "Continue......" << endl;
	//cout << "Continue......" << endl;
	//cout << "Continue......" << endl;



}

