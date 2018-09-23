#include <iostream>
#include <cassert>

#include "Source/Set.h"
#include "Source/Cell.h"
#include "Source/Iterator.h"
//#include "Source/LinkedList.h"

#include "Source/Set.h"

using namespace std;
int main() {
    cout << "Hello, Set!" << endl;

    Set s{1}, t{2};

    s.Read(cin);
    t.Read(cin);

    cout << endl;
    cout << "s = ";
    s.Write(cout);

    cout << endl << "t = ";
    t.Write(cout);
    cout << endl << endl;

    cout << "union: ";
    UnionSet(s, t).Write(cout);

    return 0;
}