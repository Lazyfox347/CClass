#include<iostream>
#include<cstring>

using namespace std;

struct Student {
    int id;
    char name[50];
    int age;
};

int main(void) {
    struct Student student1;   //宣告有一個叫student1的struct結構體變數

    cout << "請輸入學號: ";
    cin >> student1.id;
    cout << "請輸入名字: ";
    cin >> student1.name;
    //Problem:char無法解決空白並且會判定結束 
    //Maybe solve ans for now:分兩段輸入後 輸出時再用空白連接
    cout << "請輸入年齡: ";
    cin >> student1.age;

    cout << student1.id << endl
        << student1.name << endl
        << student1.age << endl;
    
    return 0;
}
