#include <iostream>
using namespace std;
//------------------------------
bool CheckPrimeNumber(int);
//------------------------------
int main()
{
    setlocale(LC_ALL, "ru");
    int number;
    cout << "Введите целое положительное число: ";
    cin >> number;

    if (CheckPrimeNumber(number))
        cout << number << " - это простое число\n";
    else
        cout << number << " - это не простое число\n";
    return 0;
}
//------------------------------
bool CheckPrimeNumber(int CheckNumber)
{
    bool flag = true;

    for(int i = 2; i <= CheckNumber/2; i++)
        if (CheckNumber % i == 0)
        {
            flag = false;
            break;
        }
    return flag;
}
