#include <iostream>

using namespace std;

int main()
{
    float r = 0;
    const float pi = 3.14159;

    cout << "請輸入圓半徑:" << endl;
    cin >> r;
    cout << "圓面積為:" << pi * r * r << "\n" << "圓周長為:" << 2 * r * pi << endl;
}