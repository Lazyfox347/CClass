#include<iostream>

using namespace std;

int main(void) {    //在C++有無void差異不大但建議
    int n = 10;
    int &r = n;

    cout << "n:" << n << endl
        << "r:" << r << endl;   //儲存在r位址的資料

    r = 20; //更新在r位址的資料 也就是n

    cout << "n:" << n << endl
        << "r:" << r << endl;   

    return 0;
}