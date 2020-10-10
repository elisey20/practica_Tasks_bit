#include <iostream>
#include <stdio.h>

using namespace std;

void task1()
{
    unsigned int n;
    cout << "TASK__1" << endl << "n = ";
    cin >> n;
    cout << (1 << n) << endl << endl;
}

void task2()
{
    unsigned long x;
    cout << "TASK__2" << endl << "x = ";
    cin >> x;
    cout << "Bit representation = ";
    for (int i = 31; i >= 0; i--) {
        if (x & (1 << i))
            cout << 1;
        else
            cout << 0;
    }
    cout << endl << endl;
}

void task3()
{
    unsigned long x;
    int amount = 0;
    cout << "TASK__3" << endl << "x = ";
    cin >> x;
    for (int i = 31; i >= 0; i--) {
        if (x & (1 << i))
            amount++;
    }

    cout << "Number of ones: " << amount << endl << endl;
}

void task4()
{
    unsigned long x;
    int pos = -1;
    cout << "TASK__4" << endl << "x = ";
    cin >> x;
    for (int i = 31; i >= 0; i--) {
        if (x & (1 << i)) {
            pos = i;
            break;
        }
    }
    if (pos == -1)
        cout << "Number is zero\n";
    else
        cout << "Bit position is " << pos;
    cout << endl << endl;
}

void task5()
{
    int n, i;
    cout << "TASK__5" << endl << "n = ";
    cin >> n;
    cout << "i = ";
    cin >> i;
    cout << (n | (1 << i)) << endl << endl;
}

void task6()
{
    int n, i;
    cout << "TASK__6" << endl << "n = ";
    cin >> n;
    cout << "i = ";
    cin >> i;
    cout << (n xor (1 << i)) << endl << endl;
}

void task7()
{
    int n, i;
    cout << "TASK__7" << endl << "n = ";
    cin >> n;
    cout << "i = ";
    cin >> i;
    cout << (n ^ (1 << i)) << endl << endl;
}

void task8()
{
    unsigned int n;
    cout << "TASK__8" << endl << "n = ";
    scanf_s("%d", &n);
    n = (unsigned char)((n << 1) | (n >> (8 - 1)));
    cout << n << endl << endl;
}

void task9()
{
    unsigned long x;
    int sum = 0;
    short xh = 0;
    cout << "TASK__9" << endl << "x = ";
    cin >> x;
    for (int i = 31; i >= 0; i--)
    {
        if (x & (1 << i)) {
            xh++;
        }
        else
        {
            if (xh > 1)
                sum += xh - 1;
            xh = 0;
        }
    }
    if (xh > 1)
        sum += xh - 1;
    cout << sum << endl << endl;
}

void task10()
{
    int n, i, j;
    cout << "TASK__10" << endl << "n = ";
    cin >> n;
    cout << "i = ";
    cin >> i;
    cout << "j = ";
    cin >> j;
    char a = (n >> (i - 1)) & 1;
    char b = (n >> (j - 1)) & 1;
    if (a == 1)
        n = (n | (1 << j));
    else
        n = (n xor (1 << j));
    if (b == 1)
        n = (n | (1 << i));
    else
        n = (n xor (1 << i));
    cout << n << endl << endl;
}

void task11()
{
    int n, i;
    cout << "TASK__11" << endl << "n = ";
    cin >> n;
    cout << "i = ";
    cin >> i;
    for (int j = i; j < 32; j++) {

    }
}

int main()
{
    /*task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    task8();
    task9();
    task10();*/
    task11();
    
    return 0;
}