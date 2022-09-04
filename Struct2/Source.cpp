#include<iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
struct Ishchiler
{
    char* ad_soyad;
    char* ata_adi;
    char* dogum_tarixi;
    char* dogum_yeri;
    char* yashayish_yeri;
    int boy;
    char* telefon;
    char* mail;
};

struct Telefonlar {
    char* marka;
    char* model;
    char* reng;
    int ram;
    int yaddash;
    int kamera_sayi;
    int qiymet;
};

void cleanArr(char arr[]) {
    for (int i = 0; i < 5; i++)
    {
        arr[i] = ' ';
    }
}

int arr[]{ 1,2,3,4,5 };
void List_Ishchi(int count, Ishchiler* ishchi) {
    enum key
    {
        UP = 72,
        DOWN = 80,
        ENTER = 13
    };
    char arr2[5]{ ' ',' ',' ',' ',' ' };
    char input = '_';
    int index = 0;
    while (true) {
        int j = 0;//arr index
        cout << "\t\t\t\t\t\t      ISHCHI CEDVELI\n";
        cout << "\t\t\t\t\t\t--------------------------";
        for (int i = 0; i < 5; i++) {
            switch (arr[i]) {
            case 1:cout << "\n\t\t\t\t\t\t| " << ishchi[0].ad_soyad << arr2[j] << "        |";
                cout << "\n\t\t\t\t\t\t--------------------------";
                j++;
                break;
            case 2:cout << "\n\t\t\t\t\t\t| " << ishchi[1].ad_soyad << arr2[j] << "     |";
                cout << "\n\t\t\t\t\t\t--------------------------";
                j++;
                break;
            case 3:cout << "\n\t\t\t\t\t\t| " << ishchi[2].ad_soyad << arr2[j] << "         |";
                cout << "\n\t\t\t\t\t\t--------------------------";
                j++;
                break;
            case 4:cout << "\n\t\t\t\t\t\t| " << ishchi[3].ad_soyad << arr2[j] << "       |";
                cout << "\n\t\t\t\t\t\t--------------------------";
                j++;
                break;
            case 5:cout << "\n\t\t\t\t\t\t| " << ishchi[4].ad_soyad << arr2[j] << "         |";
                cout << "\n\t\t\t\t\t\t--------------------------";
                j++;
                break;
            }
        }

        input = _getch();
        if (int(input) == -32) {
            input = _getch();
            if (int(input) == UP) {
                index--;
                if (index == -1) {
                    index = count - 1;
                }
            }
            else if (int(input) == DOWN) {
                index++;
                if (index == count) {
                    index = 0;
                }
            }
            cleanArr(arr2);
            arr2[index] = '<';
            system("cls");
        }
        else if (int(input) == ENTER) {
            system("cls");
            cout << "\n\n\n\n\n\n";
            cout << "\n\t\t\t\t\t\t| Ad Soyad :: " << ishchi[index].ad_soyad << "\n";
            cout << "\n\t\t\t\t\t\t| Ata adi :: " << ishchi[index].ata_adi << "\n";
            cout << "\n\t\t\t\t\t\t| Dogum tarixi :: " << ishchi[index].dogum_tarixi << "\n";
            cout << "\n\t\t\t\t\t\t| Dogum yeri :: " << ishchi[index].dogum_yeri << "\n";
            cout << "\n\t\t\t\t\t\t| Yashayish yeri ::" << ishchi[index].yashayish_yeri << "\n";
            cout << "\n\t\t\t\t\t\t| Boy :: " << ishchi[index].boy << "\n";
            cout << "\n\t\t\t\t\t\t| Mail adresi :: " << ishchi[index].mail << "\n";
            cout << "\n\t\t\t\t\t\t| Telefon nomresi :: " << ishchi[index].telefon << "\n";
            cout << "\n\n\n\n\n\n\n\n";
            break;
        }
    }
}

