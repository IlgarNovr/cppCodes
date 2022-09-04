#include <iostream>
#include "Header.h";

using namespace std;

int main() {
	LinkedList list;
	Node* data1 = new Node{ 27 };
	Node* data2 = new Node{ 35 };
	//Add front
	addFront(list, 5);
	addFront(list, 8);
	addFront(list, 2);
	addFront(list, data1);//Node
	//Add back
	addBack(list, 5);
	addBack(list, 6);
	addBack(list, 7);
	addBack(list, data2);//Node
	//Print list
	printList(list);
	//Count Element
	cout << endl << "Count: " << getCount(list) << endl;
	//Remove data
	removeFirst(list);//First
	cout << "Remove first: ";
	printList(list);
	removeLast(list);//Last
	cout << "\nRemove first: ";
	printList(list);
	removeElement(list, 1);//Element
	cout << endl << "Remove Element index = 1: ";
	printList(list);
	cout << "\nGet element index = 2: " << getElement(list, 2)->data;
	cout << "\nFind first 5: " << findFirst(list, 5);
	cout << "\nFind last 5: " << findLast(list, 5);
	cout << "\nCount 5: " << countAll(list, 5);
}