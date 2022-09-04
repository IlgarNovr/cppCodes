//1. Ölçüsü 5 olan massivə rəqəmlər daxil edin, daha sonra həmin massivi tərsinə ekrana çıxarın.
/*
#include<iostream>
using namespace std;
int main() {
	const int size = 5;
	int arr[size];
	int n;
	cout << "Massivin elementlerini daxil edin: ";
	for (size_t i = 0; i < size; i++) {
		cin >> n;
		arr[i] = n;
	}
	cout << "\nMassiv: ";
	for (size_t i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n\nMassivin tersi: ";
	for (size_t i = 0; i < size; i++) {
		cout << arr[size-i-1] << " ";
	}
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//2. Ölçüsü 20 olan massiv yaradın, random rəqəmlərlə doldurun, indeksi cüt olan rəqəmləri ekrana çıxarın.
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 20;
	int arr[size];
	int n;
	cout << "Massiv (random): ";//0-100
	for (size_t i = 0; i < size; i++) {
		n = rand() % 101;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	cout << "\n\nIndeksi cut olan elementler : ";
	for (size_t i = 0; i < size; i++) {
		if (i % 2 == 0) {
			cout << arr[i] << " ";
		}
	}
	cout << "\n\n";
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//3. - 20 və 20 arasında random rəqəmlərdən ibarət ölçüsü 10 olan massiv yaradın.Müsbət ədədlərin ədədi ortasını tapan program yazın.
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	int n;
	float cem = 0, k = 0;
	cout << "Massiv (random): ";//-20 - 20
	for (size_t i = 0; i < size; i++) {
		n = -20 + rand() % 41;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	cout << "\n\nMusbet ededler : ";
	for (size_t i = 0; i < size; i++) {
		if (arr[i]>0) {
			cout << arr[i] << " ";
			cem += arr[i];
			k++;
		}
	}
	cout << "\n\nEdedi orta : " <<cem / k;
	cout << "\n\n";
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//4. - 5 və 5 arasında random rəqəmlərdən ibarət ölçüsü 20 olan massiv yaradın.
//   Mənfilərin, müsbətlərin, və sıfırların sayını tapan program yazın.
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 20;
	int arr[size];
	int n, musbet = 0, menfi = 0, sifir = 0;
	cout << "Massiv (random): ";//-5 - 5
	for (size_t i = 0; i < size; i++) {
		n = -5 + rand() % 11;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	cout << "\n\nMusbet ededler : ";
	for (size_t i = 0; i < size; i++) {
		if (arr[i]>0) {
			cout << arr[i] << " ";
			musbet++;
		}
	}
	cout << " & Musbet ededlerin sayi: " << musbet;
	cout << "\n\nMenfi ededler : ";
	for (size_t i = 0; i < size; i++) {
		if (arr[i] < 0) {
			cout << arr[i] << " ";
			menfi++;
		}
	}
	cout << " & Menfi ededlerin sayi: " << menfi;
	for (size_t i = 0; i < size; i++) {
		if (arr[i] == 0) {
			sifir++;
		}
	}
	cout << "\n\nSifirlarin sayi : " << sifir;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//5. Ölçüsü 10 olan massiv yaradın və içərsini random rəqəmlərlə doldurun.
//   İndeksi cüt olan ədədlərin cəmini, indeksi tək olan ədədlərin isə ədədi ortasını tapın.
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	int n, cutcem = 0;
		float tekcem = 0, k = 0;
	cout << "Massiv (random): ";//0-100
	for (size_t i = 0; i < size; i++) {
		n = rand() % 101;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	cout << "\n\nIndeksi cut olan elementler : ";
	for (size_t i = 0; i < size; i++) {
		if (i % 2 == 0) {
			cout << arr[i] << " ";
			cutcem += arr[i];
		}
	}
	cout << "\nIndeksi cut olan ededlerin cemi: " << cutcem;
	cout << "\n\nIndeksi tek olan elementler : ";
	for (size_t i = 0; i < size; i++) {
		if (i % 2 == 1) {
			cout << arr[i] << " ";
			tekcem += arr[i];
			k++;
		}
	}
	cout << "\nIndeksi tek olan ededlerin edediortasi: " << tekcem / k;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//6. 10 simvoldan ibarət char massivi yaradın(random doldurun - nəzərə alın ki char 0 - dan 255 - ə qədərdir).
//   Neçə hərf, rəqəm və punktuasiya simvolu olduğunu hesablayan program yazın.
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 10;
	char arr[size];
	int n, herf = 0, reqem = 0, punkt = 0;
	cout << "Massiv (random): ";//0-255
	for (size_t i = 0; i < size; i++) {
		n = rand() % 256;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	for (size_t i = 0; i < size; i++) {
		 if (arr[i] >= 48 && arr[i] <= 57) {
			reqem++;
		}
		else if (arr[i] >= 65 && arr[i] <= 90 || arr[i] >= 97 && arr[i] <= 122 || arr[i] >= 128 && arr[i] <= 175 || arr[i] >= 224 && arr[i] <= 247) {
			herf++;
		}
		else {
			 punkt++;
		 }
	}
	cout << "\nPunktlarin sayi: " << punkt << "\n";
	cout << "Reqemlerin sayi: " << reqem << "\n";
	cout << "Herflerin sayi: " << herf << "\n";
}*/
//----------------------------------------------------------------------------------------------------------------------------
//7. Ölçüsü 50 olan massiv yaradın və içərisini random doldurun(1 - 100) .
//   İstifadəçi 1 - 100 arasında rəqəm daxil edir, və massivdə bu əddədən neçə dənə olduğunu hesablayan program yazın.
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 50;
	int arr[size];
	int n, num, k=0;
	cout << "Massiv (random): ";//0-100
	for (size_t i = 0; i < size; i++) {
		n = rand() % 101;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	cout << "\n\nEded daxil edin: ";
	cin >> num;
	for (size_t i = 0; i < size; i++) {
		if (arr[i] == num) {
			k++;
		}
	}
	cout << "\n\nBu eded massivde " << k << " defe tekrarlanib.\n";
}*/
//----------------------------------------------------------------------------------------------------------------------------
//8. 1 və 100 arasında random rəqəmlərdən ibarət ölçüsü 10 olan massiv yaradın.
//   3 - ə, 5 - ə.7 - ə bölünən rəqəmlərin sayını tapın. (ayrı - ayrı)
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	int n, k3 = 0, k5 = 0, k7 = 0;
	cout << "Massiv (random): ";//0-100
	for (size_t i = 0; i < size; i++) {
		n = rand() % 101;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	for (size_t i = 0; i < size; i++) {
		if (arr[i]%3==0) {
			k3++;
		}
		else if (arr[i]%5==0) {
			k5++;
		}
		else if (arr[i]%7==0) {
			k7++;
		}
	}
	cout << "\n 3-e bolunen ededlerin sayi: " << k3;
	cout << "\n 5-e bolunen ededlerin sayi: " << k5;
	cout << "\n 7-ye bolunen ededlerin sayi: " << k7;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//9. 1 və 100 arasında random rəqəmlərdən ibarət ölçüsü 10 olan massiv yaradın.
//   3 - ə bölünüb 5 - ə bölünməyən rəqəmlərin sayını çıxarın. (eyni anda həm 3ə bölünsün həm 5 - ə bölünməsin)
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	int n, k=0;
	cout << "Massiv (random): ";//0-100
	for (size_t i = 0; i < size; i++) {
		n = rand() % 101;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	cout << "\n 3-e bolunub 5-e bolunmeyen ededler: ";
	for (size_t i = 0; i < size; i++) {
		if (arr[i] % 3 == 0 && arr[i] % 5 != 0) {
			cout << arr[i] << " ";
			k++;
		}
	}
	cout << "\n 3-e bolunub 5-e bolunmeyen ededlerin sayi: " << k;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//10.-10 və 30 arasında random rəqəmlərdən ibarət ölçüsü 10 olan massiv yaradın.
//   Birinci mənfi ədəddən sonra gələn bütün rəqəmləri toplayan program yazın. (1, 2, -3, 4, 5, -6, 7 bu halda, 4 + 5 + (-6) + 7 olacaq)
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	int n, k = 0, cem = 0;
	cout << "Massiv (random): ";//-10-30
	for (size_t i = 0; i < size; i++) {
		n = -10 + rand() % 41;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	for (size_t i = 0; i < size; i++) {
		if (arr[i]<0) {
			k = i;
			break;
		}
	}
	cout << "\n\nIlk menfiden sonraki ededler: ";
	for (size_t i = k+1; i < size; i++) {
		cout << arr[i] << " ";
		cem += arr[i];
	}
	cout << "\n\nIlk menfiden sonraki ededlerin cemi: " << cem<<"\n";
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//11. - 30 və 20 arasında random rəqəmlərdən ibarət ölçüsü 10 olan massiv yaradın.
//Birinci müsbət ədəddən sonra gələn bütün rəqəmləritoplayan program yazın.	
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	int n, k = 0, cem = 0;
	cout << "Massiv (random): ";//-30-20
	for (size_t i = 0; i < size; i++) {
		n = -30 + rand() % 51;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	for (size_t i = 0; i < size; i++) {
		if (arr[i]>0) {
			k = i;
			break;
		}
	}
	cout << "\n\nIlk musbet ededden sonraki ededler: ";
	for (size_t i = k+1; i < size; i++) {
		cout << arr[i] << " ";
		cem += arr[i];
	}
	cout << "\n\nIlk musbetden sonraki ededlerin cemi: " << cem<<"\n";
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//12. Ölçüsü 20 olan və random rəqəmlərdən ibarət massiv yaradın.
//    Massivin maximum və minimum elemtini tapan program yazın. (Dəyəri və indeksi qaytarın)
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 20;
	int arr[size];
	int n, max, min;
	cout << "Massiv (random): ";
	for (size_t i = 0; i < size; i++) {//0-1000000
		n = rand() % 1000001;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	max = arr[0];
	int i = 1;
	while (i < 20) {
		if (max < arr[i]) {
			max = arr[i];
		}
		i++;
	}
	min = arr[0];
	int j = 1;
	while (j < 20) {
		if (min > arr[j]) {
			min = arr[j];
		}
		j++;
	}
	for (size_t i = 0; i < size; i++) {
		if (arr[i] == max) {
			cout << "\n\nMax : " << max;
			cout << "\nMaximim elementin indeksi: " << i;
		}
		else if (arr[i] == min) {
			cout << "\n\nMin : " << min;
			cout << "\nMinimum elementin indeksi: " << i;
		}
	}
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//13. 10 ölçülü kəsr ədədlərdən ibarət massiv yaradın.Neçə rəqəmin kəsr hissəsinin olmadığını ekrana çıxaran program yazın.
/*
#include<iostream>
using namespace std;
int main() {
	const int size = 10;
	float  arr[size];
	float n;
	int k = 0;
	cout << "Massivin elementlerini daxil edin: ";
	for (size_t i = 0; i < 10; i++) {
		cin >> n;
		arr[i] = n;
	}
	cout << "\nMassiv: ";
	for (size_t i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << "\nKesr hissesi olmayan ededler: ";
	for (size_t i = 0; i < 10; i++) {
		if (arr[i] - int(arr[i]) == 0) {
			cout << arr[i] << " ";
			k++;
		}
	}
	cout << "\nKesr hissesi olmayan ededlerin sayi: " << k;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//14. 1 və 200 arasında random rəqəmlərdən ibarət ölçüsü 20 olanmassiv yaradın. 
///   1 rəqəmli, 2 rəqəmli, 3 rəqəmli ədədlərin faiz nisbəti ilə müqayisəsini edən program yazın.
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 20;
	int arr[size];
	int n, say = 0, s1 = 0, s2 = 0, s3 = 0;
	cout << "Massiv (random): ";//1-200
	for (size_t i = 0; i < size; i++) {
		n = 1 + rand() % 200;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	for (size_t i = 0; i < size; i++) {
		while (arr[i] > 0) {
			say++;
			arr[i] = arr[i] / 10;
		}
		if (say == 1) {
			s1++;
		}
		else if (say == 2) {
			s2++;
		}
		else if (say == 3) {
			s3++;
		}
		say = 0;
	}
	cout << "\n1 reqemli ededlerin faizi: " << s1 * 5 << " %";
	cout << "\n2 reqemli ededlerin faizi: " << s2 * 5 << " %";
	cout << "\n3 reqemli ededlerin faizi: " << s3 * 5 << " %";
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//15. 2 və 200 arasında random rəqəmlərdən ibarət ölçüsü 20 olanmassiv yaradın.
//    Massivdəki bütün sadə rəqəmləri ekrana çıxaran program yazın.
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 20;
	int arr[size];
	bool a=true;
	int n, bolen = 2, say = 0;
	cout << "Massiv (random): ";//2-200
	for (size_t i = 0; i < size; i++) {
		n = 2 + rand() % 199;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	for (size_t i = 0; i < size; i++) {
		for (int bolen = 2; bolen <= arr[i] / 2; bolen++) {
			if (arr[i] % bolen == 0) {
				a = false;
				break;
			}
		}
		if (a == true) {
			say++;
		}
		a = true;
	}
	cout << "\n" << say;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//16. Ölçüsü 10 olan massiv yaradın və içərsini random rəqəmlərlədoldurun.
//    Massivdəki rəqəmlərin yerlərini tərsinə çevirən programyazın. (0 - cı indeksi 9 - la, 1 - i 8 - lə və s.)
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	int n;
	cout << "Massiv (random): ";//0-1000
	for (size_t i = 0; i < size; i++) {
		n = rand() % 1001;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	cout << "\n\nMassivin tersi: ";
	for (size_t i = 0; i < size; i++) {
		cout << arr[size - i - 1] << " ";
	}
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//17. Ölçüsü 10 olan massiv yaradın və içərsini random rəqəmlərlə doldurun.
//    Massivdəki qonşu elementlərin yerini dəyişən program yazın.
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	int n,copy;
	cout << "Massiv (random): ";//0-100
	for (size_t i = 0; i < size; i++) {
		n = rand() % 101;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	cout << "\n\n ";
	for (size_t i = 0; i < size-1; i++) {
		copy = arr[i + 1];
		arr[i + 1] = arr[i];
		arr[i] = copy;
		i++;
	}
	for (size_t i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//18. Ölçüsü 5 olan iki massiv yaradın A və B.Ölçüsü 10 olan üçüncü massiv yaradın C.
//    C massivinə A və B dən sıra ilə elemntləri kopyalayın . (məs: С[0] = A[0], С[1] = B[0], C[2] = A[1], C[3] = B[1] və s.)
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int sizeA = 5, sizeB = 5, sizeC = 10;
	int arrA[sizeA], arrB[sizeB], arrC[sizeC];
	int n, m;
	int i = 0, j = 0;
	cout << "Massiv A: ";
	for (int i = 0; i < sizeA; i++) {
		n = rand() % 101;
		arrA[i] = n;
		cout << arrA[i] << " ";
	}
	cout << "\nMassiv B: ";
	for (int  j = 0; j < sizeB; j++) {
		m = rand() % 99;
		arrB[j] = m;
		cout << arrB[j] << " ";
	}
	cout << "\n\nMassiv C: ";
	for (int k = 0; k < sizeC; k++) {
		if (k % 2 == 0) {
			arrC[k] = arrA[i];
			i++;
		}
		else {
			arrC[k] = arrB[j];
			j++;
		}
		cout << arrC[k] << " ";
	}
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//19. Bir massivi ikinci massivə kopya edən program yazın.Şərt: kopya
//    edərkən birinci sıfırdan kiçik elementlər daha sonra 0 - lar daha sonra 0 - dan böyük elementləri kopya etməlidir.
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	int n, copy;
	cout << "Massiv (random): ";//-20 - 20
	for (size_t i = 0; i < size; i++) {
		n = -20 + rand() % 41;
		arr[i] = n;
		cout << arr[i] << " ";
	}
	for (size_t i = 0; i < size; i++){
		for (size_t j = 0; j < size - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				copy = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = copy;
			}
		}
	}
	cout << "\n\n Artan sira ile massiv: ";
	for (size_t i = 0; i < size; i++){
		cout << " " << arr[i] << " ";
	}
	cout << "\n";
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//20. Ölçüsü 10 olan C massivini, ölçüləri 5 olan A və B massivinə kopiya etməlisniz.
//    Şərt = > (məs : A[0] = C[0], B[0] = C[1], A[1] = C[2], B[1] = C[3] və s.)
/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int sizeA = 5, sizeB = 5, sizeC = 10;
	int arrA[sizeA], arrB[sizeB], arrC[sizeC];
	int n, m;
	int i = 0, j = 0;
	cout << "Massiv A: ";
	for (int i = 0; i < sizeA; i++) {
		n = rand() % 101;
		arrA[i] = n;
		cout << arrA[i] << " ";
	}
	cout << "\nMassiv B: ";
	for (int  j = 0; j < sizeB; j++) {
		m = rand() % 99;
		arrB[j] = m;
		cout << arrB[j] << " ";
	}
	cout << "\n\nMassiv C: ";
	for (int k = 0; k < sizeC; k++) {
		if (k % 2 == 0) {
			arrC[k] = arrA[i];
			i++;
		}
		else {
			arrC[k] = arrB[j];
			j++;
		}
		cout << arrC[k] << " ";
	}
}
*/
//----------------------------------------------------------------------------------------------------------------------------