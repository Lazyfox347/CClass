//2026/3/2

#include <iostream>

using namespace std;

int main()
{
    cout << (1 + 2 * 3) << endl;
    cout << 1 + 2 + 3 / 4 << endl; //結果為3 但在3 / 4前加上(Float)
    cout << (1 + 2 + 3) / 4 << endl;

    //rand 亂數生成函式 0到99
    cout << rand() % 100 << endl;

    //% 可做循環計數
    int counter = 0;
    counter = (counter + 1) % 10;
    cout << counter << endl;
    counter = (counter + 1) % 10;
    cout << counter << endl;

    return 0;
}
