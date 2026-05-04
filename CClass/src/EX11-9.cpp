#include<iostream>
#include<utility>

using namespace std;

void r(int &p)
{
    cout << p << endl;
}

void rr(int &&p)
{
    cout << p << endl;
}

template <typename F, typename T>
voit some(F, f, T &&t)
{
    f(std::forward<T>(t));
}

int main() {
    int x = 10;
    some(r, x);
    some(rr, 10);

    return 0;
}