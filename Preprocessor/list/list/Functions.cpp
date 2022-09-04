#include "Header.h"


//Print List
void printList(const LinkedList& list) {
	Node* temp = list.head;
	while (temp) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}

//Add data to front
void addFront(LinkedList& list, int data) {
	Node* nData = new Node{ data, list.head };
	list.head = nData;
	list.count++;
}
void addFront(LinkedList& list, Node* data) {
	Node* nData = new Node{ data->data, list.head };
	list.head = nData;
	list.count++;
}


//Add data to back
void addBack(LinkedList& list, int data) {
	Node* temp = new Node{ data,NULL };
	if (!list.head) {
		list.head = temp;
	}
	else {
		Node* last = list.head;
		while (last->next) last = last->next;
		last->next = temp;
	}
	list.count++;
}
void addBack(LinkedList& list, Node* data) {
	data->next = NULL;
	if (!list.head) {
		list.head = data;
	}
	else {
		Node* last = list.head;
		while (last->next) {
			last = last->next;
		}
		last->next = data;
	}
	list.count++;
}


//Count element 
int getCount(LinkedList& list) {
	int count = 0;
	Node* temp = list.head;
	while (temp) {
		temp = temp->next;
		count++;
	}
	return count;
}


//Remove data
void removeFirst(LinkedList& list) {
	if (list.count > 0) {
		list.head = list.head->next;
		list.count--;
	}
	else
		cout << "\nError";
}
void removeLast(LinkedList& list) {
	if (list.count > 0) {
		Node* temp = list.head;
		while (temp->next->next) temp = temp->next;
		delete(temp->next);
		temp->next = NULL;
		list.count--;
	}
	else
		cout << "\nError";
}
void removeElement(LinkedList& list, int index) {  
	if (list.count > 0) {
		Node* temp = list.head;
		Node* temp1;
		int count = 0;
		while (index-1 != count) {
			temp = temp->next; 
			count++;
		}
		temp1 = temp->next;
		temp->next = temp1->next;
		list.count--;
	}
	else
		cout << "\nError";
}


//Get element
Node* getElement(LinkedList& list, int index) {
	Node* temp = list.head;
	for (int i = 0; i < index; i++) {
		temp = temp->next;
	}
	return temp;
}


//Find data
int findFirst(LinkedList& list, int data) {
	Node* temp = list.head;
	int index = 0;
	while (temp) {
		if (temp->data == data) {
			return index;
		}
		temp = temp->next;
		index++;
	}
	cout << "\nNULL\n";
	return NULL;
}
int findLast(LinkedList& list, int data) {
	Node* temp = list.head;
	int index = 0;
	int last = -1;
	while (temp) {
		if (temp->data == data) {
			last = index;
		}
		temp = temp->next;
		index++;
	}
	if (last > -1)
		return last;
	cout << "\nNULL\n";
	return NULL;
}
int countAll(LinkedList& list, int data) {
	Node* temp = list.head;
	int count = 0;
	while (temp) {
		if (temp->data == data) {
			count++;
		}
		temp = temp->next;
	}
	if (count > 0)
		return count;
	cout << "\nNULL\n";
	return NULL;
}