#include <string>

using namespace std;

class Account {
    public:     //未定義為private
        Account(string id, string name, double balance);    //指定建設值(式) 與類別同名
        string id;
        string name;
        double balance;
};