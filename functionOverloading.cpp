#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Using fucntion with 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using fucntion with 3 arguments" << endl;
    return a + b + c;
}

// Calculate Volume of Cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// Calculate Volume of Cuboid
int volume(int a)
{
    return (a * a * a);
}

// Rectangular Box
int volume(int l, int b, int h)
{
    return (l * b * h);
    
}

int main()
{

    cout << "The sum of 3 and 8 is : " << sum(3, 8) << endl;
    cout << "The sum of 3 and 8 is : " << sum(3, 8, 19) << endl;
    cout << "THe volume of cylinder is :" << volume(3, 5) << endl;
    cout << "THe volume of cuboid is : " << volume(3) << endl;
    cout << "THe volume of rectangular box is :" << volume(4, 5, 6) << endl;

    return 0;
}