#include <iostream>
#include <cstdlib>
#include "Source/LinkedList.h"
#include "Source/Sort.h"
#include "Source/Search.h"


using namespace std;

int main() {
	cout << "\nHello, Searching and sorting!" << endl;
	cout << "---------------------------------------" << endl;

	cout << "\nLinkedList" << endl;

	LinkedList list {};
	list.Add(9);
	list.Add(7);
	list.Add(5);
	list.Add(3);
	list.Add(1);

	list.Write(cout); // [9,7,5,3,1]
	cout << endl;

	/*SelectSort method*/
	SelectSort(list);
	list.Write(cout); // [1,3,5,7,9]
	cout << endl;

	/*Insert method*/
	Insert(8,list);
	list.Write(cout); // [1,3,5,7,8,9]
	cout << endl;

	/*InsertSort method*/
	LinkedList list2{};
	list2.Add(12);
	list2.Add(14);
	list2.Add(2);
	list2.Add(0);
	list2.Add(5);


	cout << "\nSelectSort method" << endl;
	list2.Write(cout); // [12,14,2,0,5]
	cout << endl;

	InsertSort(list2);
	list2.Write(cout); // [0,2,5,12,14]
	cout << endl;

	/*BubbleSort method*/
	LinkedList list3{};
	list3.Add(12);
	list3.Add(14);
	list3.Add(2);
	list3.Add(0);
	list3.Add(5);
	
	cout << "\nBubbleSort method" << endl;
	list3.Write(cout); // [12,14,2,0,5]
	cout << endl;

	BubbleSort(list3);
	list3.Write(cout); // [0,2,5,12,14]
	cout << endl;

	/*LinarySearch nethod*/
	cout << "\nLinarySearch method" << endl;
	list3.Write(cout); // [12,14,2,0,5]

	auto iterator{list3.First()};
	while (iterator.HasNext()) {
		cout << "\n<" << iterator.GetValue() << ","
			 << Search::LinarySearch(iterator.GetValue(),list3) << "> ";

		iterator.Next();
	}
	cout << "\n";

	cout << "\nLinarySearch method; 'Value not found'." << endl;
	list3.Write(cout); // [12,14,2,0,5]

	cout << "\n< 1, " << Search::LinarySearch(1,list3) << "> " << endl;
	cout << "< 3, " << Search::LinarySearch(3,list3) << "> " << endl;
	cout << "< 9, " << Search::LinarySearch(9,list3) << "> " << endl;

}