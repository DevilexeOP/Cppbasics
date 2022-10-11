#include <iostream>
using namespace std;

// Function prototype
int sum(int a, int b); // accepted
// int sum(int a, b); -- err
// int sum(int , int ); // accepted
void hey(void);

int main()
{
    int num1, num2;
    hey();
    cout << "Enter num1:" << endl;
    cin >> num1;
    cout << "Enter num2:" << endl;
    cin >> num2;
    cout << "The sum is : " << sum(num1, num2);
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void hey()
{

    cout << "\nHey" << endl;
}
