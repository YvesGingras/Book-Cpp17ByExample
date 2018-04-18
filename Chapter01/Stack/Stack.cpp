//
// Created by Yves Gingras on 18-04-18.
//
#include <cassert>
using namespace std;

#include "Stack.h"

Stack::Stack()
    : m_firstCellPtr(nullptr),
      m_size(0){
    /*Empty*/
};


void Stack::Push(int value) {
    m_firstCellPtr = new Cell(value,m_firstCellPtr);
    ++m_size;
}

int Stack::Top() {
    assert(!Empty());
    return m_firstCellPtr->GetValue();
}

void Stack::Pop() {
    assert(!Empty());
    Cell *deleteCellPtr = m_firstCellPtr;
    m_firstCellPtr = m_firstCellPtr->GetNext();
    delete deleteCellPtr;
    --m_size;
}

int Stack::GetSize() const {
    return m_size;
}

bool Stack::Empty() const {
    return m_firstCellPtr == nullptr;
}

