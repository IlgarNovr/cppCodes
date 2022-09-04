#include<iostream>
using namespace std;
int main() {
	
	//1.İstifadəçi klaviaturadan ədəd daxil edir. Bu ədəd cütdürsə ekrana Y, təkdirsə ekrana N çıxarın.
	/*
	int a;
	cin >> a;
	a % 2 == 0 ? cout << "Y" : cout << "N";
	*/

	//2.1-20 aralığında ədəd daxil edilir. Əgər ədəd sadədirsə ekrana S çıxarılmalıdır. Əks halda ekrana heç bir məlumat çıxmasın.
	/*
	int x;
	cin >> x;
	x == 2 || x == 3 || x == 5 || x == 7 || x == 11 || x == 13 || x == 17 || x == 19 ? cout << "S" : cout << " ";
	*/
	
	//3. 3 ədəd daxil olunur. Birinci ədəd ən böyük olarsa ekrana F, ikinci ədəd ən böyük olarsa ekrana S,
	//   üçüncü ədəd ən böyük olarsa, ekrana T çıxarilmalıdır. qalan bütün hallarda ekrana N çıxarilir.
	/*
	int a, b, c;
	cin >> a >> b >> c;
	a >= b && a >= c ? cout << "F" : b >= a && b >= c ? cout << "S" : cout << "N";
	*/

	//4.6 rəqəmli ədəd daxil edilir. Cüt kategoriyadaki rəqəmlərin cəmi tək kategoriyadaki rəqəmlərin
	//  cəmindən çox olarsa cüt ədədlərin cəmi, əks halda tək ədədlərin cəmi əkrana çıxarilmalıdır.
	/*
	int x, a, b, c, d, e, f;
	cin >> x;
	a = x / 100000;
	b = x / 10000 % 10;
	c = x / 1000 % 10;
	d = x / 100 % 10;
	e = x / 10 % 10;
	f = x % 10;
	(b + d + f) >= (a + c + e) ? cout << b + d + f : cout << a + c + e;
	*/
}