//
// Created by Yves Gingras on 18-09-22.
//

#include "Set.h"

/*Constructor/Destructor*/
Set::Set() = default;

Set::Set(double value) {
    Add(value);
}

Set::Set(const Set& set)
        : LinkedList(set) {
    // Empty
}

Set::~Set() = default;

/*Member methods*/
void Set::Assign(const Set& set) {
    Clear();
    Add(set);
}

bool Set::Equal(const Set& set) const {
    if (Size() != set.Size())
        return false;

    auto iterator = First();
    while (iterator.HasNext()) {
        if (!set.Exists(iterator.GetValue()))
            return false;

        iterator.Next();
    }
    return true;
}

bool Set::Exists(double value) const {
    auto iterator = First();

    while (iterator.HasNext()) {
        if (value == iterator.GetValue())
            return true;

        iterator.Next();
    }
    return false;
}

bool Set::Exists(const Set& set) const {
    auto iterator = set.First();

    while (iterator.HasNext()) {
        if (!Exists(iterator.GetValue()))
            return false;

        iterator.Next();
    }
    return false;
}

bool Set::Insert(double value) {
    if (!Exists(value)) {
        Add(value);
        return true;
    }
    return false;
}

bool Set::Insert(const Set& set) {
    auto inserted = false;
    auto iterator = set.First();

    while (iterator.HasNext()) {
        auto value = iterator.GetValue();
        if (Insert(value))
            inserted = true;
        iterator.Next();
    }

    return inserted;
}

bool Set::NotEqual(const Set& set) const {
    return !Equal(set);
}

void Set::Read(istream& inStream) {
    int size;
    inStream >> size;

    int count{0};
    while (count < size) {
        double value{};
        inStream >> value;
        Insert(value);
        ++count;
    }
}

bool Set::Remove(double value) {
    Iterator iterator{};

    if (iterator.HasNext()) {
        Erase(iterator);
        return true;
    }
    return false;
}

bool Set::Remove(const Set& set) {
    auto removed = false;
    auto iterator = set.First();

    while (iterator.HasNext()) {
        auto value =  iterator.GetValue();
        if (Remove(value))
            removed = true;

        iterator.Next();
    }

    return removed;
}

void Set::Write(ostream& outStream) {
    outStream << "{";
    auto firstValue = true;
    auto iterator{First()};

    while (iterator.HasNext()) {
        outStream << (firstValue ? "" : ",") << iterator.GetValue();
        firstValue = false;
        iterator.Next();
    }
    outStream << "}";
}

/*Friend functions*/
Set UnionSet(const Set& leftSet, const Set& rightSet) {
    Set result(leftSet);

    result.Insert(rightSet);
    return result;
}

Set Intersection(const Set& leftSet, const Set& rightSet) {
    Set result{
                Difference(
                            Difference(
                                        UnionSet(leftSet, rightSet),
                                        Difference(leftSet, rightSet)
                                        ),
                            Difference(rightSet, leftSet)
                            )
                };


    return result;
}

Set Difference(const Set& leftSet, const Set& rightSet) {
    Set result{leftSet};
    return result.Remove(rightSet);
}


























