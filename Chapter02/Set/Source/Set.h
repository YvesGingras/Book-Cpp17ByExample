//
// Created by Yves Gingras on 18-09-22.
//

#ifndef SET_SET_H
#define SET_SET_H

#include "LinkedList.h"

class Set :  private LinkedList
{
    /*Friend functions*/
    /**
     * @brief Creates a new set concatenated from two given set.`
     * @param leftSet
     * @param rightSet
     * @return A new set.
     */
    friend Set UnionSet(const Set& leftSet, const Set& rightSet);
    friend Set Intersection(const Set& leftSet, const Set& rightSet);
    friend Set Difference(const Set& leftSet, const Set& rightSet);

public:
    /*Constructor/Destructor*/
    Set();

    Set(double value);

    Set(const Set& set);
    ~Set() override;

    /*Methods*/
    /**
     * @brief Clears the current set, and adds the given set to it.
     * @param set
     */
    void Assign(const Set& set);

    bool Empty() const { return LinkedList::Empty();} /*Should not need to 'redeclare' ??*/

    /**
     * @brief Two sets are equal if they have the same size and if all
     * values of one is present in the other, and  vice versa.
     * @param set
     * @return
     */
    bool Equal(const Set& set) const;

    /**
     * @brief Using the iterator of 'LinkedList' to iterate through
     * the set in search of the given value.
     * @param value
     * @return true if the given value is found, false otherwise.
     */
    bool Exists(double value) const;

    /**
     * @brief Iterate through the given set to check if all
     * of its values are present in the current set.
     * @param set
     * @return True if all the values are present, false otherwise.
     */
    bool Exists(const Set& set) const;

	/*This method is 'hiding' its equivalent base class method as it is not declared virtual.
	 * I suspect that the author's intent is to make sure, as the base class is derived as 'private',
	 * that the use of this bass class method remains static and that no intent are made to dynamically
	 * bind the call to the base class using a base class pointer.
	 * */
    Iterator First() const { return LinkedList::First();} /*Should not need to 'redeclare' ??*/

    /**
     * @brief Adds a value to the set, if it not already present.
     * @param value
     * @return true if at least one value has been added, false otherwise.
     */
    bool Insert(double value);

    /**
     * @brief Iterate through a given set values, and add to 'this' one
     * every one that is not already present.
     * @param set
     * @return true if at least one value has been added, false otherwise.
     */
    bool Insert(const Set& set);

    /**
     * @brief Two sets are not equal by their size neither by their their values content.
     * @param set
     * @return
     */
    bool NotEqual(const Set& set) const;

	/*This method is 'hiding' its equivalent base class method as it is not declared virtual.
	 * I suspect that the author's intent is to make sure, as the base class is derived as 'private',
	 * that the use of this bass class method remains static and that no intent are made to dynamically
	 * bind the call to the base class using a base class pointer.
	 * */
    void Read(istream& inStream);
    /**
     * @brief Removes the  given value form 'this' set.
     * @param value
     * @return true if the given value was found (and replaced).
     */
    bool Remove(double value);

    /**
     * @brief Iterate through a given set's values and removes similar ones in 'this' set.
     * @param value
     * @return true if al lest one value has been replaced.
     */
    bool Remove(const Set& set);

	/*This method is 'hiding' its equivalent base class method as it is not declared virtual.
	 * I suspect that the author's intent is to make sure, as the base class is derived as 'private',
	 * that the use of this bass class method remains static and that no intent are made to dynamically
	 * bind the call to the base class using a base class pointer.
	 * */
    int Size() const { return LinkedList::Size();} /*Should not need to 'redeclare' ??*/

    /*This method is 'hiding' its equivalent base class method as it is not declared virtual.
     * I suspect that the author's intent is to make sure, as the base class is derived as 'private',
     * that the use of this bass class method remains static and that no intent are made to dynamically
     * bind the call to the base class using a base class pointer.
     * */
    void Write(ostream& outStream); /*Should not need to 'redeclare' ??*/

};

#endif //SET_SET_H
