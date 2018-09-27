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


    void Add(double value);


    void Add(const LinkedList& list);


    void Assign(const LinkedList& list);


    void Clear ();


    bool Equal (const LinkedList& list) const ;


    void Erase(const Iterator& erasePosition);
    bool Empty() const {
        return mSize == 0;
    }


    bool Find(double value, Iterator& findIterator);

    Iterator First() const {return Iterator(mFirstCellPtr);}


    void Insert(const Iterator& insertPosition, double value);


    void Insert(const Iterator& insertPosition, const LinkedList& list);

    Iterator Last() const {
        return Iterator(mLastCellPtr);
    }


    bool NotEqual (const LinkedList& list) const;


    void Read(istream& inStream);


    void Remove(const Iterator& firstPosition, const Iterator& lastPosition = Iterator(nullptr));

    int Size() const{return mSize;}


    void Write(ostream& outStream);
};

#endif //LIST_LINKEDLIST_H
