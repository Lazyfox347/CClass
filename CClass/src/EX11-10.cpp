#include<iostream>

using namespace std;

template <typename... T>
void foo(T... params)
{
    cout << sizeof...(T) << " "
        << sizeof...(params) << endl;
}

int main() {
    foo(1);                     // 1 1
    foo("Hello World.");        // 1 1
    foo(1, "reagvefres", 3.14); // 3 3

    return 0;
}