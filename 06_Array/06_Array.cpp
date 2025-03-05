#include <iostream>
using namespace std;

int main()
{

    //Помилка на етапі компіляції
    /*int a = 10
        cout << a << endl;*/

    //Помилка на етапі виконання
    //F10 - start debuger line by line
    //int a = 0, b = 0;
    //cout << "Enter number a : ";
    //cin >> a;
    //cout << "Enter number b : ";
    //cin >> b;
    ////F5 - start debuger and stop point
    //float c = (float)a / b;
    //cout << "Result = " << c << endl;


    //for (int i = 0; i < 333; i++)
    //{
    //    cout << i << endl;
    //}
    /*
    //Масив — це набір однотипних даних, об'єднаний загальним ім'ям.
    
    int train[3];
    train[0] = 4;
    train[1] = 5;
    train[2] = 1;
    cout << train[0] << endl;
    cout << train[1] << endl;
    cout << train[2] << endl;


    const int size = 12;
    int marks[size];
    marks[0] = 8;
    marks[1] = 10;
    marks[2] = 6;
    marks[3] = 4;
    marks[4] = 12;
    marks[5] = 12;
    marks[6] = 12;
    marks[7] = 12;
    marks[8] = 12;
    marks[9] = 12;
    marks[10] = 12;
    marks[11] = 11;
    int number;
    cout << "Enter number of mark : ";
    cin >> number;
    cout << "Marks is " << marks[number-1] << endl;

    /*for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }*/
    /*
    int arr1[5];

    //empty array
    const int size = 5;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Перший спосіб — ініціалізація при створенні.
    int arr2[size] = { 1,2,3,4,5};
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int arr3[]= { 5,8,7,9,3,6,12,45,69 };
    //cout << arr3;
    for (int i = 0; i < 9; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    int arr4[size] = { 1,2};
    for (int i = 0; i < size; i++)
    {
        cout << arr4[i] << " ";
    }
    cout << endl;

    int arr5[size] {};
    for (int i = 0; i < size; i++)
    {
        cout << arr5[i] << " ";
    }
    cout << endl;

    //Другий спосіб — ініціалізація масиву за допомогою  циклу.
    const int SIZE = 10;
    int arr6[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter " << i + 1 << " element : ";
        cin >> arr6[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr6[i] << " ";
    }
    cout << endl;
    */

        //Написати програму, яка знаходить суму всіх від'ємних
        //значень у масиві.
        //Написати програму, яка знаходить мінімальне й мак -
        //симальне значення в масиві і виводить їх на екран.
    int summa = 0;
  
    const int size = 10;
    //int arr[size] = { -5,8,7,9,-23,-4,21,3,6,9 };
    int arr[size] = { 5,8,7,9,23,4,21,3,6,9 };
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        if (arr[i] < 0)
        {
            summa += arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << endl;
    cout << "Summa negative elements = " << summa << endl;
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;






}

