//EXERCISE 1

/*
#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Kvadratin olcusunu daxil edin: ";
	cin >> num;
	cout << "\n\n";
	for (int row = 0; row < num; row++)
	{
		for (int col = 0; col < num; col++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
}
*/
//-----------------------------------------
//EXERCISE 2
/*
#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Kvadratin olcusunu daxil edin: ";
	cin >> num;
	cout << "\n\n";
	for (int row = 0; row < num; row++)
	{
		for (int col = 0; col < num; col++)
		{
			if (row == 0 || row == num - 1 || col == 0 || col == num - 1)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << "\n";
	}
}
*/
//-------------------------------------------
//EXERCISE 3
/*
#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Kvadratin olcusunu daxil edin: ";
	cin >> num;
	cout << "\n\n";
	for (int row = 0; row < num; row++)
	{
		for (int col = 0; col < num; col++)
		{
			if (row == 0 || row == num - 1 || row == num / 2 || col == 0 || col == num - 1 || col == num / 2)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << "\n";
	}
}
*/
//-----------------------------------------------
//EXERCISE 4
/*
#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Kvadratin olcusunu daxil edin: ";
	cin >> num;
	cout << "\n\n";
	for (int row = 0; row < num; row++)
	{
		for (int col = 0; col < num; col++)
		{
			if (row == 0 || row == num - 1 || col == 0 || col == num - 1) {
				cout << "* ";
			}
			else if (row == num / 4 && col <= num / 4 || row == num / 4 && col >= 3 * num / 4 || row <= num / 4 && col == num / 4 || row <= num / 4 && col == 3 * num / 4) {
				cout << "* ";
			}
			else if (row == 3 * num / 4 && col <= num / 4 || row == 3 * num / 4 && col >= 3 * num / 4 || row >= 3 * num / 4 && col == 3 * num / 4 || row >= 3 * num / 4 && col == num / 4) {
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
//EXERCISE 5
/*
#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Kvadratin olcusunu daxil edin: ";
	cin >> num;
	cout << "\n\n";
	for (int row = 0; row < num; row++)
	{
		for (int col = 0; col < num; col++)
		{
			if (row == 0 || row == num - 1 || col == 0 || col == num - 1) {
				cout << "* ";
			}
			else if (row == col || row + col == num - 1) {
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
//--------------------------------------------------------------
//EXERCISE 6
//İstənilən böyüklükdə ədədin polindrom olub, olmadığını yoxlayan program yazın.
/*
#include<iostream>
using namespace std;
int main() {
	long long eded, num, eks = 0, n = 0;
	cout << "Eded daxil edin: ";
	cin >> eded;
	for (long long n = eded; n != 0; n = n / 10) {
		num = n % 10;
		eks = (eks * 10) + num;
	}
	cout << " Ededin eksi: " << eks << endl;
	if (eded == eks) {
		cout << " Eded polindromdur.";
	}
	else {
		cout << " Eded polindrom deyil.";
	}
}
*/

