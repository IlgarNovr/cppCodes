#include<iostream>
using namespace std;
int main() {
	int p;
	char x = 120, o = 111;
	char a = 49, b = 50, c = 51, d = 52, e = 53, f = 54, g = 55, h = 56, k = 57;
	cout << a << "  \|" << b << "  \|" << c << "  \n";
	cout << "----------\n";
	cout << d << "  \|" << e << "  \|" << f << "  \n";
	cout << "----------\n";
	cout << g << "  \|" << h << "  \|" << k << "  \n";
	cout << "YER: ";
	cin >> p;
	switch (p) {
	case 1:  cout << "x || o :"; cin >> a;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 2:  cout << "x || o :"; cin >> b;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 3:  cout << "x || o :"; cin >> c;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 4:  cout << "x || o :"; cin >> d;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 5:  cout << "x || o :"; cin >> e;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 6:  cout << "x || o :"; cin >> f;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 7:  cout << "x || o :"; cin >> g;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 8:  cout << "x || o :"; cin >> h;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 9:  cout << "x || o :"; cin >> k;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	}
	if ((a == o && b == o && c == o) || (d == o && e == o && f == o) || (g == o && h == o && k == o) ||
		(a == o && d == o && g == o) || (b == o && e == o && h == o) || (c == o && f == o && k == o) ||
		(a == o && e == o && k == o) || (c == o && e == o && g == o)) {
		cout << "QALIB  O ";
		return 0;
	}
	else if ((a == x && b == x && c == x) || (d == x && e == x && f == x) || (g == x && h == x && k == x) ||
		(a == x && d == x && g == x) || (b == x && e == x && h == x) || (c == x && f == x && k == x) ||
		(a == x && e == x && k == x) || (c == x && e == x && g == x)) {
		cout << "QALIB  X ";
		return 0;
	}
	else cout << "QALIB YOXDUR...\n";
	cout << "YER: ";
	cin >> p;
	switch (p) {
	case 1:  cout << "x || o :"; cin >> a;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 2:  cout << "x || o :"; cin >> b;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 3:  cout << "x || o :"; cin >> c;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 4:  cout << "x || o :"; cin >> d;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 5:  cout << "x || o :"; cin >> e;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 6:  cout << "x || o :"; cin >> f;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 7:  cout << "x || o :"; cin >> g;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 8:  cout << "x || o :"; cin >> h;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 9:  cout << "x || o :"; cin >> k;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	}
	if ((a == o && b == o && c == o) || (d == o && e == o && f == o) || (g == o && h == o && k == o) ||
		(a == o && d == o && g == o) || (b == o && e == o && h == o) || (c == o && f == o && k == o) ||
		(a == o && e == o && k == o) || (c == o && e == o && g == o)) {
		cout << "QALIB  O ";
		return 0;
	}
	else if ((a == x && b == x && c == x) || (d == x && e == x && f == x) || (g == x && h == x && k == x) ||
		(a == x && d == x && g == x) || (b == x && e == x && h == x) || (c == x && f == x && k == x) ||
		(a == x && e == x && k == x) || (c == x && e == x && g == x)) {
		cout << "QALIB  X ";
		return 0;
	}
	else cout << "QALIB YOXDUR...\n";
	cout << "YER: ";
	cin >> p;
	switch (p) {
	case 1:  cout << "x || o :"; cin >> a;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 2:  cout << "x || o :"; cin >> b;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 3:  cout << "x || o :"; cin >> c;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 4:  cout << "x || o :"; cin >> d;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 5:  cout << "x || o :"; cin >> e;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 6:  cout << "x || o :"; cin >> f;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 7:  cout << "x || o :"; cin >> g;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 8:  cout << "x || o :"; cin >> h;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 9:  cout << "x || o :"; cin >> k;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	}
	if ((a == o && b == o && c == o) || (d == o && e == o && f == o) || (g == o && h == o && k == o) ||
		(a == o && d == o && g == o) || (b == o && e == o && h == o) || (c == o && f == o && k == o) ||
		(a == o && e == o && k == o) || (c == o && e == o && g == o)) {
		cout << "QALIB  O ";
		return 0;
	}
	else if ((a == x && b == x && c == x) || (d == x && e == x && f == x) || (g == x && h == x && k == x) ||
		(a == x && d == x && g == x) || (b == x && e == x && h == x) || (c == x && f == x && k == x) ||
		(a == x && e == x && k == x) || (c == x && e == x && g == x)) {
		cout << "QALIB  X ";
		return 0;
	}
	else cout << "QALIB OLMADI...\n";
	cout << "YER: ";
	cin >> p;
	switch (p) {
	case 1:  cout << "x || o :"; cin >> a;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 2:  cout << "x || o :"; cin >> b;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 3:  cout << "x || o :"; cin >> c;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 4:  cout << "x || o :"; cin >> d;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 5:  cout << "x || o :"; cin >> e;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 6:  cout << "x || o :"; cin >> f;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 7:  cout << "x || o :"; cin >> g;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 8:  cout << "x || o :"; cin >> h;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 9:  cout << "x || o :"; cin >> k;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	}
	if ((a == o && b == o && c == o) || (d == o && e == o && f == o) || (g == o && h == o && k == o) ||
		(a == o && d == o && g == o) || (b == o && e == o && h == o) || (c == o && f == o && k == o) ||
		(a == o && e == o && k == o) || (c == o && e == o && g == o)) {
		cout << "QALIB  O ";
		return 0;
	}
	else if ((a == x && b == x && c == x) || (d == x && e == x && f == x) || (g == x && h == x && k == x) ||
		(a == x && d == x && g == x) || (b == x && e == x && h == x) || (c == x && f == x && k == x) ||
		(a == x && e == x && k == x) || (c == x && e == x && g == x)) {
		cout << "QALIB  X ";
		return 0;
	}
	else cout << "QALIB YOXDUR...\n";
	cout << "YER: ";
	cin >> p;
	switch (p) {
	case 1:  cout << "x || o :"; cin >> a;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 2:  cout << "x || o :"; cin >> b;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 3:  cout << "x || o :"; cin >> c;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 4:  cout << "x || o :"; cin >> d;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 5:  cout << "x || o :"; cin >> e;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 6:  cout << "x || o :"; cin >> f;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 7:  cout << "x || o :"; cin >> g;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 8:  cout << "x || o :"; cin >> h;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 9:  cout << "x || o :"; cin >> k;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	}
	if ((a == o && b == o && c == o) || (d == o && e == o && f == o) || (g == o && h == o && k == o) ||
		(a == o && d == o && g == o) || (b == o && e == o && h == o) || (c == o && f == o && k == o) ||
		(a == o && e == o && k == o) || (c == o && e == o && g == o)) {
		cout << "QALIB  O ";
		return 0;
	}
	else if ((a == x && b == x && c == x) || (d == x && e == x && f == x) || (g == x && h == x && k == x) ||
		(a == x && d == x && g == x) || (b == x && e == x && h == x) || (c == x && f == x && k == x) ||
		(a == x && e == x && k == x) || (c == x && e == x && g == x)) {
		cout << "QALIB  X ";
		return 0;
	}
	else cout << "QALIB YOXDUR...\n";
	cout << "YER: ";
	cin >> p;
	switch (p) {
	case 1:  cout << "x || o :"; cin >> a;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 2:  cout << "x || o :"; cin >> b;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 3:  cout << "x || o :"; cin >> c;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 4:  cout << "x || o :"; cin >> d;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 5:  cout << "x || o :"; cin >> e;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 6:  cout << "x || o :"; cin >> f;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 7:  cout << "x || o :"; cin >> g;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 8:  cout << "x || o :"; cin >> h;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 9:  cout << "x || o :"; cin >> k;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	}
	if ((a == o && b == o && c == o) || (d == o && e == o && f == o) || (g == o && h == o && k == o) ||
		(a == o && d == o && g == o) || (b == o && e == o && h == o) || (c == o && f == o && k == o) ||
		(a == o && e == o && k == o) || (c == o && e == o && g == o)) {
		cout << "QALIB  O ";
		return 0;
	}
	else if ((a == x && b == x && c == x) || (d == x && e == x && f == x) || (g == x && h == x && k == x) ||
		(a == x && d == x && g == x) || (b == x && e == x && h == x) || (c == x && f == x && k == x) ||
		(a == x && e == x && k == x) || (c == x && e == x && g == x)) {
		cout << "QALIB  X ";
		return 0;
	}
	else cout << "QALIB YOXDUR...\n";
	cout << "YER: ";
	cin >> p;
	switch (p) {
	case 1:  cout << "x || o :"; cin >> a;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 2:  cout << "x || o :"; cin >> b;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 3:  cout << "x || o :"; cin >> c;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 4:  cout << "x || o :"; cin >> d;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 5:  cout << "x || o :"; cin >> e;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 6:  cout << "x || o :"; cin >> f;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 7:  cout << "x || o :"; cin >> g;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 8:  cout << "x || o :"; cin >> h;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 9:  cout << "x || o :"; cin >> k;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	}
	if ((a == o && b == o && c == o) || (d == o && e == o && f == o) || (g == o && h == o && k == o) ||
		(a == o && d == o && g == o) || (b == o && e == o && h == o) || (c == o && f == o && k == o) ||
		(a == o && e == o && k == o) || (c == o && e == o && g == o)) {
		cout << "QALIB  O ";
		return 0;
	}
	else if ((a == x && b == x && c == x) || (d == x && e == x && f == x) || (g == x && h == x && k == x) ||
		(a == x && d == x && g == x) || (b == x && e == x && h == x) || (c == x && f == x && k == x) ||
		(a == x && e == x && k == x) || (c == x && e == x && g == x)) {
		cout << "QALIB  X ";
		return 0;
	}
	else cout << "QALIB YOXDUR...\n";
	cout << "YER: ";
	cin >> p;
	switch (p) {
	case 1:  cout << "x || o :"; cin >> a;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 2:  cout << "x || o :"; cin >> b;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 3:  cout << "x || o :"; cin >> c;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 4:  cout << "x || o :"; cin >> d;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 5:  cout << "x || o :"; cin >> e;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 6:  cout << "x || o :"; cin >> f;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 7:  cout << "x || o :"; cin >> g;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 8:  cout << "x || o :"; cin >> h;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 9:  cout << "x || o :"; cin >> k;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	}

	if ((a == o && b == o && c == o) || (d == o && e == o && f == o) || (g == o && h == o && k == o) ||
		(a == o && d == o && g == o) || (b == o && e == o && h == o) || (c == o && f == o && k == o) ||
		(a == o && e == o && k == o) || (c == o && e == o && g == o)) {
		cout << "QALIB  O ";
		return 0;
	}
	else if ((a == x && b == x && c == x) || (d == x && e == x && f == x) || (g == x && h == x && k == x) ||
		(a == x && d == x && g == x) || (b == x && e == x && h == x) || (c == x && f == x && k == x) ||
		(a == x && e == x && k == x) || (c == x && e == x && g == x)) {
		cout << "QALIB  X ";
		return 0;
	}
	else cout << "QALIB YOXDUR...\n";
	cout << "YER: ";
	cin >> p;
	switch (p) {
	case 1:  cout << "x || o :"; cin >> a;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 2:  cout << "x || o :"; cin >> b;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 3:  cout << "x || o :"; cin >> c;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 4:  cout << "x || o :"; cin >> d;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 5:  cout << "x || o :"; cin >> e;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 6:  cout << "x || o :"; cin >> f;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 7:  cout << "x || o :"; cin >> g;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 8:  cout << "x || o :"; cin >> h;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	case 9:  cout << "x || o :"; cin >> k;
		cout << a << "  \|" << b << "  \|" << c << "  \n";
		cout << "----------\n";
		cout << d << "  \|" << e << "  \|" << f << "  \n";
		cout << "----------\n";
		cout << g << "  \|" << h << "  \|" << k << "  \n";
		break;
	}

	if ((a == o && b == o && c == o) || (d == o && e == o && f == o) || (g == o && h == o && k == o) ||
		(a == o && d == o && g == o) || (b == o && e == o && h == o) || (c == o && f == o && k == o) ||
		(a == o && e == o && k == o) || (c == o && e == o && g == o)) {
		cout << "QALIB  O ";
		return 0;
	}
	else if ((a == x && b == x && c == x) || (d == x && e == x && f == x) || (g == x && h == x && k == x) ||
		(a == x && d == x && g == x) || (b == x && e == x && h == x) || (c == x && f == x && k == x) ||
		(a == x && e == x && k == x) || (c == x && e == x && g == x)) {
		cout << "QALIB  X ";
		return 0;
	}
	else cout << "HEC BIRI QALIB OLMADI! OYUN BITTI!\n";
	return 0;
}