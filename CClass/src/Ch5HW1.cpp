#include<iostream>

using namespace std;

int main()
{
    int score[] = {98, 34, 67, 72, 88};
    float t = 0;

    cout << "總分:";
    for (auto s: score)
    {
        t += s;
    }
    cout << t << "\n平均分數:" << t / 5 << endl;
}