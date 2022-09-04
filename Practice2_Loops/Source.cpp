//EXERCISE 1
/*
#include<iostream>
using namespace std;
int main() {
	for (int row = 1; row <= 10; row++) {
		for (int col = 1; col <= 10; col++) {
			cout << row * col << "\t";
		}
		cout << "\n";
	}
}
*/
//----------------------------------------------------------
//EXERCISE 2
/*
#include<iostream>
using namespace std;
int main() {
	int num = 0;
	cout << "Kvadratin olcusunu daxil edin: ";
	cin >> num;
	cout << "\n\n";
	for (int row = 0; row < num; row++) {
		for (int col = 0; col < num; col++) {
			if (row == 0 || row == num - 1 || col == 0 || col == num - 1) {
				cout << "* ";
			}
			else if (row <= num / 4 && col <= num / 4 || row >= 3 * num / 4 && col <= num / 4 || row <= num / 4 && col >= 3 * num / 4 || row >= 3 * num / 4 && col >= 3 * num / 4) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
}
*/
//-------------------------------------------------------------
//EXERCISE 3
/*
#include<iostream>
using namespace std;
int main() {
	int num = 0;
	cout << "Ucbucagin hundurluyunu daxil edin: ";
	cin >> num;
	cout << "\n\n";
	for (int row = 0; row < num; row++) {
		for (int col = 0; col < 2 * num - 1; col++) {
			if (row == num - 1 || row + col == num - 1 || col >= num / 2 && col - row == num - 1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
}
*/
//---------------------------------------------------------------
//EXERCISE 4
/*
#include<iostream>
using namespace std;
int main() {
	int num = 0;
	cout << "Ucbucagin hundurluyunu daxil edin: ";
	cin >> num;
	cout << "\n\n";
	for (int row = 0; row < num; row++) {
		for (int col = 0; col < 2 * num - 1; col++) {
			if (row > num - 1 || row + col >= num - 1 && col < num || col >= num && col - row <= num - 1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
}
*/
//--------------------------------------------------------------------
//EXERCISE 5
/*
#include<iostream>
using namespace std;
int main() {
	int num = 0;
	cout << "\nUcbucagin hundurluyunu daxil edin: ";
	cin >> num;
	cout << "\n-------------------------------------------------\n";
	for (int row = 0; row < 2 * num - 1; row++) {
		for (int col = 0; col < 2 * num - 1; col++) {
			if (row + col == num - 1 || col >= num / 2 && col - row == num - 1) {
				cout << "* ";
			}
			else if (row - col == num - 1 || col >= num && row + col == 3 * (num - 1)) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
}
*/
//-----------------------------------------------------------------------------------------
//EXERCISE 6
/*
#include<iostream>
using namespace std;
int main() {
	int num = 0;
	cout << "\nUcbucagin hundurluyunu daxil edin: ";
	cin >> num;
	cout << "\n-------------------------------------------------\n\n";
	for (int row = 0; row < 2 * num - 1; row++) {
		for (int col = 0; col < 2 * num - 1; col++) {
			if (col < num && row + col >= num - 1 && row - col <= num - 1 || col >= num && col - row <= num - 1 && row + col <= 3 * (num - 1)) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
}
*/
//-------------------------------------------------------------------------------------------------------------
//EXERCISE 7
/*
#include<iostream>
using namespace std;
int main() {
	int num = 0;
	cout << "\nKepeneyin olcusunu daxil edin: ";
	cin >> num;
	cout << "\n---------------------------------------------------------------------\n\n";
	for (int row = 0; row < num; row++) {
		for (int col = 0; col < num; col++) {
			if (col == (num - 1) / 2 || col <= num / 2 && row >= col && row + col <= num - 1 || col >= num / 2 && row <= col && row + col >= num - 1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
}
*/
//----------------------------------------------------------------------------------------------
//EXERCISE 8
/*
#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Eded daxil edin: ";
	cin >> num;
	cout << "\n****************************\n\n";
	for (int row = 0; row < num; row++) {
		for (int col = 0; col < num; col++) {
			if ((row + col) % 2 == 0) {
				cout << char(178);
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
}
*/