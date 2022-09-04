//Olchuler istifadechi terefinden daxil olunur.
//Hemin olchulerde dinamik iki olchulu massiv yaranir.
//Icherisi random ededlerle doldurulur.
//Ekrana chixarilir.
//Array sort olunur.
//Ekrana chixarilir.
//Istifadechinin istediyi elementin indeksi ekrana chixarirlir.
//Davam etmek isteyine esasen program sonlanir ve ya davam edir.
//Funksiyalardan istifade olunmasi mutleqdir.
#include<iostream>
#include<time.h>
using namespace std;
void createtable(int** table, int* arr, int size) {
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < arr[i]; j++) {
			table[i][j] = rand() % 100;
		}
	}
}
void printtable(int** table, int* arr, int size) {
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < arr[i]; j++) {
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}
void sortedtable(int** table, int* arr, int size) {
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < arr[i]; j++) {
			for (size_t a = 0; a < size; a++) {
				int lim1 = arr[a];
				for (size_t b = 0; b < arr[a]; b++) {
					if (table[i][j] < table[a][b]) {
						swap(table[a][b], table[i][j]);
					}
				}
			}
		}
	}
}
int main() {
	srand(time(NULL));
	int size, limit;
	cout << "Setirlerin sayini daxil edin:: ";
	cin >> size;
	int* arr = new int[size];
	int** table = new int* [size];
	for (size_t i = 0; i < size; i++) {
		cout << i << "-ci setirdeki elementlerin sayi :: ";
		cin >> limit;
		arr[i] = limit;
		table[i] = new int[limit];
	}
	createtable(table, arr, size);
	cout << "Array: \n";
	printtable(table, arr, size);
	cout << "\n***************************\nSorted Array: \n";
	sortedtable(table, arr, size);
	printtable(table, arr, size);
}