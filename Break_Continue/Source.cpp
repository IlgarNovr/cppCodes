//1. Do - while - dan istifadə edərək, valyuta mübadiləsi, kalkuyator, mili kilometrə çevirən programları sonsuz dövrə salın.
/*
#include<iostream>
using namespace std;
int main() {
    int mez1 = 0, mez2 = 0;
    double mebleg1 = 0, mebleg2 = 0;
    char x = 0;
    cout << "                   ---VALYUTA---\n";
    do {
        cout << "\n\n -(1) Manat - (2) Dollar - (3) EURO - (4) Rubl -\n";
        cout << "Mezenne secin: ";
        cin >> mez1;
        switch (mez1) {
        case 1:
            cout << "Manat secildi.\n";
            cout << "Nece manat deyisdirmek isteyirsiniz: ";
            cin >> mebleg1;
            cout << "Hansi mezenne ile deyisdirmek isteyirsiniz: ";
            cin >> mez2;
            switch (mez2) {
            case 1:
                cout << "\nManat secildi.\n";
                mebleg2 = mebleg1 * 1;
                cout << mebleg1 << " Manat == " << mebleg2 << " Manat\n\n";
                break;
            case 2:
                cout << "\nDollar secildi.\n";
                mebleg2 = mebleg1 * 0.5882;
                cout << mebleg1 << " Manat == " << mebleg2 << " Dollar.\n\n";
                break;
            case 3:
                cout << "\nEURO secildi.\n";
                mebleg2 = mebleg1 * 0.4824;
                cout << mebleg1 << " Manat == " << mebleg2 << " EURO.\n\n";
                break;
            case 4:
                cout << "\nRubl secildi.\n";
                mebleg2 = mebleg1 * 43.4575;
                cout << mebleg1 << " Manat == " << mebleg2 << " Rubl.\n\n";
                break;
            }
            break;
        case 2:
            cout << "Dollar secildi.\n";
            cout << "Nece Dollar deyisdirmek isteyirsiniz: ";
            cin >> mebleg1;
            cout << "Hansi mezenne ile deyisdirmek isteyirsiniz: ";
            cin >> mez2;
            switch (mez2) {
            case 1:
                cout << "\nManat secildi.\n";
                mebleg2 = mebleg1 * 1.7;
                cout << mebleg1 << " Dollar == " << mebleg2 << " Manat\n\n";
                break;
            case 2:
                cout << "\nDollar secildi.\n";
                mebleg2 = mebleg1 * 1;
                cout << mebleg1 << " Dollar == " << mebleg2 << " Dollar.\n\n";
                break;
            case 3:
                cout << "\nEURO secildi.\n";
                mebleg2 = mebleg1 * 0.8201;
                cout << mebleg1 << " Dollar == " << mebleg2 << " EURO.\n\n";
                break;
            case 4:
                cout << "\nRubl secildi.\n";
                mebleg2 = mebleg1 * 73.8821;
                cout << mebleg1 << " Dollar == " << mebleg2 << " Rubl.\n\n";
                break;
            }
            break;
        case 3:
            cout << "EURO secildi.\n";
            cout << "Nece EURO deyisdirmek isteyirsiniz: ";
            cin >> mebleg1;
            cout << "Hansi mezenne ile deyisdirmek isteyirsiniz: ";
            cin >> mez2;
            switch (mez2) {
            case 1:
                cout << "\nManat secildi.\n";
                mebleg2 = mebleg1 * 2.0746;
                cout << mebleg1 << " EURO == " << mebleg2 << " Manat\n\n";
                break;
            case 2:
                cout << "\nDollar secildi.\n";
                mebleg2 = mebleg1 * 1.2193;
                cout << mebleg1 << " EURO == " << mebleg2 << " Dollar.\n\n";
                break;
            case 3:
                cout << "\nEURO secildi.\n";
                mebleg2 = mebleg1 * 1;
                cout << mebleg1 << " EURO == " << mebleg2 << " EURO.\n\n";
                break;
            case 4:
                cout << "\nRubl secildi.\n";
                mebleg2 = mebleg1 * 90.5914;
                cout << mebleg1 << " EURO == " << mebleg2 << " Rubl.\n\n";
                break;
            }
            break;
        case 4:
            cout << "Rubl secildi.\n";
            cout << "Nece Rubl deyisdirmek isteyirsiniz: ";
            cin >> mebleg1;
            cout << "Hansi mezenne ile deyisdirmek isteyirsiniz: ";
            cin >> mez2;
            switch (mez2) {
            case 1:
                cout << "\nManat secildi.\n";
                mebleg2 = mebleg1 * 0.0226;
                cout << mebleg1 << " Rubl == " << mebleg2 << " Manat\n\n";
                break;
            case 2:
                cout << "\nDollar secildi.\n";
                mebleg2 = mebleg1 * 0.0135;
                cout << mebleg1 << " Rubl == " << mebleg2 << " Dollar.\n\n";
                break;
            case 3:
                cout << "\nEURO secildi.\n";
                mebleg2 = mebleg1 * 0.011;
                cout << mebleg1 << " Rubl == " << mebleg2 << " EURO.\n\n";
                break;
            case 4:
                cout << "\nRubl secildi.\n";
                mebleg2 = mebleg1 * 1;
                cout << mebleg1 << " Rubl == " << mebleg2 << " Rubl.\n\n";
                break;
            }
            break;
        }
        cout << "Yeniden pul deyisdirmek isteyirsiniz?(Beli(B,b) ve ya Xeyir(X,x)): ";
        cin >> x;
    } while (x == 'B' || x == 'b');
}
*/

