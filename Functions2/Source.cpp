//1. Ədədin kubunu qaytaran funksiya yazın.
/*
#include<iostream>
using namespace std;
int kub(int eded) {
	cout << "Ededin kubu: ";
	return eded * eded * eded;
}
int main() {
	int num;
	cout << "Eded daxil edin: ";
	cin >> num;
	cout<<kub(num);
}
*/
//2. İki ədəddən böyüyünü tapan funksiya yazın.
/*
#include<iostream>
using namespace std;
int boyukeded(int num1,int num2) {
	cout << "Boyuk eded: ";
	if(num1>num2){
		return num1;
	}
	else if(num2>num1){
		return num2;
	}
}
int main() {
	int a, b;
	cout << "1-ci eded: ";
	cin >> a;
	cout << "2-ci eded: ";
	cin >> b;
	if (a == b) {
		cout << "Ededler beraberdir!";
	}
	else {
		cout << boyukeded(a, b);
	}
}
*/
//3. Ədəd müsbətdirsə doğru, mənfidirsə yanlış qaytaran funksiya yazın.
/*
#include<iostream>
using namespace std;
int eded(int num) {
	cout << "True(1) / false(0): ";
	if (num > 0) {
		return true;
	}
	else if (num < 0) {
		return false;
	}
}
int main() {
	int a;
	cout << "Eded daxil edin: ";
	cin >> a;
	if (a == 0) {
		cout << "Eded 0-dir";
	}
	else {
		cout << eded(a);
	}
}
*/
//4. İstifadəçinin seçimindən asılı olaraq Toplama, Çıxma, Vurma, Bölmə funksiyalarından birini çağıran, funksiya yazın.
/*
#include<iostream>
using namespace std;
float cem(int num1, int num2, int punkt) {
	switch (punkt) {
	case 1: return num1 + num2;
	case 2: return num1 - num2;
	case 3: return num1 * num2;
	case 4: return float(num1) / num2;
	}
}
int main() {
	int a, b, punkt;
	cout << "Ededleri daxil edin: ";
	cin >> a >> b;
	cout << "1)Toplama\n2)Cixma\n3)Vurma\n4)Bolme\n";
	cout << "Hesabla(1-4): ";
	cin >> punkt;
	if (punkt == 4 && b == 0) {
		cout << "Error";
	}
	else cout << cem(a, b, punkt);
}
*/
//5. Parametr kimi tərfinin uzunluğunu qəbul edən, və ekrana həmin ölçüdə kvadrat çıxaran funksiya yazın.
/*
#include<iostream>
using namespace std;
void kvadrat(int size) {
	for (size_t i = 0; i < size; i++){
		for (size_t j = 0; j < size; j++) {
			if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
}
int main() {
	int a;
	cout << "Terefin uzunlugu: ";
	cin >> a;
	kvadrat(a);
}
*/
//6. Göndərilən rəqəmin sadə olub olmadığını yoxlayan funksiya yazın.
/*
#include<iostream>
using namespace std;
void sadeeded(int num) {
	int i = 2, m = 0, a = 0;
	m = num / 2;
	if (num == 1 || num == 0) {
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
int main() {
	int b;
	cout << "Eded daxil edin: ";
	cin >> b;
	sadeeded(b);
}
*/
//7. Ədədin faktorialını qaytaran funksiya yazın.
/*
#include<iostream>
using namespace std;
int faktorial(int num) {
	int fak = 1;
	for (size_t i = 1; i <= num; i++){
		fak *= i;
	}
	return fak;
}
int main() {
	int a;
	cout << "Eded daxil edin: ";
	cin >> a;
	cout<<faktorial(a);
}
*/
//8. İki parametr qəbul edən : Üst və Qüvvət, və ədədin qüvvətini qaytaran funksiya yazın.
/*#include<iostream>
using namespace std;
int quvvet(int num,int ust) {
	int quv = 1;
	for (size_t i = 0; i <ust; i++){
		quv *= num;
	}
	return quv;
}
int main() {
	int a, b;
	cout << "Eded daxil edin: ";
	cin >> a;
	cout << "Ust daxil edin: ";
	cin >> b;
	cout<<quvvet(a,b);
}*///9. Funksiya 2 ədəd qəbul edir və bunlar arasındakı bütün ədədləri toplayıb qaytarır./*#include<iostream>
using namespace std;
int cemi(int num1,int num2) {
	int cem = 0;
	if (num1 < num2) {
		for (size_t i = num1; i < num2; i++) {
			cem += i;
		}
	}
	else {
		for (size_t i = num2; i < num1; i++){
			cem += i;
		}
	}
	return cem;
}
int main() {
	int a, b;
	cout << "1-ci eded: ";
	cin >> a;
	cout << "2-ci eded: ";
	cin >> b;
	cout<<cemi(a,b);
}*/