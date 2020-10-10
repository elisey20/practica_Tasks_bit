#include <iostream>

using namespace std;

void task1()
{
    unsigned int n;
    cout << "TASK__1" << endl << "n = ";
    cin >> n;
    cout << (1 << n) << endl;
}

int main()
{
    task1();

    return 0;
}