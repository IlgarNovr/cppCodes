/*
Iftifadechi arrayin olchusunu daxil edir.
Sechiminden asili olaraq array random ve ya ozu doldurur.
Butun arrayi gordukden sonra hansi sortingi ve artan ve ya azalan sira ile sort olunmasini istediyini daxil edir.
Netice ekrana chixir.
1) Normal Sort
2) Bubble Sort
3) Optimised Bubble sort
*/

#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

void RandArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
}

void NewArr(int* arr, int size) {
	cout << "Ededleri daxil edin: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void PrintArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

void NormalSort(int* arr, int size, int chose) {
	cout << "Array: ";
	PrintArr(arr, size);
	cout << "\nNormal Sort / ";
	int index;
	if (chose == 1) {
		cout << "Azalan sira\n\n";
		for (int i = 0; i < size - 1; i++) {
			index = i;
			for (int j = i + 1; j < size; j++) {
				if (arr[j] > arr[index]) {
					index = j;
				}
			}
			swap(arr[i], arr[index]);
		}
	}
	else {
		cout << " Artan sira\n\n";
		for (int i = 0; i < size - 1; i++) {
			index = i;
			for (int j = i + 1; j < size; j++) {
				if (arr[j] < arr[index]) {
					index = j;
				}
			}
			swap(arr[i], arr[index]);
		}
	}
	cout << "Sorting Array: ";
	PrintArr(arr, size);
}

void BubbleSort(int* arr, int size, int chose) {
	cout << "Array: ";
	PrintArr(arr, size);
	cout << "\nBubble Sort / ";
	if (chose == 1) {
		cout << "Azalan sira\n\n";
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (arr[i] > arr[j]) {
					swap(arr[i], arr[j]);
				}
			}
		}
	}
	else {
		cout << " Artan sira\n\n";
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (arr[i] < arr[j]) {
					swap(arr[i], arr[j]);
				}
			}
		}
	}
	cout << "Sorting Array: ";
	PrintArr(arr, size);
}

void OptimisedBubbleSort(int* arr, int size, int chose) {
	cout << "Array: ";
	PrintArr(arr, size);
	cout << "\nOptimised Bubble Sort / ";
	if (chose == 1) {
		cout << "Azalan sira\n\n";
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (arr[j] < arr[j + 1]) {
					swap(arr[j], arr[j + 1]);
				}
			}
		}
	}
	else {
		cout << " Artan sira\n\n";
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					swap(arr[j], arr[j + 1]);
				}
			}
		}
	}
	cout << "Sorting Array: ";
	PrintArr(arr, size);
}

int main() {
	srand(time(NULL));
	int size, choarr = 0, chorow = 0, sort = 0;
	cout << "Arrayin olcusunu daxil edin: ";
	cin >> size;
	int* arr = new int[size];
	cout << "Massiv nece doldurulsun:\n-Random(1)\n-Manual(2)\nSecim :: ";
	cin >> choarr;
	system("cls");
	switch (choarr) {
	case 1:
		RandArr(arr, size);
		cout << "Array: ";
		PrintArr(arr, size);
		break;
	case 2:
		NewArr(arr, size);
		cout << "Array: ";
		PrintArr(arr, size);
		break;
	default:
		cout << " Massivi yeniden secin!";
		break;
	}
	Sleep(500);
	cout << "\nMassiv hansi sira ile yigilsin:\n-Azalan(1)\n-Artan(2)\nSecim :: ";
	cin >> chorow;
	switch (chorow) {
	case 1:
		cout << "Azalan sira ile.";
		break;
	case 2:
		cout << "Artan sira ile.";
		break;
	default:
		cout << "Emeliyyat yanlis daxil edilmisdir!";
		break;
	}
	Sleep(500);
	system("cls");
	cout << "\nSorting secin:\n- Normal Sort(1)\n- Bubble Sort(2)\n- Optimised Bubble Sort(3)\nSecim :: ";
	cin >> sort;
	Sleep(500);
	system("cls");
	switch (sort) {
	case 1:
		NormalSort(arr, size, chorow);
		break;
	case 2:
		BubbleSort(arr, size, chorow);
		break;
	case 3:
		OptimisedBubbleSort(arr, size, chorow);
		break;
	default:
		cout << "Emeliyyat yanlis daxil edilmisdir!";
		break;
	}
}