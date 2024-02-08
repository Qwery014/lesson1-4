#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int x;

    do {
        cout << "Enter an integer or the number '0' to finish: " << endl;
        cin >> x;

        sum += x;
    } while (x != 0);

    cout << "Amount: " << sum << endl;

    return 0;
}