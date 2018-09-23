//
// Created by Yves Gingras on 18-09-11.
//

#include "Cell.h"

Cell::Cell(double value, Cell* previous, Cell* next)
    :mValue(value),mPrevious(previous),mNext(next) {
    //empty
}
