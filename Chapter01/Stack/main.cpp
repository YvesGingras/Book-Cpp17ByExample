#include <iostream>
#include <string>
using namespace std;

//#include "Cell.h"
#include "Stack.h"

int main() {
    std::cout << "Hello, Stack!" << std::endl << endl;


    Stack stack;
    stack.Push(5);
    stack.Push(6);
    stack.Push(7);
    stack.Push(8);

    cout << "top " << stack.Top() << ", size " << stack.GetSize()
         << ", empty " << (stack.Empty() ? "true" : "false") << endl;

    stack.Pop();
    stack.Pop();
    stack.Push(9);

    cout << boolalpha;
    cout << "top " << stack.Top() << ", size " << stack.GetSize()
         << ", empty " << stack.Empty() << endl;

    return 0;
}