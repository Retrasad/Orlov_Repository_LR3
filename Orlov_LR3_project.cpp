#include <iostream>
#include <cmath>
using namespace std;

double da()
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


int da1()
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


double veshx()
{
    double x;
    cout << "Введите вещественное число x: ";
    x = da();
    return x;
}


int naty()
{
    int y;
    cout << "Введите натуральное число y: " << endl;
    y = da1();
    if (y <= 0)
    {
        cout << "Число y должно быть больше 0." << endl;
        y = da1();
        return y;
    }
    else
    {
        return y;
    }
}


double okrugx(double x, int y)
{
    double del = pow(10, y);
    return round(x * del) / del;
}


double drobchast(double x)
{
    return x - (int)x;
}





void menu()
{
    double x = 0;
    int y = 0;
    char cont = 'y';
    while (cont == 'y' or cont == 'Y')
    {
        int nt;
        while (true)
        {
            cout << "Введите номер желаемого задания (1-4):" << endl;
            cout << "1. Ввод вещественного числа x. \n"; 
            cout << "2. Ввод натурального числа y. \n"; 
            cout << "3. Округление x до y разрядов. \n"; 
            cout << "4. Отбрасование целой части числа x. \n"; 
            nt = da1();
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
                x = veshx();
                cout << "x = " << x << endl;
                break;
            case 2:
                y = naty();
                cout << "y = " << y << endl;
                break;
            case 3:
            {
                double gem1 = okrugx(x, y);
                cout << "Округленное значение: " << gem1 << endl;
                break;
            }
            case 4:
                double gem2 = drobchast(x);
                cout << "Дробная часть: " << gem2 << endl;
                break;
        }
        cout << "Хотите запустить программу вновь? (y/n):" << endl;
        cin >> cont;
        cin.ignore(32767, '\n');
    }
    cout << "Программа завершена." << endl;
}



int main()
{
    menu();
    return 0;
}