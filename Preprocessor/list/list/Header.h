#pragma once
#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};
struct LinkedList {
	Node* head = nullptr;
	int count = 0;
};

void printList(const LinkedList& list);
void addFront(LinkedList& list, int data); // evveline int  elave edir
void addFront(LinkedList& list, Node* data); // evveline Node elave edir

int getCount(LinkedList& list);
void addBack(LinkedList& list, int data); //sonuna int elave edir
void addBack(LinkedList& list, Node* data);// sonuna Node elave edir

void removeFirst(LinkedList& list);// birincini silir
void removeLast(LinkedList& list);// sonuncunu silir
void removeElement(LinkedList& list, int index); // indexdeki elementi silir

Node* getElement(LinkedList& list, int index);// indextdeki Nodu qaytarir

int findFirst(LinkedList& list, int data); //evvelden data olan ilk Node'un indexsini qayrarir 
int findLast(LinkedList& list, int data); // sondan data olan ilk Node'un indexsini qayrarir 

int countAll(LinkedList& list, int data); // datadan neche dene oldugunu qaytarir