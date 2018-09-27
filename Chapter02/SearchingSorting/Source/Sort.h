//
// Created by Yves Gingras on 18-09-23.
// Studying the select sort, insert sort, and bubble sort algorithms.
//

#ifndef SEARCHINGSORTING_SORT_H
#define SEARCHINGSORTING_SORT_H

#include "LinkedList.h"

/**
 * @brief Sorts a given list passed as a reference parameter.
 * @param list
 */
	void SelectSort (LinkedList& list);
	void InsertSort (LinkedList& list);
	void BubbleSort(LinkedList& list);
	void Insert(double value, LinkedList& list);
	void Swap(Iterator iterator1, Iterator iterator2);

//};


#endif //SEARCHINGSORTING_SORT_H