void List_Telefon(int count, Telefonlar* tel) {
    enum key
    {
        UP = 72,
        DOWN = 80,
        ENTER = 13
    };
    char arr2[5]{ ' ',' ',' ',' ',' ' };
    char input = '_';
    int index = 0;
    while (true) {
        int j = 0;//arr index
        cout << "\t\t\t\t\t\t\t   TELEFON CEDVELI\n";
        cout << "\t\t\t\t\t\t\t---------------------";
        for (int i = 0; i < 5; i++) {
            switch (arr[i]) {
            case 1:cout << "\n\t\t\t\t\t\t\t| " << tel[0].marka << arr2[j] << "            |";
                cout << "\n\t\t\t\t\t\t\t---------------------";
                j++;
                break;
            case 2:cout << "\n\t\t\t\t\t\t\t| " << tel[1].marka << arr2[j] << "          |";
                cout << "\n\t\t\t\t\t\t\t---------------------";
                j++;
                break;
            case 3:cout << "\n\t\t\t\t\t\t\t| " << tel[2].marka << arr2[j] << "           |";
                cout << "\n\t\t\t\t\t\t\t---------------------";
                j++;
                break;
            case 4:cout << "\n\t\t\t\t\t\t\t| " << tel[3].marka << arr2[j] << "           |";
                cout << "\n\t\t\t\t\t\t\t---------------------";
                j++;
                break;
            case 5:cout << "\n\t\t\t\t\t\t\t| " << tel[4].marka << arr2[j] << "            |";
                cout << "\n\t\t\t\t\t\t\t---------------------";
                j++;
                break;
            }
        }
        input = _getch();
        if (int(input) == -32) {
            input = _getch();
            if (int(input) == UP) {
                index--;
                if (index == -1) {
                    index = count - 1;
                }
            }
            else if (int(input) == DOWN) {
                index++;
                if (index == count) {
                    index = 0;
                }
            }
            cleanArr(arr2);
            arr2[index] = '<';
            system("cls");
        }
        else if (int(input) == ENTER) {
            system("cls");
            cout << "\n\n\n\n\n\n";
            cout << "\n\t\t\t\t\t\t| Marka :: " << tel[index].marka << "\n";
            cout << "\n\t\t\t\t\t\t| Model :: " << tel[index].model << "\n";
            cout << "\n\t\t\t\t\t\t| Reng :: " << tel[index].reng << "\n";
            cout << "\n\t\t\t\t\t\t| Ram :: " << tel[index].ram << "\n";
            cout << "\n\t\t\t\t\t\t| Yaddash ::" << tel[index].yaddash << "\n";
            cout << "\n\t\t\t\t\t\t| Kamera sayi :: " << tel[index].kamera_sayi << "\n";
            cout << "\n\t\t\t\t\t\t| Qitmet (AZN) :: " << tel[index].qiymet << "\n";
            cout << "\n\n\n\n\n\n\n\n";
            break;
        }
    }
}

void Isci_tel(int count, Ishchiler* ishchi, Telefonlar* tel) {
    enum key
    {
        UP = 72,
        DOWN = 80,
        ENTER = 13
    };
    char arr2[2]{ ' ',' ' };
    char input = '_';
    int index = 0;
    while (true) {
        int j = 0;//arr index
        cout << "\t\t\t\t\t\t----------------------";
        for (int i = 0; i < 2; i++) {
            switch (arr[i]) {
            case 1:cout << "\n\t\t\t\t\t\t| 1) ISHCHILER " << arr2[j] << "     |";
                cout << "\n\t\t\t\t\t\t----------------------";
                j++;
                break;
            case 2:cout << "\n\t\t\t\t\t\t| 2) TELEFONLAR " << arr2[j] << "    |";
                cout << "\n\t\t\t\t\t\t----------------------";
                j++;
                break;
            }
        }
        input = _getch();
        if (int(input) == -32) {
            input = _getch();
            if (int(input) == UP) {
                index--;
                if (index == -1) {
                    index = count - 1;
                }
            }
            else if (int(input) == DOWN) {
                index++;
                if (index == count) {
                    index = 0;
                }
            }
            cleanArr(arr2);
            arr2[index] = '<';
            system("cls");
        }
        else if (int(input) == ENTER) {
            system("cls");
            if (index == 0) {
                List_Ishchi(5, ishchi);
            }
            else {
                List_Telefon(5, tel);
            }
            break;
        }
    }
}

