#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return 0;
}

// Must add swapPointer otherwise it wont work
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 4, b = 5;
    cout << "the value of a is : " << a << " the value of b is : " << b << endl;
    swapPointer(&a, &b);
    cout << "the value of a is : " << a << " the value of b is : " << b << endl;
    return 0;
}