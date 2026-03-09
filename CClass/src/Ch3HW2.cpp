#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "請輸入整數:" << endl;
    cin >> n;
    
    if(n % 2 == 0)
    {
        cout << n << "為偶數" << endl;
    }
    else
    {
        cout << n << "為基數" << endl;
    }
}