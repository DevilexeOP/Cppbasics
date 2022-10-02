#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    // Constants in C++

    const int a = 34;
    cout << "this is and integer " << a << endl;

    // Maniplulating in C++

    int b = 55, c = 66;
    cout << "This is b and its value is " << setw(5) << b << endl;
    cout << "This is c and its value is " << setw(5) << c << endl;

    // Presedence in C++    //  !Same as Java
    int g = 88;
    cout << (g * 98 + 99);

    return 0;
}
