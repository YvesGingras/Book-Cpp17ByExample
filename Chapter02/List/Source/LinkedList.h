//
// Created by Yves Gingras on 18-09-12.
//

#ifndef LIST_LINKEDLIST_H
#define LIST_LINKEDLIST_H

#include <iostream>
#include "Iterator.h"

using namespace std;

class LinkedList
{
    int mSize;
    Cell *mFirstCellPtr;
    Cell *mLastCellPtr;

public:
    LinkedList();
    LinkedList(const LinkedList& list);
    virtual ~LinkedList();

    /**
     * @brief Adding a value to the list, and thus, dynamically allocate a cell.
     * @param value
     */
    void Add(double value);

    /**
     * @brief Adding the values of an existing list to the current one.
     * @param list
     */
    void Add(const LinkedList& list);

    /**
     * @brief The assign method copies the given list into its own linked list.
     * @param list A LinkedList reference of the given list.
     */
    void Assign(const LinkedList& list);

    /**
     * @brief The clear method iterates through the linked list and deallocates every cell.
     */
    void Clear ();

    /**
     * @brief If two lists have the same size and all the values are the same, this method returns true.
     * In any other case, it returns false.
     * @param list
     * @return
     */
    bool Equal (const LinkedList& list) const ;

    /**
     * @brief Remove a unique cell from the list.
     * @param erasePosition
     */
    void Erase(const Iterator& erasePosition);
    bool Empty() const {
        return mSize == 0;
    }

    /**
     * @brief The find method iterates through the linked list,
     * and returns true when it has found the value or false otherwise.
     * @param value
     * @param findIterator
     * @return
     */
    bool Find(double value, Iterator& findIterator);

    Iterator First() const {return Iterator(mFirstCellPtr);}

    /**
     * @brief Inserting a value at a specific position in the current list.
     * @para≤m insertPosition
     * @param value
     */
    void Insert(const Iterator& insertPosition, double value);

    /**
     * @brief Inserting the whole content (all values) of a  given list, into the current one.
     * @param insertPosition
     * @param list
     */
    void Insert(const Iterator& insertPosition, const LinkedList& list);

    Iterator Last() const {
        return Iterator(mLastCellPtr);
    }

    /**
     * @brief Determine whether two lists are not equal.
     * @param list
     * @return
     */
    bool NotEqual (const LinkedList& list) const;

    /**
     * @brief Reading a list from a stream, and adding its values to the current list.
     * @param inStream
     */
    void Read(istream& inStream);

    /**
     * @brief Removes a range of cells from the list.
     * @param firstPosition
     * @param lastPosition
     */
    void Remove(const Iterator& firstPosition, const Iterator& lastPosition = Iterator(nullptr));

    int Size() const{return mSize;}

    /** Sendig the content of the current list to a stream.
     * @brief
     * @param outStream
     */
    void Write(ostream& outStream);
};

#endif //LIST_LINKEDLIST_H
