//
// Created by Yves Gingras on 18-04-18.
//

#include "Cell.h"

class Stack
{
public:
    Stack();
    void Push(int value);
    int Top();
    void Pop();
    int GetSize() const;
    bool Empty() const;

private:
    Cell *m_firstCellPtr;
    int m_size;

};
