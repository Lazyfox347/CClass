#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int num[] = {30, 12, 55, 31, 98, 11};

    sort(begin(num), end(num));
    for (auto n: num)
    {
        cout << n << " ";
    }
    cout << endl;

    cout << "請輸入搜尋值:";
    int search = 0;
    cin >> search;

    int* addr = find(begin(num), end(num), search);
    cout << (addr != end(num) ? "找到" : "未找到")
         << "搜尋值"
         << endl;

    reverse(begin(num), end(num));
    for(auto n: num)
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}