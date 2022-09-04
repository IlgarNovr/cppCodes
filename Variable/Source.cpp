#include<iostream>
using namespace std;
int main() {
	//Exercise 1
	/*
	float a, b;
	cin >> a >> b;
	cout << "Tam hisse cemi: " << int(a) + int(b);
	cout << "\nKessr hisse cemi: " << (a + b) - (int(a) + int(b));
	*/

	//Exercise 2
	/*
	int a;
	cout << "Eded daxil edin:";
	cin >> a;
	cout << "Hemin ededin ASCII cedvelindeki xarakteri:";
	cout << char(a);
	*/

	//Exercise3
	/*
	double pul;
	cin >> pul;
	cout << int(pul) << " manat \n";
	cout << (pul - int(pul)) * 100 << " qepik";
	*/

	//Exercise 4
	/*
	double yuk, ton, kq, qr;
	cin >> yuk;
	ton = int(yuk);
	kq = int((yuk - ton) * 1000);
	qr = ((yuk - ton)*1000000 -(kq)* 1000);
	cout << ton << " Ton \n" << kq << " Kiloqram \n" << qr << " Qram";
	*/

	//Exercise 5
	/*
	float s, t, v;
	cout << "Mesafe(km): ";
	cin >> s;
	cout << "ZAman(saat): ";
	cin >> t;
	v = s / t;
	cout << "Suret(km/saat): " << v;
	*/

	//Exercise 6
	/*
    int saat1, saat2, deq1, deq2, san1, san2;
	float zaman;
	cin >> saat1 >> deq1 >> san1 >> saat2 >> deq2 >> san2;
	zaman = ((saat2 - saat1) * 60 + (deq2 - deq1) + (san2 - san1) / 60);
	cout << "Umumi qiymet: " << zaman * 20 << " Qepik";	
	*/
	
	
	//Exercise 7
	/*
	float azn, m1, m2, m3;
	cout << "Manat: ";
	cin >> azn;
	cout << "Dollarin mezennesi: ";
	cin >> m1;
	cout << "Avronun mezennesi: ";
	cin >> m2;
	cout << "Rublun mezennesi: ";
	cin >> m3;
	cout << "Dollar: " << int(azn / m1) << '\n';
	cout << "Avro: " << int(azn / m2) << '\n';
	cout << "Rubl: " << int(azn / m3);
	*/

	//Exercise 8
	/*
	int zaman, saat;
	cout << "kecen zaman: ";
	cin >> zaman;
	saat = zaman / 3600;
	cout << "tam saat: " << saat;
	*/

	//Exercise 9
	/*
	int a, b, c, d;
	cout << "Notebookun qiymeti: ";
	cin >> a;
	cout << "Sayi: ";
	cin >> b;
	cout << "Endirim faizi: ";
	cin >> c;
	d = a * b * (100 - c) / 100;
	cout << "Qiymet: " << d;
	*/


	//Exercise 10
	/*
	int azn, m;
	cout << "Ayliq satislarin cemi: ";
	cin >> azn;
	cout << "Dollarin mezennesi: ";
	cin >> m;
	cout << "Ayliq maas: " << 100 * m + azn * 5 / 100;
	*/
    }