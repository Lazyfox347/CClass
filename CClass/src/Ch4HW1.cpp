#include<iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 9; ++i)
    {
        cout << i << "*1=" << i*1 << "\t";
        cout << i << "*2=" << i*2 << "\t";
        cout << i << "*3=" << i*3 << "\t";
        cout << i << "*4=" << i*4 << "\t";
        cout << i << "*5=" << i*5 << "\t";
        cout << i << "*6=" << i*6 << "\t";
        cout << i << "*7=" << i*7 << "\t";
        cout << i << "*8=" << i*8 << "\t";
        cout << i << "*9=" << i*9 << "\t" << endl;
    }

    return 0
}