#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	
	int x;

	cout << "Введите целое число: " << endl;
	cin >> x;

	for (int i = 1; i <= 10; i++) {
		cout << x << " x " << i << " = " << x * i << endl;
	}

	return 0;
}
