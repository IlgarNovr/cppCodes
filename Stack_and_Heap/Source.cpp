/*
1. Dinamik yaddaş ayıran funskiya yazın.
2. Dinamik massivi random ədədlərlə dolduran funksiya yazın.
3. Dinamik massivi ekrana çıxaran funksiya yazın.
4. Dinamik massivi silən funksiya yazın.*/
/*
#include<iostream>
#include<time.h>
using namespace std;

void Rand_arr(int* arr, int size) {
    for (size_t i = 0; i < size; i++) {
        arr[i] = rand() % 101;
    }
}

void Cout_arr(int* arr, int size) {
    cout << "Array: ";
    for (size_t i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    srand(time(NULL));
    int size;
    cout << "Arrayin olcusunu daxil edin: ";
    cin >> size;
    int* arr = new int[size];
    Rand_arr(arr, size);
    Cout_arr(arr, size);
    delete[] arr;
}
*/
//*************************************************************************
//5. Dinamik massivin sonuna element əlavə edən funksiya yazın.
/*
#include<iostream>
#include<time.h>
using namespace std;

void createArr(int* arr, int size) {
    srand(time(NULL));
    for (size_t i = 0; i < size; i++){
        arr[i] = rand() % 10;
    }

}void printArr(int* arr, int size) {
    cout << "Array: ";
    for (size_t i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void New_Array(int* arr, int size, int k) {
    cout << "\nYeni arrayin olcusu: " << size + 1;
    arr[size] = k;
    cout << "\nYeni array: ";
    for (size_t i = 0; i < size + 1; i++){
        cout << arr[i] << " ";
    }
}
int main() {
    int size, num;
    cout << "Massivin olcusu: ";
    cin >> size;
    cout << "Elave edilen eded: ";
    cin >> num;
    int* arr = new int[size];
    createArr(arr, size);
    printArr(arr, size);
    New_Array(arr, size, num);
}
*/
//*************************************************************************
/*6. Dinmaik massivin göstərilən indexinə element əlavə edən funksiya yazın.*/
/*
#include<iostream>
#include<time.h>
using namespace std;
void createArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
}

void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\nArrayin olcusu: " << size;
}

void newArr(int*& arr, int& size, int num, int index) {
	int* newArr = new int[size + 1];
	if (index < size) {
		for (int i = 0; i < size; i++)
		{
			newArr[i] = arr[i];
		}
		newArr[index] = num;
		for (int i = index + 1; i < size + 1; i++)
		{
			newArr[i] = arr[i - 1];
		}
		size++;
		delete[] arr;
		arr = newArr;
	}
	else {
		cout << "Duzgun index daxil edin!";
	}
}

int main() {
	srand(time(NULL));
	int size, num, index;
	cout << "Arrayin olcusunu daxil edin: ";
	cin >> size;
	int* arr = new int[size];
	createArr(arr, size);
	cout << "Array: ";
	printArr(arr, size);
	cout << "\nIndex daxil edin: ";
	cin >> index;
	cout << "Eded daxil edin: ";
	cin >> num;
	newArr(arr, size, num, index);
	cout << "Yeni array: ";
	printArr(arr, size);
}
*/
//*************************************************************************
/*7. Dinamik massivdən göstərilən indexdəki elementin silinməsi.*/
/*
#include<iostream>
#include<time.h>
using namespace std;

void createArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
}

void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\nArrayin olcusu: " << size;
}
void del_numArr(int*& arr, int& size, int index) {
	int* newArr = new int[size];
	if (index < size) {
		for (int i = 0; i < size; i++) {
			newArr[i] = arr[i];
		}
		for (int i = index; i < size - 1; i++) {
			newArr[i] = arr[i + 1];
		}
		size--;
		delete[] arr;
		arr = newArr;
	}
	else {
		cout << "\n\nDuzgun index daxil edin!";
	}
}

int main() {
	srand(time(NULL));
	int size, index;
	cout << "Arrayin olcusunu daxil edin: ";
	cin >> size;
	int* arr = new int[size];
	createArr(arr, size);
	cout << "Array: ";
	printArr(arr, size);
	cout << "\nIndex daxil edin: ";
	cin >> index;
	del_numArr(arr, size, index);
	cout << "Yeni array: ";
	printArr(arr, size);
}
*/
//*************************************************************************
/*8. Dinamik massivin sonuna bir blok element əlavə edən funksiya yazın.*/
/*
#include<iostream>
#include<time.h>
using namespace std;

void createArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
}

void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\nArrayin olcusu: " << size;
}

void addblockArr(int*& arr, int& size, int addsize) {
	int* addArr = new int[size + addsize];
	for (int i = 0; i < size; i++) {
		addArr[i] = arr[i];
	}
	for (int i = size; i < size + addsize; i++) {
		addArr[i] = rand() % 20;
	}
	size += addsize;
	delete[] arr;
	arr = addArr;
}
int main() {
	srand(time(NULL));
	int size, addsize;
	cout << "Arrayin olcusunu daxil edin: ";
	cin >> size;
	int* arr = new int[size];
	createArr(arr, size);
	cout << "Array: ";
	printArr(arr, size);
	cout << "\nArraye nece eded elave edilsin: ";
	cin >> addsize;
	addblockArr(arr, size, addsize);
	printArr(arr, size);
}
*/
//*************************************************************************
/*9. Dinamik massivin göstərilən indexindən sonra bir blok element əlavə edən funksiya yazın.*/
/*
#include<iostream>
#include<time.h>
using namespace std;

void createArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
}

void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\nArrayin olcusu: " << size;
}

void addblockArr(int*& arr, int& size, int addsize, int index) {
	int* addArr = new int[size + addsize];
	for (int i = 0; i <= index; i++) {
		addArr[i] = arr[i];
	}
	for (int i = index + 1; i <= index + addsize; i++) {
		addArr[i] = rand() % 20;
	}
	for (int i = index + addsize + 1; i < size + addsize; i++)
	{
		addArr[i] = arr[i - addsize];
	}
	size += addsize;
	delete[] arr;
	arr = addArr;
}
int main() {
	srand(time(NULL));
	int size, addsize, index;
	cout << "Arrayin olcusunu daxil edin: ";
	cin >> size;
	int* arr = new int[size];
	createArr(arr, size);
	cout << "Array: ";
	printArr(arr, size);
	cout << "\nArraye nece eded elave edilsin: ";
	cin >> addsize;
	cout << "Hansi indexden sonra elave edilsin: ";
	cin >> index;
	addblockArr(arr, size, addsize, index);
	printArr(arr, size);
}
*/
//*************************************************************************
/*10. Dinamik massivdən bir blok elementi silən funksiya yazın*/
/*
#include<iostream>
#include<time.h>
using namespace std;

void createArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
}

void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\nArrayin olcusu: " << size;
}

void delblockArr(int*& arr, int& size, int index1, int index2) {
	int* delArr = new int[size - (index2 - index1)];
	for (int i = 0; i <= index1; i++) {
		delArr[i] = arr[i];
	}
	for (int i = index1 + 1; i < size - (index2 - index1); i++) {
		delArr[i] = arr[i + (index2 - index1)];
	}
	size = size - (index2 - index1);
	delete[] arr;
	arr = delArr;
}
int main() {
	srand(time(NULL));
	int size, index1, index2;
	cout << "Arrayin olcusunu daxil edin: ";
	cin >> size;
	int* arr = new int[size];
	createArr(arr, size);
	cout << "Array: ";
	printArr(arr, size);
	cout << "\nHansi indexden sonra ededler silinsin?: ";
	cin >> index1;
	cout << "Hansi indexden evvel ededler silinsin?: ";
	cin >> index2;
	delblockArr(arr, size, index1, index2);
	printArr(arr, size);
}
*/