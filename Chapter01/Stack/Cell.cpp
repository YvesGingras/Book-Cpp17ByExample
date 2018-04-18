//
// Created by Yves Gingras on 18-04-18.
//

#include "Cell.h"

Cell::Cell(int value, Cell *next)
    : m_value(value),
      m_next(next) {
    /*Empty*/
}

int Cell::GetValue() const {
    return m_value;
}

Cell *Cell::GetNext() const {
    return m_next;
}

/*int Cell::GetValue() const {
    return 0;
}*/


