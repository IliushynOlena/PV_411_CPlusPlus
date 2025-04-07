#include <iostream>
using namespace std;

/*
struct  Player
{
    string name; 
    short age;
    int games;
    int goals;
};

void PrintPlayer(Player player)
{
    cout << "Name : " << player.name << endl;
    cout << "AGe : " << player.age << endl;
    cout << "Games : " << player.games << endl;
    cout << "Goals : " << player.goals << endl;
}
void InitPlayer(Player& player)
{
    cout << "Enter name : "; cin >> player.name;
    cout << "Enter age : "; cin >> player.age;
    player.games = 0;
    player.goals = 0;
}
void AddGameToPlayer(Player& player, int goals = 0)
{
    player.games++;
    player.goals += goals;
}
*/

// OOP  - private 
class Player
{
public:
    string name;
    short age;
    int games;
    int goals;
    void PrintPlayer()
    {
        cout << "Name : " << name << endl;
        cout << "AGe : " << age << endl;
        cout << "Games : " << games << endl;
        cout << "Goals : " << goals << endl;
    }
    void InitPlayer()
    {
        cout << "Enter name : "; cin >>name;
        cout << "Enter age : "; cin >> age;
        games = 0;
        goals = 0;
    }
    void AddGameToPlayer( int goals = 0)
    {
        this->goals += goals;
        games++;
    }

};

class Student
{
private:
    //data members. як змінні-члени класу.
    string name;
    string surname;
    int marks[3];
public:
    //member function.  функції-члени класу,  методи
    double getAverage()
    {
        double sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
        return sum / 3;
    }
    // set  --> мутаторами або модифікаторами,
    void setName(string name)
    {
        this->name = name;
     }
    void setSurname(string surname)
    {
        this->surname = surname;
    }
    void setMark(int mark, int index)
    {
        if (mark < 1 || mark > 12)
        {
            mark = 0;
        }
        marks[index] = mark;
    }
    // get називати аксесорами (accessors)або інспекторами(inspectors),
    string getName()
    {
        return name;
    }
    string getSurname()
    {
        return surname;
    }
    int getMark(int index)
    {
        return marks[index];
    }
};

int main()
{
    Student st;
  
  /*  st.name = "Oleg";
    st.surname = "Ivanchuk";
    st.marks[0] = 11;
    st.marks[1] = 12;
    st.marks[2] = 10;*/
    st.setName("Oleg");
    st.setSurname("Ivanchuk");
    st.setMark(12,0);
    st.setMark(12,1);
    st.setMark(12,2);



    //cout << st.name << " " << st.surname << " " << st.marks[0] << endl;
    cout << st.getName() << " " << st.getSurname() << " " << st.getMark(0) << endl;
    cout << "Average mark : " << st.getAverage() << endl;
  



    //int a = 5;
    //int a1 = 6;
    //int a2 = 58;
    //Player p;
   
    //p.InitPlayer();
    //p.PrintPlayer();
    //p.AddGameToPlayer();
    //p.PrintPlayer();
    //p.AddGameToPlayer(2);
    //p.PrintPlayer();
    //p.AddGameToPlayer(3);
    //p.PrintPlayer();

  

    //int a = 5;//variable 
    //int player[4] = { "Tom", 21, 5, 4 };
    // Player pl = { "Tom", 21, 5, 4 };// object
    //Player pl;// object
    //InitPlayer(pl);
    //PrintPlayer(pl);
    //AddGameToPlayer(pl);
    //PrintPlayer(pl);
    //AddGameToPlayer(pl,2);
    //PrintPlayer(pl);
    //AddGameToPlayer(pl,3);
    //PrintPlayer(pl);


    
}

