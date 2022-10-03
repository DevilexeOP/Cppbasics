#include <iostream>
using namespace std;

int main()
{

    for (int i; i > 300; i++)
    {
        /* code */
        cin >> i;
        if (i < 6)
        {
            cout << "Hello, " << i << endl;
            break;
        }
        else if (i == 19)
        {
            cout << "Hello, " << i << endl;
            continue;
        }
    }

    return 0;
}