int main() {
    Ishchiler* ishchi = new Ishchiler[5];
    //1ci isci
    ishchi[0].ad_soyad = new char[30]{ "Ilqar Novruzov" };
    ishchi[0].ata_adi = new char[20]{ "Zulfiqar" };
    ishchi[0].dogum_tarixi = new char[12]{ "02.11.2001" };
    ishchi[0].dogum_yeri = new char[40]{ "Azerbaycan / Celilabad" };
    ishchi[0].yashayish_yeri = new char[49]{ "Azerbaycan / Baki" };
    ishchi[0].boy = 178;
    ishchi[0].mail = new char[40]{ "ilqar.nvrzv2001@gmail.com" };
    ishchi[0].telefon = new char[20]{ "+994-055-735-07-97" };
    //2ci isci
    ishchi[1].ad_soyad = new char[30]{ "Murad Niftelizade" };
    ishchi[1].ata_adi = new char[20]{ "Ildirim" };
    ishchi[1].dogum_tarixi = new char[12]{ "18.09.1999" };
    ishchi[1].dogum_yeri = new char[40]{ "Azerbaycan / Baki" };
    ishchi[1].yashayish_yeri = new char[49]{ "Azerbaycan / Baki" };
    ishchi[1].boy = 175;
    ishchi[1].mail = new char[40]{ "mrd.niftalizade@mail.ru" };
    ishchi[1].telefon = new char[20]{ "+994-055-332-11-47" };

    //3ci isci
    ishchi[2].ad_soyad = new char[30]{ "Murad Seyidov" };
    ishchi[2].ata_adi = new char[20]{ "Tahir" };
    ishchi[2].dogum_tarixi = new char[12]{ "04.11.2000" };
    ishchi[2].dogum_yeri = new char[40]{ "Azerbaycan / Baki" };
    ishchi[2].yashayish_yeri = new char[49]{ "Azerbaycan / Baki" };
    ishchi[2].boy = 171;
    ishchi[2].mail = new char[40]{ "seyidov123@gmail.com" };
    ishchi[2].telefon = new char[20]{ "+994-070-145-37-56" };

    //4ci isci
    ishchi[3].ad_soyad = new char[30]{ "Coshqun Nadirli" };
    ishchi[3].ata_adi = new char[20]{ "Rovshen" };
    ishchi[3].dogum_tarixi = new char[12]{ "16.06.2001" };
    ishchi[3].dogum_yeri = new char[40]{ "Azerbaycan / Masalli" };
    ishchi[3].yashayish_yeri = new char[49]{ "Azerbaycan / Baki" };
    ishchi[3].boy = 178;
    ishchi[3].mail = new char[40]{ "coshu333@mail.ru" };
    ishchi[3].telefon = new char[20]{ "+994-077-737-31-43" };

    //5ci isci
    ishchi[4].ad_soyad = new char[30]{ "Sadiq Yusifli" };
    ishchi[4].ata_adi = new char[20]{ "Israil" };
    ishchi[4].dogum_tarixi = new char[12]{ "07.10.2003" };
    ishchi[4].dogum_yeri = new char[40]{ "Azerbaycan / Baki" };
    ishchi[4].yashayish_yeri = new char[49]{ "Azerbaycan / Baki" };
    ishchi[4].boy = 173;
    ishchi[4].mail = new char[40]{ "qabilmmdv2001@gmail.ru" };
    ishchi[4].telefon = new char[20]{ "+994-055-532-89-34" };

    Telefonlar* tel = new Telefonlar[5];
    //1ci telefon
    tel[0].marka = new char[15]{ "Apple" };
    tel[0].model = new char[20]{ "Iphone 12 Pro Max" };
    tel[0].reng = new char[20]{ "space grey" };
    tel[0].ram = 6;
    tel[0].yaddash = 512;
    tel[0].kamera_sayi = 4;
    tel[0].qiymet = 3500;
    //2ci telefon
    tel[1].marka = new char[15]{ "Samsung" };
    tel[1].model = new char[20]{ "Note 20 Ultra" };
    tel[1].reng = new char[20]{ "Black" };
    tel[1].ram = 8;
    tel[1].yaddash = 256;
    tel[1].kamera_sayi = 4;
    tel[1].qiymet = 2599;
    //3ci telefon
    tel[2].marka = new char[15]{ "Xiaomi" };
    tel[2].model = new char[20]{ "Poco F2 Pro" };
    tel[2].reng = new char[20]{ "Purple" };
    tel[2].ram = 6;
    tel[2].yaddash = 256;
    tel[2].kamera_sayi = 5;
    tel[2].qiymet = 1399;
    //4ci telefon
    tel[3].marka = new char[15]{ "Huawei" };
    tel[3].model = new char[20]{ "P40 Pro" };
    tel[3].reng = new char[20]{ "Black" };
    tel[3].ram = 8;
    tel[3].yaddash = 256;
    tel[3].kamera_sayi = 4;
    tel[2].qiymet = 2199;
    //5ci telefon
    tel[4].marka = new char[15]{ "Nokia" };
    tel[4].model = new char[20]{ "6300(OldButGold)" };
    tel[4].reng = new char[20]{ "Metalic" };
    tel[4].ram = 0;
    tel[4].yaddash = 4;
    tel[4].kamera_sayi = 1;
    tel[4].qiymet = 179;
    Isci_tel(2, ishchi, tel);
}