//
// Created by Yves Gingras on 18-09-23.
//

#ifndef SEARCHINGSORTING_SEARCH_H
#define SEARCHINGSORTING_SEARCH_H

#include "LinkedList.h"

class Search
{
	/**
	 * @brief Search for a given value in a given list.
	 * @param value
	 * @param list
	 * @return the 0 based index of the value, or '-1' if the value is not present.
	 */
public:
	static int LinarySearch(double value, const LinkedList& list);
};


#endif //SEARCHINGSORTING_SEARCH_H
