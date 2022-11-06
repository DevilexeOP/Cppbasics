#include <iostream>
using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    // Factorial of a num
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1
    // 1! = 1
    // 2! = 2
    // n! = n* (n-1)
    int a;
    cout << "Enter a number to find factorial " << endl;
    cin >> a;
    cout << "The factorial of " << a << " is : " << factorial(a) << endl;

    int b;
    cout << "Enter a number to find fib series" << endl;
    cin >> b;
    cout << "The term in fib sequence at position " << b << " is :" << fib(b) << endl;

    return 0;
}