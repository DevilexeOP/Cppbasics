#include <iostream>
using namespace std;

int c = 99;

int main()
{
    int a = 100;
    int b = 100;
    cout << a + b << endl;
    cout << "Global var " << ::c << endl;

    // Reference Variables
    float d = 9.8;
    float &g = d;
    cout << d << endl;
    cout << g << endl;

    // Typecasting
    float y = 9.344;
    cout << double(y) << endl;
    cout << (int)y << endl;

    return 0;
}