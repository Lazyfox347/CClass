#include<iostream>
#include<vector>

using namespace std;

template <typename T>
T sum(T first) {
    return first;
}

template <typename T, typename... Ts>
T sum(T first,Ts... params) {
    return first + sum(params...);
}

template <typename T>
T doubleIt(T t) {
    return t + t;
}

template <typename T, typename... Ts>
T doubleSum(T first,Ts... params) {
    return doubleIt(first) + sum(doubleIt(params)...);
}

int main() {
    cout << sum(1, 2) << endl;
    cout << sum(string("1"), string("2")) << endl;
    cout << doubleSum(1, 2) << endl;
    cout << doubleSum(string("1"), string("2")) << endl;

    return 0;
}
