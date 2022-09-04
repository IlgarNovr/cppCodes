//TASK_1
/*
#include<iostream>
using namespace std;
int main() {
	const int size = 4;
	int two[size][size]{};
	int num = 11, k;
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
				two[i][j] = num;
				num++;
		}
		num += 6;
	}
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
}
*/
//*******************************************************************
//TASK_2
/*
#include<iostream>
using namespace std;
int main() {
	const int size = 4;
	int two[size][size]{};
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			if (j % 2 == 1) {
				two[i][j] = 1;
			}
			else {
				two[i][j] = 0;
			}
		}
	}
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
}
*/
//***************************************************************
//TASK_3
/*
#include<iostream>
using namespace std;
int main() {
	const int size = 4;
	int two[size][size]{};
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			if (i % 2 == 0 && j % 2 == 0 || i % 2 == 1 && j % 2 == 1) {
				two[i][j] = 1;
			}
			else {
				two[i][j] = 0;
			}
		}
	}
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
}
*/
//******************************************************************
//TASK_4
/*
#include<iostream>
using namespace std;
int main() {
	const int size = 4;
	int two[size][size]{};
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			if (i == j || i + j == size - 1) {
				two[i][j] = 1;
			}
			else {
				two[i][j] = 0;
			}
		}
	}
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
}
*/
//************************************************************
//TASK_5
/*
#include<iostream>
using namespace std;
int main() {
	const int size = 4;
	int two[size][size]{};
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
				two[i][j] = 1;
			}
			else {
				two[i][j] = 0;
			}
		}
	}
	for (size_t i = 0; i < 4; i++) {
		for (size_t j = 0; j < 4; j++) {
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
}
*/
//********************************************************
//TASK_6
/*
#include<iostream>
using namespace std;
int main() {
	const int size = 4;
	int two[size][size]{};
	int num = 1;
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			two[i][j] = num;
			num++;
		}
	}
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
}
*/
//***************************************************************
//TASK_7
/*
#include<iostream>
using namespace std;
int main() {
	const int size = 4;
	int two[size][size]{};
	int num1, k = 2;
	for (size_t i = 0; i < size; i++) {
		num1 = i + 1;
		for (size_t j = 0; j < size; j++) {
			two[i][j] = num1;
			num1 *= k;
		}
	}
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
}
*/
//****************************************************************
//TASK_8
/*
#include<iostream>
using namespace std;
int main() {
	const int size = 4;
	int two[size][size]{};
	int num1, k = 2;
	for (size_t i = 0; i < size; i++) {
		num1 = i + 1;
		for (size_t j = 0; j < size; j++) {
			two[i][j] = num1;
			num1 += 1;
		}
	}
	for (size_t i = 0; i < 4; i++) {
		for (size_t j = 0; j < 4; j++) {
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
}
*/
//***************************************************************
//TASK_9
/*
#include<iostream>
using namespace std;
int main() {
	const int size = 4;
	int arr[size][size]{};
	int yuxari = 0, asagi = size - 1;
	int sol = 0, sag = size - 1;
	int num = 1;
	char t = 'r';//r-saga, l-sola, y-yuxari, a-asagi
	while (num <= size * size) {
		if (t == 'r') {
			for (int i = sol; i <= sag; i++){
				arr[yuxari][i] = num;
				num++;
			}
			yuxari++;
			t = 'a';
		}
		else if (t == 'a') {
			for (int i = yuxari; i <= asagi; i++){
				arr[i][sag] = num;
				num++;
			}
			sag--;
			t = 'l';
		}
		else if (t == 'l') {
			for (int i = sag; i >= sol; i--){
				arr[asagi][i] = num;
				num++;
			}
			asagi--;
			t = 'y';
		}
		else if (t == 'y') {
			for (int i = asagi; i >= yuxari; i--){
				arr[i][sol] = num;
				num++;
			}
			sol++;
			t = 'r';
		}
	}
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			cout << arr[i][j];
			if (arr[i][j] > 9) {
				cout << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
}
*/