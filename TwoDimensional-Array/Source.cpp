//1. 5x5 ölçüsündə ikiölçülü massivi 0 - 20 aralığında random ədədlərlə doldurun.
//   Massivdəki ədədlərin cəmini tapın.

/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int two[5][5];
	int cem = 0;
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			two[i][j] = rand() % 21;
		}
	}
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			cout << two[i][j] << " ";
			cem += two[i][j];
		}
		cout << "\n";
	}
	cout << "\n\nMassivdeki ededlerin cemi: " << cem;
}
*/

//************************************************************************************************

//2. 5x5 ölçüsündə ikiölçülü massivi 0 - 20 aralığında random ədədlərlə doldurun.
//   Əsas və əks dioqanalda yerləşən rəqəmlərin cəmini hesablayan program yazın.

/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int two[5][5];
	int cem = 0;
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			two[i][j] = rand() % 21;
		}
	}
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			cout << two[i][j] << " ";
			if (i == j || i + j == 4) {
				cem += two[i][j];
			}
		}
		cout << "\n";
	}
	cout << "\n\nDioqonallardaki ededlerin cemi: " << cem;
}
*/

//************************************************************************************************

//3. 5x5 ölçüsündə ikiölçülü massivi(-100) və(100) aralığında random ədədlərlə doldurun.
//   Massivdəki minimal və maksimal elementləri tapan program yazın.

/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int two[5][5];
	int min, max;
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			two[i][j] = -100+ rand() % 201;
		}
	}
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			cout << two[i][j] << "  ";
		}
		cout << "\n";
	}
	max = two[0][0];
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 1; j < 5; j++) {
			if (two[i][j] > max) {
				max = two[i][j];
			}
		}
	}
	min = two[0][0];
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 1; j < 5; j++) {
			if (two[i][j] < min) {
				min = two[i][j];
			}
		}
	}
	cout << "\nMaksimum element: " << max;
	cout << "\nMinimum element: " << min;
}
*/

//************************************************************************************************

//4. 5x5 ölçüsündə ikiölçülü massivi - 5 və 5aralığında random ədədlərlə doldurun.
//   Massivdəki mənfi, müsbət, və sıfır olan elementlərin sayını tapın.

/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int two[5][5];
	int menfi = 0, musbet = 0, zero = 0;
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			two[i][j] = -5+ rand() % 11;
		}
	}
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			cout << two[i][j] << "  ";
			if (two[i][j] < 0) {
				menfi++;
			}
			else if (two[i][j] == 0) {
				zero++;
			}
			else {
				musbet++;
			}
		}
		cout << "\n";
	}
	cout << "\nMenfi ededlerin sayi: " << menfi;
	cout << "\nMusbet ededlerin sayi: " << musbet;
	cout << "\nSifirlarin sayi: " << zero;
}
*/

//************************************************************************************************

//5. 5x5 ölçüsündə ikiölçülü massivi 0 - 20 aralığında random ədədlərlədoldurun.
//   Hər bir sətirdəki elementlərin cəmini tapın.

/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int two[5][5];
	int cem = 0, setir = 1;
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			two[i][j] = rand() % 21;
		}
	}
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			cout << two[i][j] << "  ";
		}
		cout << "\n";
	}
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			cem += two[i][j];
		}
		cout << "\n" << setir << "-ci setirdeki elementlerin cemi: " << cem;
		cem = 0;
		setir++;
	}
}
*/

//************************************************************************************************

//6. 5x5 ölçüsündə ikiölçülü massivi 0 - 20 aralığında random ədədlərlə doldurun.
//   Hər bir sütundakı elementlərin cəmini tapın.

/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int two[5][5];
	int cem = 0, sutun = 1;
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			two[i][j] = +rand() % 21;
		}
	}
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			cout << two[i][j] << "  ";
		}
		cout << "\n";
	}
	for (size_t k = 0; k < 5; k++) {
		for (size_t i = 0; i < 5; i++) {
			for (size_t j = 0; j < 5; j++) {
				if (j == k) {
					cem += two[i][j];
				}
			}
		}
		cout << "\n" << sutun << "-ci sutundaki elementlerin cemi: " << cem;
		cem = 0;
		sutun++;
	}
}
*/

//************************************************************************************************

//7. 5x5 ölçüsündə ikiölçülü massivi - 10 və 40 aralığında random ədədlərlə doldurun.
//   Bütün sətirdə mənfi ədəd yoxdursa, bu sətirin cəmini toplayın.

/*
#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int two[5][5];
	int cem = 0, setir, mus = 0;
	bool k = false;
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			two[i][j] = -10 + rand() % 51;
		}
	}
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			cout << two[i][j] << "  ";
		}
		cout << "\n";
	}
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			if (two[i][j] >= 0) {
				mus++;
			}
		}
		if (mus == 5) {
			for (size_t j = 0; j < 5; j++) {
				cem += two[i][j];
			}
			k = true;
			setir = i + 1;
		}
		if (k == true) {
			cout << "\n" << setir << "-ci setirin cemi: " << cem;
		}
		mus = 0;
		cem = 0;
		k = false;
	}
}
*/

//************************************************************************************************

//8. N x M ölçülü massivi elə ikirəqəmli ədədlərlə doldurun ki, 
//   birinci rəqəm sətirin, ikinci rəqəm sütuun nömrəsini göstərsin.

/*
#include<iostream>
using namespace std;
int main() {
	const int N = 6, M = 6;
	int two[N][M];
	for (size_t i = 0; i < N; i++){
		for (size_t j = 0; j < M; j++){
			int n = i + 1, m = j + 1;
			two[i][j] = n * 10 + m;
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
}
*/

//************************************************************************************************

//9. N xM ölçülü massivdə, birinci və sonuncu sütunun, 
//   ikinci və sondan əvvəlki sütunun və s.yerini dəyişin

/*
#include <iostream>
using namespace std;
int main() {
	const int N = 6, M = 8;
	int two[N][M];
	int num = 10;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			two[i][j] = num;
			num++;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (j == 0) {
				int c1 = two[i][j];
				two[i][j] = two[i][M - 1];
				two[i][M - 1] = c1;
			}
			else if (j == 1) {
				int c2 = two[i][j];
				two[i][j] = two[i][M - 2];
				two[i][M - 2] = c2;
			}
		}
	}
	cout << "---------------------------" << "\n";
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
}
*/

//************************************************************************************************

//10. 6 x 6 ölçülü massivdə, qonşu sətirlərin yerini dəyişin.

/*
#include <iostream>
using namespace std;
int main() {
	int two[6][6];
	int num = 1;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			two[i][j] = num;
			num++;
		}
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (i % 2 == 0) {
				int a = two[i][j];
				two[i][j] = two[i + 1][j];
				two[i + 1][j] = a;
			}
		}
	}
	cout << "---------------------------" << "\n";
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << two[i][j] << " ";
		}
		cout << "\n";
	}
}
*/

//************************************************************************************************