/*
1. Funksiya, parametr olaraq, massiv və onun ölçüsünü qəbul edir.
Massivin içərsindəki bütün mənfi ədədləri silin.
*/
/*
#include<iostream>
#include<time.h>
using namespace std;
void CreateArr(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = -8 + rand() % 20;
	}
}
void PrintArr(int* arr, int size) {
	cout << "\nArray: ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}
void DelMinusArr(int*& arr, int& size) {
	int k = 0;
	int* newarr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > 0) {
			newarr[k] = arr[i];
			k++;
		}
	}
	size = k;
	delete[]arr;
	arr = newarr;
}
int main() {
	srand(time(NULL));
	int size;
	cout << "Arrayin olcusu: ";
	cin >> size;
	int* arr = new int[size];
	CreateArr(arr, size);
	PrintArr(arr, size);
	DelMinusArr(arr, size);
	PrintArr(arr, size);
}
*/
//2******************************************************************
/*
2. İki massiv verilib: А[M] və B[N] (M və N klaviaturadan daxil edilir). 
Minimal ölçüdə üçüncü massiv yaradıb bu iki massivi A massivinə yazın.
*/
/*
#include<iostream>
#include<time.h>
using namespace std;
void CreateArr(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}
void PrintArr(int* arr, int size) {
	cout << "\nArrayin olcusu: " << size << "\n";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}
void NewArr(int*& A, int*& B, int& sizeA, int& sizeB) {
	int* newarr = new int[sizeA + sizeB];
	int k = 0;
	for (size_t i = 0; i < sizeA; i++) {
		newarr[i] = A[i];
	}
	for (size_t i = sizeA; i < sizeA + sizeB; i++)
	{
		newarr[i] = B[k];
		k++;
	}
	sizeA += sizeB;
	delete[] A;
	A = newarr;
}
int main() {
	srand(time(NULL));
	int M, N;
	cout << "A Arrayinin olcusu: ";
	cin >> M;
	cout << "B Arrayinin olcusu: ";
	cin >> N;
	int* A = new int[M];
	int* B = new int[N];
	CreateArr(A, M);
	cout << "\nA arrayi: ";
	PrintArr(A, M);
	CreateArr(B, N);
	cout << "\nB arrayi: ";
	PrintArr(B, N);
	NewArr(A, B, M, N);
	cout << "\nYeni Array: ";
	PrintArr(A, M);
}
*/
//3**************************************************************************
/*
3. İki massiv verilib: А[M] və B[N] (M və N klaviaturadan daxil edilir). 
Minimal ölçüdə üçüncü massiv yaradıb bu iki massivin ortaq elementlərini A massivinə yazın.
*/
/*
#include<iostream>
#include<time.h>
using namespace std;
void CreateArr(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}
void PrintArr(int* arr, int size) {
	cout << "\nArrayin olcusu: " << size << "\n";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}
void PairNumOfArr(int*& A, int*& B, int& sizeA, int& sizeB) {
	int* newarr = new int[sizeA];
	int k = 0;
	for (size_t i = 0; i < sizeA; i++) {
		for (size_t j = 0; j < sizeB; j++)
		{
			if (A[i] == B[j]) {
				newarr[k] = A[i];
				k++;
			}
		}

	}

	sizeA = k;;
	delete[] A;
	A = newarr;
}
int main() {
	srand(time(NULL));
	int M, N;
	cout << "A Arrayinin olcusu: ";
	cin >> M;
	cout << "B Arrayinin olcusu: ";
	cin >> N;
	int* A = new int[M];
	int* B = new int[N];
	CreateArr(A, M);
	cout << "\nA arrayi: ";
	PrintArr(A, M);
	CreateArr(B, N);
	cout << "\nB arrayi: ";
	PrintArr(B, N);
	PairNumOfArr(A, B, M, N);
	cout << "\nYeni Array: ";
	PrintArr(A, M);
}
*/
//4**********************************************************************************
/*
4. İki massiv verilib: А[M] və B[N] (M və N klaviaturadan daxil edilir).
Minimal ölçüdə üçüncü massiv yaradıb, A-da olub B-də olmayan elementləri A massivinə yazın.
*/
/*
#include<iostream>
#include<time.h>
using namespace std;
void CreateArr(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}
void PrintArr(int* arr, int size) {
	cout << "\nArrayin olcusu: " << size << "\n";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
void DifNumOfArr(int*& A, int*& B, int& sizeA, int& sizeB) {
	int* newarr = new int[sizeA];
	int k = 0;
	for (size_t i = 0; i < sizeA; i++) {
		for (size_t j = 0; j < sizeB; j++)
		{
			if (A[i] == B[j]) {
				A[i] = 00;
			}
		}
	}
	for (size_t i = 0; i < sizeA; i++) {
		if (A[i] != 00) {
			newarr[k] = A[i];
			k++;
		}
	}
	sizeA = k;
	delete[] A;
	A = newarr;
}

int main() {
	srand(time(NULL));
	int M, N;
	cout << "A Arrayinin olcusu: ";
	cin >> M;
	cout << "B Arrayinin olcusu: ";
	cin >> N;
	int* A = new int[M];
	int* B = new int[N];
	CreateArr(A, M);
	cout << "\nA arrayi: ";
	PrintArr(A, M);
	CreateArr(B, N);
	cout << "\nB arrayi: ";
	PrintArr(B, N);
	DifNumOfArr(A, B, M, N);
	cout << "\nYeni Array: ";
	PrintArr(A, M);
}
*/
//5**********************************************************************
/*
5. İki massiv verilib: А[M] və B[N] (M və N klaviaturadan daxil edilir).
Minimal ölçüdə üçüncü massiv yaradıb, A və B-nin ortaq olmayan elemntlərini A massivinə yazın.
Təkrarlanmasın.
*/
/*
#include<iostream>
#include<time.h>
using namespace std;
void CreateArr(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = 5 + rand() % 50;
	}
}
void PrintArr(int* arr, int size) {
	cout << "\nArrayin olcusu: " << size << "\n";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void DifNumOfArr(int*& A, int*& B, int& sizeA, int& sizeB) {
	int* newarr = new int[sizeA + sizeB];
	int k = 0;
	int index = 0;
	for (int i = 0; i < sizeA; i++) {
		k = 0;
		for (int j = 0; j < sizeB; j++) {
			if (A[i] == B[j]) {
				k++;
			}
		}
		if (k == 0) {
			for (int u = 0; u < sizeA; u++) {
				if (newarr[u] == A[i]) {
					k++;
				}
			}
			if (k == 0) {
				newarr[index] = A[i];
				index++;
			}
		}
	}
	for (int j = 0; j < sizeB; j++) {
		k = 0;
		for (int i = 0; i < sizeA; i++) {
			if (B[j] == A[i]) {
				k++;
			}
		}
		if (k == 0) {
			for (int u = 0; u < sizeA + sizeB; u++) {
				if (newarr[u] == B[j]) {
					k++;
				}
			}
			if (k == 0) {
				newarr[index] = B[j];
				index++;
			}
		}
	}
	sizeA = index;
	delete[] A;
	delete[] B;
	A = newarr;
}
int main() {
	srand(time(NULL));
	int M, N;
	cout << "A Arrayinin olcusu: ";
	cin >> M;
	cout << "B Arrayinin olcusu: ";
	cin >> N;
	int* A = new int[M];
	int* B = new int[N];
	CreateArr(A, M);
	cout << "\nA arrayi: ";
	PrintArr(A, M);
	CreateArr(B, N);
	cout << "\nB arrayi: ";
	PrintArr(B, N);
	DifNumOfArr(A, B, M, N);
	cout << "\nYeni Array: ";
	PrintArr(A, M);
}
*/
//6******************************************************************************
/*
6. Funksiya, parametr olaraq, massiv və onun ölçüsünü qəbul edir. 
Massivin içərsindəki bütün sadə ədədləri silin və yeni massivi A massivinə yazın.
*/
/*
#include<iostream>
#include<time.h>
using namespace std;
void CreateArr(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = 5 + rand() % 50;
	}
}
void PrintArr(int* arr, int size) {
	cout << "\nArrayin olcusu: " << size << "\n";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void DelSimpleNumOfArr(int*& arr, int& size) {
	int* newarr = new int[size];
	int index = 0, k = 0;
	for (int i = 0; i < size; i++) {
		k = 0;
		for (size_t j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0 || arr[i] == 1) {
				k = 1;
				break;
			}
		}
		if (k == 0) {
			arr[i] = 00;
		}
	}
	for (size_t i = 0; i < size; i++) {
		if (arr[i] != 00) {
			newarr[index] = arr[i];
			index++;
		}
	}
	size = index;
	delete[] arr;
	arr = newarr;
}
int main() {
	srand(time(NULL));
	int size;
	cout << "Arrayinin olcusu: ";
	cin >> size;
	int* arr = new int[size];
	CreateArr(arr, size);
	cout << "\nArray: ";
	PrintArr(arr, size);
	DelSimpleNumOfArr(arr, size);
	cout << "\nYeni Array: ";
	PrintArr(arr, size);
}
*/
//******************************************************************************