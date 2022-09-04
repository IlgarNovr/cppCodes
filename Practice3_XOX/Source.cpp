#include<iostream>
#include<windows.h>
using namespace std;
int main() {
	int p, over = 0;
	int round = 0;
	char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', k = '9';
	while (over<1) {
		system("cls");
		cout << "\t\t\t ~~~ XOX oyunu ~~~ \n\n";
		cout << " $ Player : X \t $ Computer : O \n\n";
		cout << " Round : " << round;
		cout << "\n\n" << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		cout << "\nPlayer : ";
		cin >> p;
		//Player:
		switch (p)
		{
		case 1: if (a == '1') { a = 'X'; round++; }
			  else { system("cls"); cout << "Bu xana secilib, yeni xana secin!"; Sleep(1500); continue; }
			  break;
		case 2: if (b == '2') { b = 'X'; round++; }
			  else { system("cls"); cout << "Bu xana secilib, yeni xana secin!"; Sleep(1500); continue; }
			  break;
		case 3: if (c == '3') { c = 'X'; round++; }
			  else { system("cls"); cout << "Bu xana secilib, yeni xana secin!"; Sleep(1500); continue; }
			  break;
		case 4: if (d == '4') { d = 'X'; round++; }
			  else { system("cls"); cout << "Bu xana secilib, yeni xana secin!"; Sleep(1500); continue; }
			  break;
		case 5: if (e == '5') { e = 'X'; round++; }
			  else { system("cls"); cout << "Bu xana secilib, yeni xana secin!"; Sleep(1500); continue; }
			  break;
		case 6: if (f == '6') { f = 'X'; round++; }
			  else { system("cls"); cout << "Bu xana secilib, yeni xana secin!"; Sleep(1500); continue; }
			  break;
		case 7: if (g == '7') { g = 'X'; round++; }
			  else { system("cls"); cout << "Bu xana secilib, yeni xana secin!"; Sleep(1500); continue; }
			  break;
		case 8: if (h == '8') { h = 'X'; round++; }
			  else { system("cls"); cout << "Bu xana secilib, yeni xana secin!"; Sleep(1500); continue; }
			  break;
		case 9: if (k == '9') { k = 'X'; round++; }
			  else { system("cls"); cout << "Bu xana secilib, yeni xana secin!"; Sleep(1500); continue; }
			  break;
		default:
			system("cls");
			cout << "1-9 araliginda eded daxil edin!";
			Sleep(1500);
			continue;
			break;
		}
		// Bot:
		switch (round) {
		case 1:
			if (e != '5') {
				a = 'O';
			}
			else {
				e = 'O';
			}
			break;
		case 2:
			if (b == 'X' && c == 'X' || k == 'X' && e == 'X' || d == 'X' && g == 'X') {
				if (a == '1') { a = 'O'; }
				else {
					if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && c == 'X' || h == 'X' && e == 'X') {
				if (b == '2') { b = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && b == 'X' || g == 'X' && e == 'X' || f == 'X' && k == 'X') {
				if (c == '3') { c = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && g == 'X' || f == 'X' && e == 'X') {
				if (d == '4') { d = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && k == 'X' || b == 'X' && h == 'X' || c == 'X' && g == 'X' || d == 'X' && f == 'X') {
				if (e == '5') { e = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (c == 'X' && k == 'X' || d == 'X' && e == 'X') {
				if (f == '6') { f = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && d == 'X' || c == 'X' && e == 'X' || h == 'X' && k == 'X') {
				if (g == '7') { g = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (g == 'X' && k == 'X' || b == 'X' && e == 'X') {
				if (h == '8') { h = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && e == 'X' || c == 'X' && f == 'X' || g == 'X' && h == 'X') {
				if (k == '9') { k = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
				}
			}
			break;
		case 3:
			if (b == 'X' && c == 'X' || k == 'X' && e == 'X' || d == 'X' && g == 'X') {
				if (a == '1') { a = 'O'; }
				else {
					if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && c == 'X' || h == 'X' && e == 'X') {
				if (b == '2') { b = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && b == 'X' || g == 'X' && e == 'X' || f == 'X' && k == 'X') {
				if (c == '3') { c = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && g == 'X' || f == 'X' && e == 'X') {
				if (d == '4') { d = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && k == 'X' || b == 'X' && h == 'X' || c == 'X' && g == 'X' || d == 'X' && f == 'X') {
				if (e == '5') { e = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (c == 'X' && k == 'X' || d == 'X' && e == 'X') {
				if (f == '6') { f = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && d == 'X' || c == 'X' && e == 'X' || h == 'X' && k == 'X') {
				if (g == '7') { g = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (g == 'X' && k == 'X' || b == 'X' && e == 'X') {
				if (h == '8') { h = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && e == 'X' || c == 'X' && f == 'X' || g == 'X' && h == 'X') {
				if (k == '9') { k = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
				}
			}
			break;
		case 4:
			if (b == 'X' && c == 'X' || k == 'X' && e == 'X' || d == 'X' && g == 'X') {
				if (a == '1') { a = 'O'; }
				else {
					if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && c == 'X' || h == 'X' && e == 'X') {
				if (b == '2') { b = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && b == 'X' || g == 'X' && e == 'X' || f == 'X' && k == 'X') {
				if (c == '3') { c = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && g == 'X' || f == 'X' && e == 'X') {
				if (d == '4') { d = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && k == 'X' || b == 'X' && h == 'X' || c == 'X' && g == 'X' || d == 'X' && f == 'X') {
				if (e == '5') { e = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (c == 'X' && k == 'X' || d == 'X' && e == 'X') {
				if (f == '6') { f = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && d == 'X' || c == 'X' && e == 'X' || h == 'X' && k == 'X') {
				if (g == '7') { g = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (h == '8') { h = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (g == 'X' && k == 'X' || b == 'X' && e == 'X') {
				if (h == '8') { h = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (k == '9') { k = 'O'; }
				}
			}
			else if (a == 'X' && e == 'X' || c == 'X' && f == 'X' || g == 'X' && h == 'X') {
				if (k == '9') { k = 'O'; }
				else {
					if (a == '1') { a = 'O'; }
					else if (b == '2') { b = 'O'; }
					else if (c == '3') { c = 'O'; }
					else if (d == '4') { d = 'O'; }
					else if (e == '5') { e = 'O'; }
					else if (f == '6') { f = 'O'; }
					else if (g == '7') { g = 'O'; }
					else if (h == '8') { h = 'O'; }
				}
			}
			break;
		}
		//Qalib:
		if ((a == 'O' && b == 'O' && c == 'O') || (d == 'O' && e == 'O' && f == 'O') || (g == 'O' && h == 'O' && k == 'O') ||
			(a == 'O' && d == 'O' && g == 'O') || (b == 'O' && e == 'O' && h == 'O') || (c == 'O' && f == 'O' && k == 'O') ||
			(a == 'O' && e == 'O' && k == 'O') || (c == 'O' && e == 'O' && g == 'O')) {
			cout << "\n ~~~ QALIB  O ";
			cout << "Oyunun  sonu : ";
			cout << "\n\n" << a << "  \|" << b << "  \|" << c << "  \n";
			cout << "----------\n";
			cout << d << "  \|" << e << "  \|" << f << "  \n";
			cout << "----------\n";
			cout << g << "  \|" << h << "  \|" << k << "  \n";
			cout << "\n ~~~ QALIB  BOT - O ";
			break;
		}
		else if ((a == 'X' && b == 'X' && c == 'X') || (d == 'X' && e == 'X' && f == 'X') || (g == 'X' && h == 'X' && k == 'X') ||
			(a == 'X' && d == 'X' && g == 'X') || (b == 'X' && e == 'X' && h == 'X') || (c == 'X' && f == 'X' && k == 'X') ||
			(a == 'X' && e == 'X' && k == 'X') || (c == 'X' && e == 'X' && g == 'X')) {
			cout << "Oyunun  sonu : ";
			cout << "\n\n" << a << "  \|" << b << "  \|" << c << "  \n";
			cout << "----------\n";
			cout << d << "  \|" << e << "  \|" << f << "  \n";
			cout << "----------\n";
			cout << g << "  \|" << h << "  \|" << k << "  \n";
			cout << " \n~~~ QALIB  PLAYER - X ";

			break;
		}
		else if (round == 5) {
			cout << "Oyunun  sonu : ";
			cout << "\n\n" << a << "  \|" << b << "  \|" << c << "  \n";
			cout << "----------\n";
			cout << d << "  \|" << e << "  \|" << f << "  \n";
			cout << "----------\n";
			cout << g << "  \|" << h << "  \|" << k << "  \n";
			cout << "\t\t\n\n\n<<<<<~~~ Berabere ~~~>>>>>\n";
			break;
		}
	}
}