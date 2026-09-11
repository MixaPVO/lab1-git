// Лабораторная работа № 1. Вариант 63.
// Выполнил: Ретивых М. С., группа ПИ-51.
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

// ===== Расчётные функции варианта =====
// Площадь прямоугольника со сторонами a и b
double kmToMiles(double km)
{
    return km * 0.621371;
}

double milesToKm(double mi)
{
    return mi * 1.609344;
}

// ===== Главная функция: меню =====
int main()
{
    SetConsoleOutputCP(65001); 
    int choice;
    double var;
    do
    {
        cout << "\n=== Вариант 63: километры <-> мили ===\n"
        << "Выберите пункт:\n"
        << "1)Перевести километры в мили\n"
        << "2)Перевести мили в километры\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Введите километры: ";
            cin >> var;
            cout << "Мили = " << kmToMiles(var) << endl;
            break;
        case 2:
            cout << "Введите мили: ";
            cin >> var;
            cout << "Километры = " << milesToKm(var) << endl;
        }
    } while (choice != 0);
    return 0;
}