#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
void cleanArr(char arr[]) {
    for (int i = 0; i < 4; i++)
    {
        arr[i] = ' ';
    }
}
int arr[]{ 1,2,3,4 };
int List(int count) {
    enum key
    {
        UP = 72,
        DOWN = 80,
        ENTER = 13
    };
    char arr2[4]{ ' ',' ',' ','<' };
    char input = '_';
    int index = 0;
    while (true) {
        int j = 0;//arr index
        cout << "\t\t\t\t\t\t-----------------";
        for (int i = 0; i < 4; i++) {
            switch (arr[i]) {
            case 1:cout << "\n\t\t\t\t\t\t| Manat " << arr2[j] << "       |";
                cout << "\n\t\t\t\t\t\t-----------------";
                j++;
                break;
            case 2:cout << "\n\t\t\t\t\t\t| Dollar " << arr2[j] << "      |";
                cout << "\n\t\t\t\t\t\t-----------------";
                j++;
                break;
            case 3:cout << "\n\t\t\t\t\t\t| Euro " << arr2[j] << "        |";
                cout << "\n\t\t\t\t\t\t-----------------";
                j++;
                break;
            case 4:cout << "\n\t\t\t\t\t\t| TL " << arr2[j] << "          |";
                cout << "\n\t\t\t\t\t\t-----------------";
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
            if (count == 4) {
                arr[index] = 0;
                switch (index)
                {
                case 0: return 10; break;
                case 1: return 20; break;
                case 2: return 30; break;
                case 3: return 40; break;
                }
            }
            else {
                if (arr[0] == 0) {
                    switch (index)
                    {
                    case 0: return 2; break;
                    case 1: return 3; break;
                    case 2: return 4; break;
                    }
                }
                else if (arr[1] == 0) {
                    switch (index)
                    {
                    case 0: return 1; break;
                    case 1: return 3; break;
                    case 2: return 4; break;
                    }
                }
                else if (arr[2] == 0) {
                    switch (index)
                    {
                    case 0: return 1; break;
                    case 1: return 2; break;
                    case 2: return 4; break;
                    }
                }
                else if (arr[3] == 0) {
                    switch (index)
                    {
                    case 0: return 1; break;
                    case 1: return 2; break;
                    case 2: return 3; break;
                    }
                }
            }
        }
    }
}
float convertor(float amount, int currency) {
    switch (currency) {
    //AZN
    case 12: return amount * 0.59; break;//azn-dollar
    case 13: return amount * 0.49; break;//azn-euro
    case 14: return amount * 4.12; break;//azn-tl
    //DOLLAR
    case 21: return amount * 1.7; break;//dollar-azn
    case 23: return amount * 0.83; break;//dollar-euro
    case 24: return amount * 7; break;//dollar-tl
    //EURO
    case 31: return amount * 2.6; break;//euro-azn
    case 32: return amount * 1.21; break;//euro-dollar
    case 34: return amount * 8.48; break;//euro-tl
    //TL
    case 41: return amount * 0.24; break;//tl-azn
    case 42: return amount * 0.14; break;//tl-dollar
    case 43: return amount * 0.12; break;//tl-euro
    }
}
int main() {
    int currency = 0;
    float amount;
    currency += List(4);
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAmount: ";
    cin >> amount;
    system("cls");
    currency += List(3);
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tExchange: " << convertor(amount, currency);
    cout << "\n\n\n\n\n\n\n\n\n\n";
}