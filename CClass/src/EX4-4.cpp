#include<iostream>

using namespace std;

int main()
{
    int sco;

    cout << "請輸入分數:" << endl;
    cin >> sco;

    switch (sco < 10)
    {
    case 10: case 9:
        cout << "A級" << endl;
        break;
    case 8:
        cout << "B級" << endl;
        break;
    case 7:
        cout << "C級" << endl;
        break;
    case 6:
        cout << "D級" << endl;
        break;
    case 5:
        cout << "E級" << endl;
        break;
    default:
        cout << "F級" << endl;
        break;
    }

    /*  當分數輸入有小數的過濾處理
    float sco;

    while(1):
        cout << "請輸入分數:" << endl;
        cin >> sco;

        if (0 >= sco && 100 <= sco)
        {
            cout << "此分數不合理" << endl;
        }
        else
        {
            sco = static_cast<int>sco
            switch (sco < 10)
            {
            case 10: case 9:
                cout << "A級" << endl;
                break;
            case 8:
                cout << "B級" << endl;
                break;
            case 7:
                cout << "C級" << endl;
                break;
            case 6:
                cout << "D級" << endl;
                break;
            case 5:
                cout << "E級" << endl;
                break;
            default:
                cout << "F級" << endl;
                break;
            }
            break;
        }
    */

    return 0;
}