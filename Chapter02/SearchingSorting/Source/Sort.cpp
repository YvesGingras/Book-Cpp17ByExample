//
// Created by Yves Gingras on 18-09-23.
//

#include "Sort.h"

/* "The bubble sort algorithm compares the values pairwise and lets them change place
 * if they occur in the wrong order. After the first iteration, we know that the
 * largest value is located at the end of the list.
 *
 * Therefore, we do not need to iterate through the whole list the second time,
 * we can omit the last value. In this way, we iterate through the list at most
 * the number of the values in the list minus one, because when all values except
 * the first one is at it's correct location, the first one is also at its correct location.
 *
 * However, the list may be properly sorted before that. Therefore, we check after each iteration
 * if any pair of values has been swapped. If they have not, the list has been
 * properly sorted and we exit the algorithm" (pg62)
 */
void BubbleSort(LinkedList& list) {
	auto listSize = list.Size();

	if (listSize > 1) {
		auto currSize = listSize -1;
		auto outerCount{0};

		while (outerCount < (listSize - 1)){
			auto currIterator{list.First()};
			auto nextIterator{currIterator};

			nextIterator.Next();
			auto changed{false};

			auto innerCount{0};
			while (innerCount < currSize) {
				if (currIterator.GetValue() > nextIterator.GetValue()) {
					Swap(currIterator, nextIterator);
					changed = true;
				}

				++innerCount;
				currIterator.Next();
				nextIterator.Next();
			}

			if (!changed)
				break;

			--currSize;
			++outerCount;
		}
	}
}

/*
 * The insert function takes a list and a value and places the value at its correct location
 * in the list. It iterates through the list and places the value before the first value that
 * it is less. If there is no such value in the list, the value is added at the end of the list:
 * */
void Insert(double value, LinkedList& list) {
	auto iterator {list.First()};

	while (iterator.HasNext()) {
		if (value < iterator.GetValue()) {
			list.Insert(iterator,value);
			return;
		}
		iterator.Next();
	}
	list.Add(value);
}

/* In the insert sort algorithm, we iterate through the list, and for each value we insert
 * it at its appropriate location in the resulting list.
 * Then we assign the resulting list to the original list
 * */
void InsertSort(LinkedList& list) {
	LinkedList result{};
	auto iterator{list.First()};

	while (iterator.HasNext()) {
		Insert(iterator.GetValue(),result);
		iterator.Next();
	}

	list.Assign(result);
}

/* The select sort algorithm is quite simple, we iterate through the list repeatedly until it becomes empty.
 * For each iteration, we found the smallest value, which we remove from the list and add to the resulting list.
 * In this way, the resulting list will eventually be filled with the same values as the list.
 *
 * As the values were selected in order, the resulting list is sorted.
 * Finally, we assign the resulting list to the original list
 */
void SelectSort(LinkedList& list) {
	LinkedList result{};

	while (!list.Empty()) {
		auto minIterator{list.First()};
		auto minValue{minIterator.GetValue()};
		auto iterator{list.First()};


		while (iterator.HasNext()) {
			if (iterator.GetValue() < minValue) {
				minIterator = iterator;
				minValue = minIterator.GetValue();
			}
			iterator.Next();
		}
		list.Erase(minIterator);
		result.Add(minValue);
	}
	list.Assign(result);
}

/*
 * "The swap function swaps the values at the locations given by the iterators"
 */
void Swap(Iterator iterator1, Iterator iterator2) {
	auto tempValue{iterator1.GetValue()};

	iterator1.SetValue(iterator2.GetValue());
	iterator2.SetValue(tempValue);
}
