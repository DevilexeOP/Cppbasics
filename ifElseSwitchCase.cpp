#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    // Using if else else-if else ladder
    int age;
    cout << "Enter your age to check your eligiblity " << endl;
    cin >> age;
    if ((age >= 17) && (age > 0))
    {
        cout << "You are eligible for Drinks" << endl;
    }
    else if (age < 1)
    {
        cout << "You are not born" << endl;
    }
    else
    {
        cout << "go away and try again after a certain age" << endl;
    }

    // Using switch cases
    switch (age)
    {
    case 19: // switch case uses : not ;
        cout << "You are eligible for Drinks : switch cases" << endl;
        break;

    default:
        cout << "You are not eligible for Drinks : Switch cases" << endl;
        break;
    }

    return 0;
}
