#include <iostream>
#include "account.h"

void printAcct(Account *acct) {
    cout << "Account("
    << acct->id << ", "
    << acct->name << ", "
    << acct->balance << ")"
    << endl;
}
void printAcct(Account &acct) {
    printAcct(&acct);
}
int main() {
    //靜態資料
    /*
    Account acct1;
    acct1.id = "123-456-789";
    acct1.name = "Justin Lin";
    acct1.balance = 1000;
    printAcct(acct1);

    //動態(dynamic)資料
    Account *acct2 = new Account(); //可以選擇建構值 此處未指定 為預設
    acct2->id = "789-654-321";
    acct2->name = "Monica Huang";
    acct2->balance = 1000;
    printAcct(acct2);
    delete acct2;   //清除垃圾
    */
    
    Account *acct2 = new Account("789-654-321","Monica Huang",1000);
    printAcct(acct2);
    delete acct2;

    return 0;
}