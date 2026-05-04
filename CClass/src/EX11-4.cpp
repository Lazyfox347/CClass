#include<iostream>

using namespace std;

template <typename T, int L>
void printALL(T (*arr)[L])
{
    for( auto them: *arr)
    {
        cout << them << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2};
    int arr2[] = {3, 4, 5};

    printALL(&arr1);
    printALL(&arr2);

    return 0;
}

/*
template <typename T>
void printALL(T &arr)
{
    for( auto them: arr)
    {
        cout << them << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2};
    int arr2[] = {3, 4, 5};

    printALL(arr1);
    printALL(arr2);

    return 0;
}
*/