/*
#include<iostream>
using namespace std;
int main() {
    double num1, num2;
    char p,x;
    cout << "------------CALCULATOR------------";
    do {
        cout << "\n---------------Hesabla:\n__________________________\n\n";
        cin >> num1 >> p >> num2;
        switch (int(p)) {
        case 43:
            cout << "Cavab: "<<num1<<" + "<<num2<<" = " << num1 + num2;
            break;
        case 45:
            cout << "Cavab: " << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case 42:
            cout << "Cavab: " << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case 47:
            if (num2 != 0) {
                cout << "Cavab: " << num1 << " / " << num2 << " = " << num1 / num2;
            }
            else {
                cout << "Bele hesablama ola bilmez.";
            }
            break;
        }
        cout << "\n\nYeniden hesablamaq isteyirsiniz?(Beli(B,b) ve ya Xeyir): ";
        cin >> x;
    } while (x=='B' || x=='b');
}
*/

/*
#include <iostream>
using namespace std;
int main() {
    double mil,km;
    char x = 1;
    do {
        cout << "\nMesafeni daxil edin(Mil): "; cin >> mil;
        cout << "Mesafe: " << mil * 1.609344 << " Kilometr\n\n";
        cout << "Yeniden baslatmaq isteyirsiz?(B ve ya X): "; cin >> x;
    } while (x == 'B' || x == 'b');
}

*/

//2. Klaviaturadan 10 tam ədəd daxil edilir, mənfi ədədlərin faizini, müsbət ədədlərin faizini və 0 - ların faizini tapın.
/*
#include<iostream>
using namespace std;
int main() {
    int num = 0, c = 0;
    int menfi = 0, musbet = 0, zero = 0;
    do {
        cin >> num;
        if (num > 0) {
            musbet++;
        }
        else if (num < 0) {
            menfi++;
        }
        else {
            zero++;
        }
        c++;
    } while (c < 10);
    cout << "\n Menfi ededlerin faizi: " << menfi * 10 << "%";
    cout << "\n Musbet ededlerin faizi: " << musbet * 10 << "%";
    cout << "\n Sifirlarin faizi: " << zero * 10 << "%";
}


*/

//3. Klaviaturadan 10 tam ədəd daxil edilir.Cütlərin və təklərin neçə faiz olduğunu hesablayan proqram yazın.
/*
#include<iostream>
using namespace std;
int main() {
    int num = 0, c = 0;
    int cut = 0, tek = 0;
    do {
        cin >> num;
        if (num%2==0) {
            cut++;
        }
        else {
            tek++;
        }
        c++;
    } while (c < 10);
    cout << "\n Cut ededlerin faizi: " << cut * 10 << "%";
    cout << "\n Tek ededlerin faizi: " << tek * 10 << "%";
}

*/

//4. İstənilən ədədin polindrom olub olmamasını yoxlayan proqram yazın.
/*
#include <iostream>
using namespace std;
int main(){
    int eded, num, eks = 0, n;
    cout << "Eded daxil edin: ";
    cin >> eded;
    n = eded;
    do{
        num = eded % 10;
        eks = (eks * 10) + num;
        eded = eded / 10;
    } while (eded != 0);
    cout << " Ededin eksi: " << eks << endl;

    if (n == eks) {
        cout << " Eded polindromdur.";
    }
    else {
        cout << " Eded polindrom deyil.";
    }
}


*/

//5. Rəqəmi sola sürüşdürən program yazmalısınız.İstifadəçi iki ədəd daxil edir. (məs. 12345 və 3, çıxışda 45123 rəqəmi alınmalıdır)
/*
#include <iostream>
using namespace std;
int main() {
    int eded, sira;
    int num, i = 0, k = 1;
    cin >> eded >> sira;
    do {
        k *= 10;
    } while (eded > (k * 10));

    do {
        num = eded % 10;
        eded /= 10;
        eded += k * num;
        i++;
    } while (i < sira-1);
    cout << eded;
}

*/

//6. 1 - 100 arasındakı bütün sadə ədədləri çıxaran program yazın.
//   Burada, dövr içərisində dövr işlətməlisiniz.Xarici dövr 1 - 100 arasında hərəkət edəcək.Daxili dövr isə ədədin sadə olub olmadığını yoxlayacaq./*#include<iostream>
using namespace std;
int main() {
    int num = 2;
    int bolen = 1;
    int say = 0;
    do {
        do {
            if (num % bolen == 0) {
                say++;
            }
            bolen++;
        } while (bolen <= num);

        if (say == 2) {
            cout << num << " ";
        }
        num++;
        bolen = 1;
        say = 0;
    } while (num <= 100);
}*/