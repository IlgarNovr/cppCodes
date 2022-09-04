//1. M və N ölçülü iki ədəd massiv verilib.Üçüncü massivə bu iki massivdə ortaq olan
//   rəqəmləri yazan program yazın.Üçüncü massivdə rəqəmlər təkrarlanmasın.
/*
#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int arrM[10], arrN[10], arrZ[10]{};
	int k = 0;
	cout << " M massivi: "; //1-15
	for (int i = 0; i < 10; i++) {
		arrM[i] = 1 + rand() % 15;
		cout << arrM[i] << " ";
	}
	cout << "\n N massivi: "; //1-20
	for (int i = 0; i < 10; i++) {
		arrN[i] = 1 + rand() % 20;
		cout << arrN[i] << " ";
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arrN[i] == arrM[j]) {
				arrZ[k] = arrM[j];
				k++;
			}
		}
	}
	for (size_t i = 0; i < 10; i++) {
		for (size_t j = 0; j < 10; j++) {
			if (i != j && arrZ[i] == arrZ[j]) {
				arrZ[i] = 00;
			}
		}
	}
	cout << "\n\n Iki massivde ortaq ededler: ";
	for (int i = 0; i < 10; i++) {
		if (arrZ[i] != 00) {
			cout << arrZ[i] << " ";
		}
	}
}
*/
//************************************************************************************************
//2. M və N ölçülü iki ədəd massiv verilib.Üçüncü massivə birinci massivdə olub, lakin ikinci
//   massivdə olmayan rəqəmləri yazan program yazın.Üçüncü massivdəki rəqəmlər
//   təkrarlanmasın. (məs.Üçüncü massivdə iki ədəd 5 ola bilməz, yalnız 1 ədəd olmalıdır)
/*
#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int arrM[10], arrN[10], arrZ[10]{};
	int k = 0;
	cout << " M massivi: "; // 1-15
	for (int i = 0; i < 10; i++) {
		arrM[i] = 1 + rand() % 15;
		cout << arrM[i] << " ";
	}
	cout << "\n N massivi: ";// 1-20
	for (int i = 0; i < 10; i++) {
		arrN[i] = 1 + rand() % 20;
		cout << arrN[i] << " ";
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arrM[i] == arrN[j]) {
				arrM[i] = 00;
			}
		}
	}
	for (size_t i = 0; i < 10; i++) {
		if (arrM[i] != 00) {
			arrZ[k] = arrM[i];
			k++;
		}
	}
	for (size_t i = 0; i < 10; i++) {
		for (size_t j = 0; j < 10; j++) {
			if (i != j && arrZ[i] == arrZ[j]) {
				arrZ[i] = 00;
			}
		}
	}
	cout << "\n\n M massivinde olub N massivinde olmayan reqemler: ";
	for (int i = 0; i < 10; i++) {
		if (arrZ[i] != 00) {
			cout << arrZ[i] << " ";
		}
	}
	cout << "\n\n\n\n";
}
*/
//************************************************************************************************
//3. Ölçüsü 20 olan massiv yaradın.Onu - 10 və 20 arasında olan random rəqəmlərlə
//   doldurun.Massivdə ard arda düzülən müsbət ədədlərin neçə olduğunu tapmalı(ən uzun
//	 ardıcıllıq, mənfi və 0 ardıcıllığı kəsir), və onları ekrana çıxaran program yazın. (məs
//   1, 2, 3, 4, -4, 0, 5, 6 Ekrana : 1, 2, 3, 4 çıxmalıdır)
/*
#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 20;
	int arr[size];
	int arrM[size]{};
	int arrN[size]{};
	int k = 0, k1 = 0, n = 0;
	cout << "Massiv: ";// -10 - 20
	for (size_t i = 0; i < size; i++) {
		arr[i] = -10 + rand() % 31;
		cout << arr[i] << " ";
	}
	for (size_t i = 0; i < size; i++) {
		if (arr[i] > 0) {
			arrN[k] = arr[i];
			k++;
			if (k1 < k) {
				for (int j = 0; j < size; j++) {
					arrM[j] = arrN[j];
				}
			}
		}
		else {
			if (k1 < k) {
				k1 = k;
			}
			k = 0;
		}
	}
	cout << "\nEn boyuk ardicilliq: ";
	for (size_t i = 0; i < size; i++) {
		if (arrM[i] > 0) {
			cout << arrM[i] << ' ';
			n++;
		}
	}
	cout << "\nEn boyuk ardicilligin sayi: " << n;
}
*/
//************************************************************************************************
//4. -20 və 20 aralığında rəqəmlərlə dolmuş, ölçüsü 10 olan massiv yaradın. Massivi elə
//   düzün ki, ilk öncə müsbətlər daha sonra mənfilər gəlsin. 0 - ı müsbət kimi sayın.
/*
#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	int copy;
	cout << " Array: ";
	for (int i = 0; i < size; i++) {//-20 - 20
		arr[i] = -20 + rand() % 41;
		cout << arr[i] << " ";
	}
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				copy = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = copy;
			}
		}
	}
	cout << "\n\n Sorted Array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n\n";
}
*/
//************************************************************************************************
//5. -20 və 20 aralığında rəqəmlərlə dolmuş, ölçüsü 10 olan massiv yaradın. Bütün mənfi
//   əfəfləri onların modulu ilə əvəz edin.
/*
#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	cout << " Array1: ";
	for (int i = 0; i < size; i++) {//-20 - 20
		arr[i] = -20 + rand() % 41;
		cout << arr[i] << " ";
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			arr[i] = i;
		}
	}
	cout << "\n\nArray2: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n\n";
}
*/
//************************************************************************************************
//6. Ölçüsü 10 olan char massivi yaradın. Random xarakterlərlə doldurun. Massivdəki bütün
//   rəqəmləri böyük hərflərlə əvəz edin. (məs. 0 - A, 1 - B və s.)
/*
#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	char arr[10];
	cout << "Char Array: ";
	for (size_t i = 0; i < 10; i++) {//30 -60
		arr[i] = 30 + rand() % 31;
		cout << arr[i] << "  ";
	}
	cout << "\n\n     Array: ";
	for (size_t i = 0; i < 10; i++) {
		switch (arr[i]) {
		case '1':arr[i] = 'A';
			break;
		case '2':arr[i] = 'B';
			break;
		case '3':arr[i] = 'C';
			break;
		case '4':arr[i] = 'D';
			break;
		case '5':arr[i] = 'E';
			break;
		case '6':arr[i] = 'F';
			break;
		case '7':arr[i] = 'G';
			break;
		case '8':arr[i] = 'H';
			break;
		case '9':arr[i] = 'I';
			break;
		case '0':arr[i] = 'J';
		}
		cout << arr[i] << "  ";
	}
}*/
//************************************************************************************************
//7. 0 və 100 aralığında rəqəmlərlə dolmuş, ölçüsü 10 olan massiv yaradın. Massivin ədədi
//   ortasına ən yaxın olan elementi tapan program yazın.
/*
#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int arr[10], arrN[10];
	int cem = 0, eo;
	int min, yer;
	cout << "Massiv: ";
	for (size_t i = 0; i < 10; i++) {//0 100
		arr[i] = rand() % 101;
		cout << arr[i] << "  ";
	}
	for (size_t i = 0; i < 10; i++) {
		cem += arr[i];
	}
	eo = cem / 10;
	cout << "\nEdedi orta: " << eo;
	for (size_t i = 0; i < 10; i++) {
		arrN[i] = eo - arr[i];
	}
	for (size_t i = 0; i < 10; i++) {
		if (arrN[i] < 0) {
			arrN[i] = arrN[i] * (-1);
		}
	}
	min = arrN[0];
	for (size_t i = 0; i < 10; i++) {
		if (min > arrN[i]) {
			min = arrN[i];
			yer = i;
		}
	}
	cout << "\n--------------\nMassivde ededi ortaya en yaxin olan eded: " << arr[yer];
	cout << "\n\n\n\n";
}
*/
//************************************************************************************************
//8. Massivin dövrü olaraq N element qədər sürüşməsini reallaşdırın. N ədədini istifadəçi
//   daxil edir. (məs: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 və N = 3;; Cavab = > 7, 8, 9, 0, 1, 2, 3, 4, 5, 6)
/*
#include <iostream>
using namespace std;
int main() {
	int arr[10]{ 0,1,2,3,4,5,6,7,8,9 };
	int arrN[10]{};
	int N, k = 0;
	cout << "Massiv: ";
	for (size_t i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << "\nN ededini daxil edin: ";
	cin >> N;
	for (size_t i = 10 - N; i < 10; i++) {
		arrN[k] = arr[i];
		k++;
	}
	for (size_t i = 0; i < 10 - N; i++) {
		arrN[k] = arr[i];
		k++;
	}
	cout << "------------------------\n";
	cout << "N element qeder surusmus massiv: ";
	for (size_t k = 0; k < 10; k++) {
		cout << arrN[k] << " ";
	}
}
*/
//************************************************************************************************
//9. Kəsr və tam ədədlərlə dolmuş, ölçüsü 10 olan massiv yaradın. Massivi elə düzün ki , ilk
//   öncə kəsr hissəli olan rəqəmlər daha sonra tam ədədlər düzülsün)
/*
#include <iostream>
using namespace std;
int main() {
	float arr[10]{ 2.1,3.2,6,9,5,4.6,12,7,9.1,4 };
	int x = 0;
	cout << "Massiv : ";
	for (size_t i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	for (size_t i = 0; i < 10; i++) {
		if (arr[i] - int(arr[i]) != 0) {
			swap(arr[x], arr[i]);
			x++;
		}
	}
	cout << "\n\nMassiv_2: ";
	for (size_t i = 0; i < 10; i++) {
		cout << arr[i] << "  ";
	}
}
*/