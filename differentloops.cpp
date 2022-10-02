#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // for loop
    for (int i = 0; i < 7; i++)
    {
        /* code */
        cout << i << endl;
        i++;
    }

    // while loop
    int i;
    cout << "enter value for running while loop" << endl;
    cin >> i;
    while (i <= 9)
    {
        cout << "while loop - " << i << endl;
        i++;
    }

    // do while
    int e;
    cout << "enter value for running do- while loop :" << endl;
    cin >> e;
    do
    {
        cout << "this is a do While loop :" << e << endl;
        e++;
    } while (e < 9);

    return 0;
}
