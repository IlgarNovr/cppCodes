#include<iostream>
using namespace std;
int main() {

	//1. AZN-i seçimdən asılı olaraq (1,2 və ya 3 ) Avroya, Dollara , Rubla çevirən program yazın. (1 - Avro, 2 - Dollar və s.)
	/*
	int x, y;
	cout << "AZN : ";
	cin >> x;
	cout << "mezenne secin(1-Avro,2-Dollar,3-Rubl): ";
	cin >> y;
	switch (y)
	{
	case 1:cout << x * 0.5 << " Avro";
		break;
	case 2:cout << x * 0.6 << " Dollar";
		break;
	case 3:cout << x * 44.2 << " Rubl";
		break;
	}
	*/


	//1. Düz xəttin absis və ya ordinat oxuna paralel olub olmamasını yoxlayın.
	/*
	int k;
	cout << "bucaq emsali= ";
	cin >> k;
	if (k == 0) {
		cout << "Duz xett absis oxuna paraleldir.";
	}
	else if (k == 1) {
		cout << "Duz xett ordinat oxuna paraleldir.";
	}
	else cout << "Duz xett ne absis ne de ordinat oxuna paralel deyil.";
	*/


	//2. Endirimi hesablayan program yazırıq. İstifadəçi qiyməti və qramı daxil edir.
	//	100qr - 3 %, 200 qr - 5 %, 300 və daha çox 7 % endirim edilir.
	/*
	int a, b;
	cout << "Qiymet: ";
	cin >> a;
	cout << "Qram: ";
	cin >> b;
	if (b > 0 && b <= 100) {
		cout << a * 0.97;
	}
	else if (b > 100 && b <= 200) {
		cout << a * 0.95;
	}
	else if (b > 200 && b <= 300) {
		cout << a * 0.93;
	}
	else cout << a * 0.93;
	*/


	//3. Kəsr ədədin tam hissəsinin olub olmadığını yoxlayan program yazın .
	/*
	float a;
	int b;
	cin >> a;
	b = int(a);
	if (b == 0) {
		cout << "Ededin tam hissesi yoxdur.";
	}
	else cout << "Ededin tam hissesi var: " << int(a);
	*/


	//4. Tarix və zaman daxil edilir, düzgün daxil edilib edilmədiyini yoxlayın ( Məsələn 25:62 saat daxil edilə bilməz)
	/*
	int a, b, c, d, e;
	char n1, n2, n3;
	cout << "Tarix: ";
	cin >> a >> n1 >> b >> n2 >> c;
	cout << "Zaman: ";
	cin >> d >> n3 >> e;
	if (a <= 0 || a > 31) {
		cout << "Bele gun daxil edile bilmez.\n";
	}
	if (b <= 0 || b > 12) {
		cout << "Bele ay daxil edile bilmez.\n";
	}		if (c <= 0) {
		cout << "Bele il daxil edile bilmez.\n";
	}			if (d < 0 || d > 24) {
		cout << "Bele saat daxil edile bilmez.\n";
	}				if (e < 0 || e > 60) {
		cout << "Bele saniye daxil edile bilmez.\n";
	}
	*/


	//5. İstifadəçi doğulduğu ay və günü daxil edir onun bürcünü tapan program yazın.
	// Turkiyedeki burclere uygun yazmisham.
	/*
	int x, y;
	cout << "Ay: ";
	cin >> x;
	cout << "Gun: ";
	cin >> y;
	switch (x) {
	case 1: 
		if(y>=1 && y<=19){
			cout << "YAY";
		}
		else if (y >= 20 && y <= 31) {
			cout << "OGLAk";
		}
		break;
	case 2:
		if (y >= 1 && y <= 15) {
			cout << "OGLAk";
		}
		else if (y >= 16 && y <= 28) {
			cout << "KOVA";
		}
		break;
	case 3:
		if (y >= 1 && y <= 12) {
			cout << "KOVA";
		}
		else if (y >= 13 && y <= 31) {
			cout << "BALIK";
		}
		break;
	case 4:
		if (y >= 1 && y <= 18) {
			cout << "BALIK";
		}
		else if (y >= 19 && y <= 31) {
			cout << "KOC";
		}
		break;
	case 5:
		if (y >= 1 && y <= 13) {
			cout << "KOC";
		}
		else if (y >= 14 && y <= 31) {
			cout << "BUGA";
		}
		break;
	case 6:
		if (y >= 1 && y <= 21) {
			cout << "BUGA";
		}
		else if (y >= 22 && y <= 31) {
			cout << "IKIZLER";
		}
		break;
	case 7:
		if (y >= 1 && y <= 20) {
			cout << "IKIZLER";
		}
		else if (y >= 21 && y <= 31) {
			cout << "YENGEC";
		}
		break;
	case 8:
		if (y >= 1 && y <= 10) {
			cout << "YENGEC";
		}
		else if (y >= 11 && y <= 31) {
			cout << "ASLAN";
		}
		break;
	case 9:
		if (y >= 1 && y <= 16) {
			cout << "ASLAN";
		}
		else if (y >= 17 && y <= 31) {
			cout << "BASAK";
		}
		break;
	case 10:
		if (y >= 1 && y <= 30) {
			cout << "BASAK";
		}
		else if (y == 31) {
			cout << "TEREZI";
		}
		break;
	case 11:
		if (y >= 1 && y <= 23) {
			cout << "TEREZI";
		}
		else if (y >= 24 && y <= 29) {
			cout << "AKREP";
		}
		else if (y == 30 || y == 31) {
			cout << "YILAN";
		}
		break;
	case 12:
		if (y >= 1 && y <= 17) {
			cout << "YILAN";
		}
		else if (y == 18 || y == 31) {
			cout << "YAY";
		}
		break;
	}
	*/
	
	//1. Tramvay və ya traleybus biletinin nömrəsi daxil edilir (6 rəqəmli), onun Xoşbəxt rəqəm
	//olub olmadığını yoxlayın.Xoşbəxt rəqəm - Soldaı 3 rəqəmin cəmi sağdakı 3 rəqəmin cəminə bərabərdir.
	/*
	int x, a, b, c, d, e, f;
	cin >> x;
	a = x / 100000;
	b = x / 10000 % 10;
	c = x / 1000 % 10;
	d = x / 100 % 10;
	e = x / 10 % 10;
	f = x % 10;
	if ((a + b + c) == (d + e + f)) {
		cout << "Xosbext reqem.";
	}
	else cout << "Bextinizi bir daha sinayin.";
	*/


	//2. Ekrana oyun menyusu çıxır , 3 seçimli (Yeni oyun, Oyunu davam etmək, Çıxış). Program istifadəçinin seçimini ekrana çıxarır.
	/*
	int x;
	cout << "1.Yeni oyun\n2.Oyunu davam etmək\n3.Cixis\n";
	cin >> x;
	switch (x) {
	case 1:cout << "Yeni oyun.";
		break;
	case 2:cout << "Oyuna davam etmek.";
		break;
	case 3:cout << "Cixis.";
		break;
	}
	*/


	//3. İstifadəçi yaşını və cinsini daxil edir, onun təqaüd yaşının olub olmadığını tapan program yazın.
	/*
	int x;
	char y;
	cout << "Yash: ";
	cin >> x;
	cout << "Cins: ";
	cin >> y;
	if (x == 65 && int(y) == 107) {
		cout << "Teqaud yashidir.";
	}
	else if (x == 62 && int(y) == 113) {
		cout << "Teqaud yashidir.";
	}
	else cout << "Teqaud yashi deyil.";
	*/

	//4. İstifadəçi saatı daxil edir , (saat və dəqiqə). Günün hissəsinə uyğun olaraq kompüter istifadəçini salamlayır. (məs : 09 : 00 - Sabahın xeyir)
	/*
	int x, y;
	cout << "Saat: ";
	cin >> x >> y;
	if (x >= 0 && x < 6 && y >= 0 && y < 60) {
		cout << "Geceniz xeyre.";
	}
	else if (x >= 6 && x < 12 && y >= 0 && y < 60) {
		cout << "Sabahiniz xeyir.";
	}
	else if (x >= 12 && x < 18 && y >= 0 && y < 60) {
		cout << "Gunortaniz xeyir.";
	}
	else if (x >= 18 && x < 24 && y >= 0 && y < 60) {
		cout << "Axshaminiz xeyir.";
	}
	*/


	//5. İl daxil edilir onun uzun il olub olmamasını yoxlayın. (Uzun il , 400ə bölünür və ya 4ə bölünüb 100 - ə bölünmür)
	/*
	int x;
	cout << "Il: ";
	cin >> x;
	if (x % 400 == 0 || x % 4 == 0 && x % 100 != 0) {
		cout << "Uzun ildir.";
	}
	else cout << "Uzun il deyil";
	*/


	//6. Istənilən tarix daxil edilir. Ondan sonraki günü ekrana çıxaran program yazın.
	/*
	int x;
	cout << "Heftenin gunu: ";
	cin >> x;
	cout << "Sonraki gun: ";
	if (x >= 1 && x < 7) {
		cout << x + 1;
	}
	else if (x == 7) {
		cout << 1;
	}
	else cout << "Heftede bele gun ola bimez.";
	*/


	//7. İdeal çəki hesablayan program yazın. İstifadəçi boy və çəkini daxil edir, neçə kq almalı
	//və ya atmalı olduğunu program istifadəçiyə deyir. (ideal çəki = boy - 110)
	/*
	int x, y;
	cout << "Boy: ";
	cin >> x;
	cout << "Ceki: ";
	cin >> y;
	if (y < x - 110) {
		cout << (x - 110) - y << " kq alinmalidir.";
	}
	else if (y > x - 110) {
		cout << y - (x - 110) << " kq verilmelidir.";
	}
	else cout << "Ideal ceki.";
	*/


	//8. İstifadəçi beşrəqəmli ədəd daxil edir, əgər ədədin bütün rəqəmləri sadədirsə, istifadəçiyə
	//bu haqda məlumat verilir. (sadə rəqəmlər - yalnız 1 - ə və özünə bölünə bilən ədədlər)
	/*
	int x, a, b, c, d, e;
	cin >> x;
	a = x / 10000;
	b = x / 1000 % 10;
	c = x / 100 % 10;
	d = x / 10 % 10;
	e = x % 10;
	if ((a == 2 || a == 3 || a == 5 || a == 7 || a == 9) && (b == 2 || b == 3 || b == 5 || b == 7 || b == 9) && (c == 2 || c == 3 || c == 5 || c == 7 || c == 9) && (d == 2 || d == 3 || d == 5 || d == 7 || d == 9) && (e == 2 || e == 3 || e == 5 || e == 7 || e == 9)) {
		cout << "Butun reqemleri sadedir.";
	}
	else cout << "Butun reqemleri sade deyil.";
	*/


	/*9. İstiadəmi 0-dan 35-ə kimi ədəd daxil edir . 36-ədədlik oyun kartlarına uyğun olaraq, bu
		ədədə uyğun işarəni (ürək, xaç,pika, kərpic) və onun dəyərini (
		6,7,8,9,10,valet,dama,karol,tuz) qaytaran program yazın. (36 if və ya 36 switch lazım
		deyil) . Başqa yollarla yazmağı yoxlayın . ( ardıcıllıq , ÜRƏK,PİKA,KƏRPİC,XAÇ.
		Məsələn 11 yazılsa, ekrana 8 pika yazısı çıxmalıdır, 0 daxil olunarsa - 6Ürək və s.)
	*/
	/*
	int x;
	cin >> x;
	if (x == 0 || x == 9 || x == 18 || x == 27) {
		cout << "6 ";
	}
	else if (x == 1 || x == 10 || x == 19 || x == 28) {
		cout << "7 ";
	}
	else if (x == 2 || x == 11 || x == 20 || x == 29) {
		cout << "8 ";
	}
	else if (x == 3 || x == 12 || x == 21 || x == 30) {
		cout << "9 ";
	}
	else if (x == 4 || x == 13 || x == 22 || x == 31) {
		cout << "10 ";
	}
	else if (x == 5 || x == 14 || x == 23 || x == 32) {
		cout << "valet ";
	}
	else if (x == 6 || x == 15 || x == 24 || x == 33) {
		cout << "dama ";
	}
	else if (x == 7 || x == 16 || x == 25 || x == 34) {
		cout << "karol ";
	}
	else if (x == 8 || x == 17 || x == 26 || x == 35) {
		cout << " tuz ";
	}
	if (x >= 0 && x <= 8) {
		cout << "urek";
	}
	else if (x >= 9 && x <= 17) {
		cout << "pika";
	}
	else if (x >= 18 && x <= 26) {
		cout << "kerpic";
	}
	else if (x >= 27 && x <= 35) {
		cout << "xac";
	}
	*/
}