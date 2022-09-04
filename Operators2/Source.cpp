#include<iostream>
using namespace std;
int main() {

	//1.İstifadəçi bir filmin gigabayt ilə ölçüsünü və internetin bit\saniyə ilə sürətini daxil edir.
	//Filmin hansı zaman ərzində yüklənəcəyini hesablayan program yazın. ( saat, dəqiqə,saniyə)
	/*
	long a, b, saat, deq, san;
	cin >> a >> b;
	saat = a * 8589934592 / b / 3600;
	deq = a * 8589934592 / b % 3600 / 60;
	san = a * 8589934592 / b % 3600 % 60;
	cout << saat << " saat\n" << deq << " deqiqe\n" << san << " saniye";
	*/

	//2.İstifadəçi flaş drive-ın gigabayt ilə ölçüsünü daxil edir. 
	//760 Megabaytlıq kinonun həmin flaşa neçə dəfə yerləşəcəyini tapan program yazın.
	/*
	int a;
	cout << "flash drive-in olcusu GB: ";
	cin >> a;
	cout << a * 1024 / 760 << " defe";
	*/

	//3.İstifadəçi imtahanı uğurla verən tələbələrin sayını və “borclu”ların sayını daxil edir. 
	//Sinifin neçə faiz borclulardan və neçə faiz uğurlu tələbələrdən ibarət olduğunu hesablayan program yazın.
	/*
	int a, b;
	cout << "Ugurlu telebelerin sayi: ";
	cin >> a;
	cout << "Borclu telebelerin sayi: ";
	cin >> b;
	cout << "Ugurlu telebeler: " << float(a) / (a + b) * 100 << "\%\n";
	cout << "Borclu telebeler: " << float(b) / (a + b) * 100 << "\%\n";
	*/

	//4.İstifadəçi günün başlanğıcından neçə saniyə keçdiyini daxil edir.
	//Günün sonuna neçə saat, dəqiqə və saniyə qaldığını hesablayan program yazın.
	/*
	int a, saat, deq, san;
	cin >> a;
	saat = (24 * 3600 - a) / 3600;
	deq = (24 * 3600 - a) % 3600 / 60;
	san = (24 * 3600 - a) % 3600 % 60;
	cout << saat << " saat\n" << deq << " deqiqe\n" << san << " saniye";
	*/

	//5.İstifadəçi filmin gigabaytla ölçüsünü daxil edir. 
	//Bu filmi saxlamaq üçün neçə disket lazım olduğunu hesablayan program yazın. 
	/*
	int a, disk;
	cout << "filmin olcusu GB: ";
	cin >> a;
	disk = a * 1024 / 1.44;
	cout << ++disk << " disket lazimdir";
	*/

	//6.İstifadəçi kəsr ədəd daxil edir. 
	//Onu 100də birlərə qədər yuvarlaqlaşdıran program yazın. 
	/*
	float a;
	int b;
	cin >> a;
	b = a * 100;
	cout << float(b) / 100;
	*/
	}