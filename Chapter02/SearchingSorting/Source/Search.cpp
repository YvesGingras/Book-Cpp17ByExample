//
// Created by Yves Gingras on 18-09-23.
//
#include <iostream>
#include "Cell.h"
#include "Iterator.h"
#include "Search.h"

using namespace std;

int Search::LinarySearch(double value, const LinkedList& list) {
	auto index {0};
	auto iterator {list.First()};

	while (iterator.HasNext()) {
		if(iterator.GetValue() == value)
			return index;

		index++;
		iterator.Next();
	}

	return -1;
}
