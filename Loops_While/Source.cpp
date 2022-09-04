//1. Ekrana bütün ASCİİ kod cədvəlini çıxaran program yazın.
/*
#include <iostream>
using namespace std;
int main() {
	int n=0;
	while (n <= 255) {
		cout << char(n) <<" ";
		n++;
	}
}
*/


//2. Ekrana istifadəçinin daxil etdiyi say qədər, ulduzlardan üfiqi xətt çıxaran proqram yazın.
/*
#include <iostream>
using namespace std;
int main() {
	int say, i = 0;
	cin >> say;
	while (i<say) {
		cout << "* ";
		i++;
	}
}
*/


//3. Ekrana, 1 - 50 aralığındakı rəqəmlərdən ancaq cüt olanları çıxaran proqram yazın.
/*
#include <iostream>
using namespace std;
int main() {
	int eded = 2;
	while (eded<50) {
		cout << eded++ << " ";
		eded++;
	}
}
*/


//4. İstifadəçinin daxil etdiyi aralıqda(məs 10 və 30) cüt rəqəmlərin cəmini tək rəqəmlərin hasilini hesablayan proqram yazın.
/*
#include <iostream>
using namespace std;
int main() {
	int num1, num2,c;
	int hasil = 1;
	int cem = 0;
	cin >> num1 >> num2;
	c = num1 + 1;
	while (c < num2) {
		if (c % 2 == 0) {
			cem = cem + c;
		}
		else hasil = hasil * c;
		c++;
	}
	cout << cem << endl;
	cout << hasil;
}
*/


//5. 1 - 100 diapazonunda 3 - ə bölünüən bütün ədədləri ekrana çıxaran proqram yazın.
/*
#include <iostream>
using namespace std;
int main() {
	int i=1;
	while (i < 100) {
		if (i % 3 == 0) {
			cout << i << " ";
		}
		i++;
	}
}
*/


//6. Ədədin faktorialını tapan proqram yazın.
/*
#include <iostream>
using namespace std;
int main() {
	int num, i = 1;
	cin >> num;
	int fak=num;
	while (i<num) {
		fak *=i;
		i++;
	}
	cout <<fak;
}
*/


//7. Ədədin üstünü hesablayan proqram yazın.
/*
#include <iostream>
using namespace std;
int main() {
	int num, ust,c=1;
	int i=0;
	cout << "eded : ";
	cin >> num;
	cout << "quvvet : ";
	cin >> ust;
	while (i<ust) {
		c = c * num;
		i++;
	}
	cout <<c;
}
*/


//8. İstifadəçi istənilən sayda rəqəmli ədəd daxil edir, onun rəqəmlərinin sayını və onların cəmini hesablayan proqram yazın.
/*
#include <iostream>
using namespace std;
int main() {
	int num, cem = 0, say = 0;
	cout << "eded : ";
	cin >> num;
	while (num>0) {
		cem = cem + num % 10;
		say++;
		num = num / 10;
	}
	cout << cem << "\n" << say;
}
*/


//9. İstifadəçi istənilən sayda rəqəmli ədəd daxil edir, ədədi əksinə çevirən proqram yazın.
/*
#include <iostream>
using namespace std;
int main() {
	int num1, num2 = 0;
	cout << "eded : ";
	cin >> num1;
	cout << "ededin tersi : ";
	while (num1>0) {
		num2=num1 % 10;
		cout << num2;
		num1 = num1 / 10;
	}
}
*/


//10. İstifadəçi tam ədəd daxil edir, bu ədədin qalıqsız bölündüyü bütün rəqəmləri ekrana çıxaran proqram yazın.
/*
#include <iostream>
using namespace std;
int main() {
	int num, n = 1;
	cout << "eded : ";
	cin >> num;
	cout << "qaliqsiz bolunduyu ededler : ";
	while (n<=num) {
		if (num % n == 0) {
			cout << n << " ";
		}
		n++;
	}
}
*/


//11. İstifadəçi tam ədəd daxil edir, bu ədədin sadə olub olmamasını tapan proqram yazın.
/*
#include<iostream>
using namespace std;
int main() {
	int num, i = 2, m = 0, a = 0;
	cin >> num;
	m = num / 2;
	if (num==1 || num==0) {
		cout << "Eded sade deyil!";
	}
	else {
		while (i <= m) {
			if (num % i == 0) {
				cout << "Eded sade deyil!";
				a = 1;
				break;
			}
			i++;
		}
		if (a == 0) {
			cout << "Eded sadedir!";
		}
	}
}
*/


//12. Daxil edilmiş ədəddə iki ard arda rəqəmin olub olmamasını yoxlayan proqram yazın./*#include <iostream>
using namespace std;
int main() {
	int num, num1 = 0, num2 = 0, a = 0;
	cout << "eded : ";
	cin >> num;
	while (num > 10) {
		num1 = num % 10;
		num = num / 10;
		if (num1 == (num % 10)+1 ) {
			a++;
		}
	}
	if (a >0) {
		cout << "Ard arda eded var";

	}
	else {
		cout << "Ard arda eded yoxdur";
	}
}*///13. İstifadəçi ədəd daxil edir, bu ədədin rəqəmlərinin artan ardıcıllıqla olub olmamasını yoxlayan proqram yazın./*#include <iostream>
using namespace std;
int main() {
	while (true) {
		int num = 0;
		int num1 = 0;
		cout << "Eded daxil edin: ";
		cin >> num;
		int count = 0;
		int r = 0;
		if (num < 10) {
			cout << "2 reqemli eded daxil edin";
		}
		else {
			while (num > 0) {
				num1 = num % 10;
				num /= 10;
				int b = num % 10;
				if (num1 >= b) {
					count++;
				}
				r++;
			}
			if (r == count) {
				cout << "artan \n";
			}
			else {
				cout << "azalan \n";
			}
		}
	}
}*/