#include <iostream>
using namespace std;

int main()
{
    int marks[] = {
        43,
        454,
        52,
        424,
        677,
        566,
        6565, 7524525

    };
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << "the value of marks " << i << " " << marks[i] << endl;
    }

    cout << "Using DoWhile" << endl;

    int i = 0;
    do
    {
        cout << "the value of marks " << i << " " << marks[i] << endl;
    } while (i < 6, i++);
}