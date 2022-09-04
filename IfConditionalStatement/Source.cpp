#include<iostream>
using namespace std;
int main() {

	//1. Ədədin cüt və ya tək olmasını təyin edən program yazın.
	/*
	int a;
	cin >> a;
	if (a % 2 == 0) {
		cout << "eded cutdur";
	}
	else cout << "eded tekdir";
	*/


	//2. İki ədəd daxil edin onlardan kiçik olanı ekrana çıxarın.
	/*
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << b;
	}
	else if (b > a) {
		cout << a;
	}
	else cout << a;
	*/


	//3. Daxil edilən ədədin mənfi və ya müsbət olmasını təyin edən program yazın.
	/*
	int a;
	cin >> a;
	if (a > 0) {
		cout << " eded musbetdir";
	}
	else if (a < 0) {
		cout << "eded menfidir";
	}
	else cout << "eded sifirdir";
	*/


	//4. Kalkulyator düzəltməli.İki kəsr ədəd daxil edilir a və b.Ekrana seçimlər çıxır
	//	1) a + b
	//	2) a – b
	//	3) a* b
	//	4) a / b.
	/*
	float a, b;
	int c;
	cin >> a >> b >> c;
	if (c == 1) {
		cout << a + b;
	}
	else if (c == 2) {
		cout << a - b;
	}
	else if (c == 3) {
		cout << a * b;
	}
	else if (c == 4) {
		cout << a / b;
	}
	*/


	//5. İstifadəçi ədəd daxil edir, ədədin 1-50 aralığında olub olmadığını yoxlayan program yazın.
	/*
	float a;
	cin >> a;
	if (a >= 1 && a <= 50) {
		cout << "eded 1-50 araligindadir";
	}
	else cout << "eded 1-50 araliginda deyil";
	*/


	//6. İstifadəçi iki ədəd daxil edir. ( X və Y ) Əgər X Y-ə qalıqsız bölünürsə ekrana Yes çıxır, əks halda No.
	/*
	int x, y;
	cin >> x >> y;
	if (x % y == 0) {
		cout << "Yes";
	}
	else cout << "No";
	*/


	//7. İstifadəçi simvol daxil edir. Bu simvolun hərf və ya punktuasiya olub olmamasını təyin edin.
	//Hərfdirsə ekrana HƏRF, punktuasiyadırsa ekrana PUNKT çıxarılsın.
	/*
	char x;
	cin >> x;
	if (int(x) >= 33 && int(x) <= 47) {
		cout << "PUNKT";
	}
	else if (int(x) >= 58 && int(x) <= 64) {
		cout << "PUNKT";
	}
	else if (int(x) >= 91 && int(x) <= 96) {
		cout << "PUNKT";
	}
	else if (int(x) >= 123 && int(x) <= 126) {
		cout << "PUNKT";
	}
	else if (int(x) >= 65 && int(x) <= 90 || int(x) >= 97 && int(x) <= 122) {
		cout << "HERF";
	}
	else cout << "OTHERS";
	*/


	//8. İstifadəçi ədəd daxil edir. Onun 3-ə, 5-ə, 7-ə bölünüb bölünməməsini (qalıqsız) yoxlayın.(Ayrı-ayrı)
	/*
	int x;
	cin >> x;
	if (x % 3 == 0) {
		cout << "3-e qaliqisiz bolunur. \n";
	}
	else {
		cout << "3-e bolunmur. \n";
	}
	if (x % 5 == 0) {
		cout << "5-e qaliqisiz bolunur. \n";
	}
	else {
		cout << "5-e bolunmur. \n";
	}
	if (x % 7 == 0) {
		cout << "7-e qaliqisiz bolunur. \n";
	}
	else {
		cout << "7-e bolunmur. \n";
	}
	*/


	//9. Ədədin modulunu hesablayan program yazın.
	/*
	int x;
	cin >> x;
	cout << "ededin modulu: ";
	if (x >= 0) {
		cout << x;
	}
	else cout << 0 - x;
	*/


	//10. Maximum 4 rəqəmli ədəd daxil edilir. Ədədin neçə rəqəmdən ibarət olduğunu hesablayan program yazın.
	/*
	int x;
	cin >> x;
	if ((x >= 1000 && x <= 9999) || (x <= -1000 && x >= -9999)) {
		cout << "eded 4 reqemlidir";
	}
	else if ((x >= 100 && x <= 999) || (x <= -100 && x >= -999)) {
		cout << "eded 3 reqemlidir";
	}
	else if ((x >= 10 && x <= 99) || (x <= -10 && x >= -99)) {
		cout << "eded 2 reqemlidir";
	}
	else if ((x >= 0 && x <= 9) || (x <= 0 && x >= -9)) {
		cout << "eded 1 reqemlidir";
	}
	else cout << "ededin reqemlerinin sayi 4-den coxdur";
	*/


	//11. 5 rəqəmli ədəd daxil edilir. Onun ploindrom olub olmamasını təyin edən program yazın.
	/*
	int x, a, b, c, d, e;
	cin >> x;
	a = x / 10000;
	b = x / 1000 % 10;
	c = x / 100 % 10;
	d = x / 10 % 10;
	e = x % 10;
	if (x >= 10000 && x <= 99999) {
		if (a == e && b == d) {
			cout << "eded PLOINDRONDUR";
		}
		else cout << "eded PLOINDRON deyil ";
	}
	*/


	//12. Əvvəldən konstant şifrə saxlanılır. Istfiadəçi şifrə daxil edir , əgər şifrə bazadakı şifrəyə
	//bərabər olsa, ekrana, --Access succesfully completed-- çıxır, əks halda --Acces denied-- çıxır.
	/*
	const int x = 645727;
	int y;
	cin >> y;
	if (y == x) {
		cout << "--Access succesfully completed--";
	}
	else cout << "--Acces denied--";
	*/


	//13. Ümumi olaraq qəbul olunub ki , 1 insan yaşı 7 it yaşına bərabərdir ( 1 il = 7 il it üçün).
	//Amma bu sadə hesablama çox hallarda səhv hesab olunur çünki itlər öz yetkin yaşlarına 2 ilə çatırlar.
	//. Buna görə də, bəzi insanlar ilk iki il üçün itin yaşını 10.5 yaş olaraq
	//hesablamağı düzgün hesab edirlər, daha sonrakı illəri isə 4 ildən hesablayırlar. (məsələn 3 insan ili = 25 it ili)
	//Yuxarıda verilən məlumatlara görə insan ilini it ilinə çevirən program
	//yazmalısınız.Əmin olunki sizin program ilk iki il üçün ayrı sonrakı illər üçün ayrı
	//hesablamanı reallaşdırır.Əgər istifadəçi tərəfindən mənfi ədəd daxil edilərsə, 
	//Sizin programınız, istifadəçiyə mənfi ədəd daxil etdiyini bildirməlidir.
	/*
	int x;
	cout << "insan ili: ";
	cin >> x;
	if (x >= 0) {
		if (x == 1) {
			cout << 10.5 << " it ili";
		}
		else if (x == 2) {
			cout << 21 << " it ili";
		}
		else cout << 21 + (x - 2) * 4 << " it ili";
	}
	else cout << "menfi eded daxil edilmisdir";
	*/
}