#include<iostream>

using namespace std;

double area(double r, double pi = 3.14159);

int main()
{
    double r, pi;

    cout << "輸入半徑與PI: ";
    cin >> r >> pi;

    cout << "面積(自訂PI):" << area(r, pi) << endl
        << "(預設PI):" << area(r) << endl;

    return 0;
}

double area(double r, double pi)
{
    return r*r*pi;
}