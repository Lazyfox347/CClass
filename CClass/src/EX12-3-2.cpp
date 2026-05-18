#include <iostream>

using namespace std;

//定義函式型態
typedef bool(*CMP)(int, int);
/* 較直覺
using CMP = (*)(int, int);
*/

void sort(int*, int, CMP);

int main() {
    int num[] = {3, 5, 1, 6, 9};

    //呼叫sort
    sort(num, 5, ascending) {
        for(auto n: num) {
            cout << n << " ";
        }
        cout << endl;
    }

    sort(num, 5, descending) {
        for(auto n: num) {
            cout << n << " ";
        }
        cout << endl;
    }

    return 0;
}

//swap 定義二元互換
void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

//sort 定義函式功能
void sort(int* arr, int length, CMP compare) {
    for(int lock = 1, i = 0; i < length -1 && lock == 1; i++) {
        lock = 0;   //鎖定外迴圈
        for(j = 0; j < length - i - 1; j++) {
            if(compare(arr[j + 1], arr[j])) {   //用compare獲得升降冪需求
                swap(arr[j + 1], arr[j]);   //呼叫swap
                lock = 1;   //互換成功
            }
        }
    }
}

//定義升降冪
bool ascending(int a, int b) {
    return a < b;
}

bool descneding(int a, int b) {
    return a > b;
}