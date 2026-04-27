#include<iostream>

using namespace std;

class IntLinkedList 
{
    class IntNode
    {
    public:
        IntNode(int value, IntNode *next) :  value(value), next(next) {} int value;
        IntNode *next;
    };
    
    IntNode *first = nullptr;

    public:
        IntLinkedList& append(int value);
        int get(int i);
};

IntLinkedList& IntLinkedList::append(int value)
{
    IntNode *node = new IntNode(value, nullptr);
    if(first == nullptr)
    {
        this -> first = node;
    }
    else
    {
        IntNode *last = this -> first;
        while (last -> next != nullptr)
        {
            last = last -> next;
        }
        last -> next = node;
    }
    return *this;
}

int IntLinkedList::get(int i)
{
    IntNode *last = this -> first;
    int count = 0;
    while (true)
    {
        if(count == i)
        {
            return last -> value;
        }
        last = last -> next;
        count++;
    }
}

int main() {
    IntLinkedList lt;

    lt.append(1).append(2).append(3);
    cout << lt.get(2) << endl;

    return 0;
}