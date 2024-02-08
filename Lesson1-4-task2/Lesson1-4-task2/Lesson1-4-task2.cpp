#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "rus");

    int sum = 0;
    int x;

    cout << "Введите целое число: \n";
    cin >> x;

    do {
        sum += x % 10;
        x /= 10;
    } while (x > 0);

    cout << "Сумма цифр: " << sum;

    return 0;
}