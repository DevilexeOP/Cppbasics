#include <iostream>
using namespace std;

int glo = 88;
void sum()
{
    int a;
    cout << glo;
}

int main()
{
    int c = 45;
    int b = 100;
    cout << "Hello\n";
    cout << c + b;
    cout << c - b;
    sum();
    return 0;
}