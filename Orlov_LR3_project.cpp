#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int da()
{
    int ntr;
    while (true) {
        cin >> ntr;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Похоже, ввод был ошибочным. Попробуйте ввести число ещё раз \n";
        }
        else {
            cin.clear();
            cin.ignore(32767, '\n');
            break;
        }
    }
    return ntr;
}

double da1()
{
    double ntr;
    while (true) {
        cin >> ntr;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Похоже, ввод был ошибочным. Попробуйте ввести число ещё раз \n";
        }
        else {
            cin.clear();
            cin.ignore(32767, '\n');
            break;
        }
    }
    return ntr;
}

double VeshX()
{

}

int NatY()
{

}

double OgrugXotY(double x, int y)
{

}

double OtbrX(double x)
{

}

void menu()
{
    char cont = 'y';
    while (cont == 'y' or cont == 'Y')
    {
        int nt;
        while (true)
        {
            cout << "Введите номер задания (1-4):" << endl;
            cout << "1. Ввести вещественное число x." << endl;
            cout << "2. Ввести натуральное число y." << endl;
            cout << "3. Округлить х до y разрядов." << endl;
            cout << "4. Отбросить целую часть от х."
            nt = da();
            if (nt)
            {
                if (nt >= 1 and nt <=4)
                {
                    break;
                }
                else
                {
                    cout << "ТАКОГО НЕТ! Выберите задание от 1 до 4." << endl;
                }
            }
            else
            {
                cout << "Ввод должен быть числом." << endl;
            }
        };
        switch (nt)
        {
            case 1:
                VeshX();
                break;
            case 2:
                NatY();
                break;
            case 3:
                OgrugXotY();
                break;
            case 4:
                OtbrX()
                break;
            default:
                cout << "ТАКОГО НЕТ! Выберите задание от 1 до 4." << endl;
        }
        cout << "Хотите запустить программу вновь? (y/n):" << endl;
        cin >> cont;
    }
    cout << "Программа завершена." << endl;
}




int main()
{
    menu();
    return 0;
}