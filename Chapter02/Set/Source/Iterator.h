//
// Created by Yves Gingras on 18-09-11.
//

#ifndef LIST_ITERATOR_H
#define LIST_ITERATOR_H

#include "Cell.h"

class Iterator
{
private:
    explicit Iterator(Cell *cellPtr);
    friend class LinkedList;
    Cell* mCellPtr; /** < Blabla*/

public:
    Iterator();
    Iterator(const Iterator& iterator);

    double GetValue() {return mCellPtr->GetValue();}
    bool HasNext() const {return mCellPtr != nullptr;}
    bool HasPrevious() const {return mCellPtr != nullptr;}
    void Next() {mCellPtr = mCellPtr->GetNext();}
    void Previous() {mCellPtr = mCellPtr->GetPrevious();}
    void SetValue(double value) {mCellPtr->SetValue(value);}
};

#endif //LIST_ITERATOR_H
