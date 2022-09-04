#include<iostream>
using namespace std;
int main() {
	
	//1. İstifadəçi kq daxil edir, Kilogramı Gallona çevirən proqram yazın.
	/*
	float a;
	const float g = 3.78;
	cin >> a;
	cout << a * g << " Gallon";
	*/

	//2. İstifadəçi konsertin biletinin qiymətini və konsertə gedəcək böyüklərin və uşaqların (ayrı-ayrı) sayını daxil edir. 
	//Ümumi xərclənəcək məbləği ekrana çıxarın. (Uşaqlara bilet 40faiz ucuzdur)
	/*
	int a1, a2;
	float n;
	cin >> n >> a1 >> a2;
	cout << (a1 * n) + (a2 * n * 0.6);
	*/

	//3. İstifadəçi banka qoyacağı pulu və İLLİK üzərinə gəlinəcək faizi daxil edir. 
	//Ekrana faizdən AYLIQ gələcək gəliri hesablayan proqram yazın.
	/*
	int p, f;
	cin >> p >> f;
	cout << p + (p * f / 100);
	*/

	//4. İstifadəçi klaviaturadan məsafəni, hər 100 km-ə benzin sərfiyyatını və üç növ benizinin qiymətini daxil edir.
	//Benzinin müxtəlif növləri üçün gedişin müqayisəli qiymətlər cədvəlini ekrana çıxarın. 
	/*
	float l, a92, a95, p;
	cin >> l >> a92 >> a95 >> p;
	cout << "A-92: " << a92 * l << "AZN" << '\n';
	cout << "A-95: " << a95 * l << "AZN" << '\n';
	cout << "Premium: " << p * l << "AZN";
	*/

	//5. Otağın eni, uzunluğu, hündürlüyü daxil edilir.
	//Ekrana bu otağın divarlarını boyamaq üçün nə qədər rəng gedəcəyini hesablayan proqram yazmaq lazımdır.
	//. 1 m2 divar üçün 0.5 litr rəng gedir və divarların 20faizi pəncərə və qapıdır.
	/*
	float e, u, h;
	cin >> e >> u >> h;
	cout << 2 * ((e * h + u * h) * 0.8) * 0.5;
	*/

	//6. İstifadəçi üçrəqəmli ədəd daxil edir. Bu ədədin hər bir rəqəmini ayrı ayrı ekrana çıxarın. 
	/*
	int a, n1, n2, n3;
	cin >> a;
	n1 = a / 100;
	n2 = a % 100 / 10;
	n3 = a % 10;
	cout << n1 << " " << n2 << " " << n3;
	*/

	//7. Ekrana 3 rəqəmli ədəd daxil edilir. Onu tərsinə çevirin. 
	/*
	int a, n1, n2, n3;
	cin >> a;
	n1 = a / 100;
	n2 = a % 100 / 10;
	n3 = a % 10;
	cout << n3 << n2 << n1;
	*/

	//8. İstifadəçi 4 rəqəmli ədəd daxil edir. Bu ədədin 1 və 3-cü rəqəmlərinin cəmini, 2 və 4-cü rəqəmlərinin fərqini tapıb ekrana çıxaran proqram yazın.
	/*
	int a, n1, n2, n3, n4;
	cin >> a;
	n1 = a / 1000;
	n2 = a % 1000 / 100;
	n3 = a % 100 / 10;
	n4 = a % 10;
	cout << n1 + n3 << '\n';
	cout << n2 - n4;
	*/
	}