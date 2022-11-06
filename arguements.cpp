#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // static int c = 0; // executes only once
    // c = c + 1; // Nxt time it runs , the value of c will be retained
    return a * b;
}

float mreceived(int currentMoney, float factor = 1.02)
{
    return currentMoney * factor;
}

int main()
{
    int a, b;
    cout << "Enter a and b: " << endl;
    cout << "value a :" << endl;
    cin >> a;
    cout << "value b :" << endl;
    cin >> b;
    cout << "Product a and b: " << product(a, b) << endl;
    cout << endl;
    int money = 250000;
    cout << "If you have " << money << "rs in your acc/ , you will recieve " << mreceived(money) << " after 1 year" << endl;
    cout << "For Nerds : If you have " << money << "rs in your acc/ , you will recieve " << mreceived(money, 1.2) << " after 1 year" << endl;

    return 0;

    // ! Note for arguements => the mandatory argument must be on the left & the default argument be on the right
}