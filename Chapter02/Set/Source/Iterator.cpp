//
// Created by Yves Gingras on 18-09-11.
//

#include "Iterator.h"

//Constructors
Iterator::Iterator()
    :mCellPtr(nullptr) {
}

Iterator::Iterator(Cell* cellPtr)
    : mCellPtr(cellPtr){
    //Empty
}

Iterator::Iterator(const Iterator& iterator)
    :mCellPtr(iterator.mCellPtr) {
    //empty
}
