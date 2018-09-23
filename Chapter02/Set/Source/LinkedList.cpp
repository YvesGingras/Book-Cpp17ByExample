//
// Created by Yves Gingras on 18-09-12.
//

#include "LinkedList.h"


//public
/*Constructors/Destructor*/
LinkedList::LinkedList()
    :mSize(0), mFirstCellPtr(nullptr),mLastCellPtr(nullptr) {
    //Empty
}

LinkedList::LinkedList(const LinkedList& list) {
    Assign(list);
}

LinkedList::~LinkedList() {
    Clear();
}

/*methods*/
void LinkedList::Add(double value) {
    Cell *newCellPtr = new Cell(value, mLastCellPtr, nullptr);

    if (mFirstCellPtr == nullptr)
        mFirstCellPtr = newCellPtr;
    else
        mLastCellPtr->SetNext(newCellPtr);

    mLastCellPtr = newCellPtr;
    ++mSize;
}

void LinkedList::Add(const LinkedList& list) {
    Cell *listCellPtr = list.mFirstCellPtr;

    while (listCellPtr != nullptr) {
        double value = listCellPtr->GetValue();
        Cell *newCellPtr = new Cell(value, mLastCellPtr,nullptr);

        if (mFirstCellPtr == nullptr)
            mFirstCellPtr = newCellPtr;
        else
            mLastCellPtr->SetNext(newCellPtr);

        listCellPtr = listCellPtr->GetNext();
    }
    mSize += list.mSize;
}

void LinkedList::Assign(const LinkedList& list) {
    mSize = 0;
    mFirstCellPtr = nullptr;
    mLastCellPtr = nullptr;
    Cell *listCellPtr = list.mFirstCellPtr;
    Add(list);
}

void LinkedList::Clear() {
    Cell *currCellPtr = mFirstCellPtr;
    while (currCellPtr != nullptr) {
        Cell *deleteCellPtr = currCellPtr;
        currCellPtr = currCellPtr->GetNext();
        delete deleteCellPtr;
    }

    mFirstCellPtr = nullptr;
    mLastCellPtr = nullptr;
    mSize = 0;
}

bool LinkedList::Equal(const LinkedList& list) const {
    if (mSize != list.mSize)
        return false;

    Iterator thisIterator = First();
    Iterator listIterator = list.First();

    while (thisIterator.HasNext()) {
        if (thisIterator.GetValue() != listIterator.GetValue())
            return false;

        thisIterator.Next();
        listIterator.Next();
    }

    return true;
}

void LinkedList::Erase(const Iterator& erasePosition) {
    Remove(erasePosition,erasePosition);
}

bool LinkedList::Find(double value, Iterator& findIterator) {
    Iterator iterator = First();

    while (iterator.HasNext()) {
        if (value == iterator.GetValue()){
            findIterator = iterator;
            return true;
        }
        iterator.Next();
    }
    return false;
}

void LinkedList::Insert(const Iterator& insertPosition, double value) {
    Cell *insertCellPtr = insertPosition.mCellPtr;
    Cell *newCellPtr = new Cell(value,insertCellPtr->GetPrevious(),insertCellPtr);

    insertCellPtr->SetPrevious(newCellPtr);
    if (insertCellPtr == mFirstCellPtr)
        mFirstCellPtr = newCellPtr;
    else
        newCellPtr->GetPrevious()->SetNext(newCellPtr);

    ++mSize;
}

void LinkedList::Insert(const Iterator& insertPosition, const LinkedList& list) {
    Cell *insertCellPtr = insertPosition.mCellPtr;

    if (insertCellPtr == nullptr)
        Add(list);
    else {
        Cell *firstInsertCellPtr = nullptr;
        Cell *lastInsertCellPtr = nullptr;
        Cell *listCellPtr = list.mFirstCellPtr;

        while (listCellPtr != nullptr) {
            Cell *newCellPtr = new Cell(listCellPtr->GetValue(),
                                        lastInsertCellPtr,
                                        nullptr);

            if (firstInsertCellPtr == nullptr)
                firstInsertCellPtr = newCellPtr;
            else
                lastInsertCellPtr->SetNext(newCellPtr);

            lastInsertCellPtr = newCellPtr;
            listCellPtr = listCellPtr->GetNext();
        }

        if (firstInsertCellPtr != nullptr) {
            if (insertCellPtr->GetPrevious() != nullptr) {
                insertCellPtr->GetPrevious()->SetNext(firstInsertCellPtr);
                firstInsertCellPtr->SetPrevious(insertCellPtr->GetPrevious());
            } else
                mFirstCellPtr = firstInsertCellPtr;
        }

        if (lastInsertCellPtr != nullptr) {
            lastInsertCellPtr->SetNext(insertCellPtr);
            insertCellPtr->SetPrevious(lastInsertCellPtr);
        }

        mSize += list.mSize;
    }

}

bool LinkedList::NotEqual(const LinkedList& list) const {
    return !Equal(list);
}

void LinkedList::Remove(const Iterator& firstPosition, const Iterator& lastPosition /* = Iterator(nullptr) */) {
    auto firstCellPtr = firstPosition.mCellPtr;
    auto lastCellPtr = lastPosition.mCellPtr;

    lastCellPtr = lastCellPtr == nullptr ? mLastCellPtr : lastCellPtr;
    auto previousCellPtr = firstCellPtr->GetPrevious();
    auto nextCellPtr = lastCellPtr->GetNext();

    auto currCellPtr = firstCellPtr;
    while (currCellPtr != nextCellPtr) {
        auto deleteCellPtr = currCellPtr;
        currCellPtr = currCellPtr->GetNext();
        delete deleteCellPtr;
        --mSize;
    }

    if (previousCellPtr != nullptr)
        previousCellPtr->SetNext(nextCellPtr);
    else
        mFirstCellPtr = nextCellPtr;

    if (nextCellPtr != nullptr)
        nextCellPtr->SetPrevious(previousCellPtr);
    else
        mLastCellPtr = previousCellPtr;
}

void LinkedList::Read(istream& inStream) {
    int size;
    inStream >> size;

    auto count = 0;
    while (count < size) {
        double value;
        inStream >> value;
        Add(value);
        ++count;
    }
}

void LinkedList::Write(ostream& outStream) {
    outStream << "[";
    auto firstValue = true;

    auto iterator = First();
    while (iterator.HasNext()) {
        outStream << (firstValue ? "" : ",") << iterator.GetValue();
        firstValue = false;
        iterator.Next();
    }
    outStream << "]";
}


























