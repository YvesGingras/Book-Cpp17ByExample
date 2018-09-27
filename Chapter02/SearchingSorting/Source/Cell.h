//
// Created by Yves Gingras on 18-09-11.
//

#ifndef LIST_CELL_H
#define LIST_CELL_H
/**
 * @brief Represent a 'cell' of a linked list, which holds a value,
 * a pointer to the preceding cell and one the next cell.
 */
class Cell
{
private:
    Cell(double value, Cell *previous, Cell *next); ///< Exceptionally, constructor is private.
    friend class LinkedList; ///< As 'friend' so that it can be instantiated also by LinkedList class.

    double mValue;
    Cell *mPrevious;
    Cell *mNext;

public:
    double GetValue() const {return mValue;}
    void SetValue(double value) {mValue = value;}

    Cell *GetPrevious() const {return mPrevious;}
    void SetPrevious(Cell *previous) {Cell::mPrevious = previous;}

    Cell *GetNext() const {return mNext;}
    void SetNext(Cell *GetNext) {Cell::mNext = GetNext;}
};
#endif //LIST_CELL_H
