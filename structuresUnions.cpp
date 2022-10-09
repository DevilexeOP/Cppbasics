#include <iostream>
using namespace std;

struct student
{
    int id;
    char favChar;
    float marks;
};

typedef struct teach
{
    int id;
    char favChar;
    float exp;
} tec;

union salary
{
    int salary;
    float expense;
};

int main()
{
    // Structure 1
    struct student devil;
    devil.id = 1;
    devil.favChar = 'D';
    devil.marks = 86;

    // Structure 2
    tec akash;
    akash.id = 2;

    // union
    union salary s1;
    s1.salary = 5463523;

    // enum
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    cout << "The value of student id : " << devil.id << endl;
    cout << "The value of teacher id : " << akash.id << endl;
    cout << "The value of student char : " << devil.favChar << endl;
    cout << "The value of student marks: " << devil.marks << endl;
    cout << "The salary is : " << s1.salary << endl;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    return 0;
}