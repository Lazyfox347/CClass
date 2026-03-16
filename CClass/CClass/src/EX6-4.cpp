#include<iostream>

using namespace std;

int main()
{
    int n = 10;
    int *p = &n;

    cout << "n = " << n << endl
        << "*p = " << *p << endl;   //輸出*p儲存的位置的數值 也就是n
    
    *p = 20;

    cout << "n = " << n << endl
        << "*p = " << *p << endl;

    return 0;
}