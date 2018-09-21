#include <iostream>
#include "Source/LinkedList.h"

using namespace std;


int main() {
    cout << "\nHello, List!" << endl;

    LinkedList list;
    list.Add(1);
    list.Add(2);
    list.Add(3);
    list.Add(4);
    list.Add(5);

    list.Write(cout);
    cout << endl;

    {
        auto iterator = list.First();
        while (iterator.HasNext()) {
            cout << iterator.GetValue() << " ";
            iterator.Next();
        }
        cout << endl;
    }

    {
        auto iterator = list.Last();
        while (iterator.HasPrevious()) {
            cout << iterator.GetValue() << " ";
            iterator.Previous();
        }
        cout << endl;
    }
    return 0;
}