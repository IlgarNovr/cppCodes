//1 - 2 * *********************************************************************
//1. Sətirdəki bütün saitləri sayan program yazın. (A E İ O U).
//2. Sətirdəki bütün samitləri sayan program yazın.

/*
#include<iostream>
using namespace std;
int main() {
	char* str = new char[100];
	int vowels = 0, consonants = 0;
	cout << "String :: \n";
	cin.getline(str, 100);
	for (size_t i = 0; i < 100; i++) {
		if (str[i] == 'a' || str[i] == 'o' || str[i] == 'u' || str[i] == 'e' || str[i] == 'i' || str[i] == 'A' || str[i] == 'O' || str[i] == 'U' || str[i] == 'E' || str[i] == 'I') {
			vowels++;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			consonants++;
		}
	}
	cout << "---------------------\nSaitlerin sayi :: " << vowels;
	cout << "\nSamitlerin sayi :: " << consonants;
}
*/
//3 * ************************************************************************
//3. Sətri PigLatin edən funksiya yazın.
/*
#include <iostream>
#include <string.h>
using namespace std;
bool Sait(char str) {
	if (str == 'e' || str == 'u' || str == 'i' || str == 'o' || str == 'a' ||
		str == 'E' || str == 'U' || str == 'I' || str == 'O' || str == 'A') {
		return true;
	}
	else {
		return false;
	}
}
void pigLatin(char*& str, int& size) {
	char* temp = new char[size + 3];
	int index = -1;
	int size2 = strlen(str);
	for (int i = 0; i < size2; i++) {
		if (Sait(str[i])) {
			index = i;
			break;
		}
	}
	if (index == -1) {
		cout << "PigLatin deyil!";
		return;
	}
	else {
		temp[0] = str[index];
		for (int i = 0; i < size2; i++) {
			if (i < index)
				temp[i + 1] = str[i];
			else if (i > index)
				temp[i] = str[i];
		}
		temp[size2] = 'a';
		temp[size2 + 1] = 'y';
	}
	size = size2 + 2;
	delete[] str;
	str = temp;
}
void printStr(char* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}
int main() {
	int size = 10;
	char* str = new char[size];
	cout << "String: ";
	cin.getline(str, size);
	pigLatin(str, size);
	cout << "Pig Latin: ";
	printStr(str, size);
}
*/
//4 **********************************************************************
//4. Funksiya sətirdəki boşluqları müəyyən simvolla əvəzləsin. (Simvolu istifadəçi funksiyaya göndərir)
/*
#include<iostream>
using namespace std;
int len(char* str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}
void changesymbol(char* str, char symbol, int size) {
	for (size_t i = 0; i < size; i++) {
		if (str[i] == ' ') {
			str[i] = symbol;
		}
	}
}
void printstr(char* str, int size) {
	cout << "New String ::\n";
	for (size_t i = 0; i < size; i++) {
		cout << str[i];
	}
}
int main() {
	char* str = new char[100];
	char symbol;
	cout << "String :: \n";
	cin.getline(str, 100);
	int size = len(str);
	cout << "Boshluqlar hansi simvolla evez edilsin :: ";
	cin >> symbol;
	changesymbol(str, symbol, size);
	printstr(str, size);
}
*/
//5 * *****************************************************************************
//5. Sətir str ​sətir str2-nin ​suffixi olub olmadığını yoxlayan funksiya yazın.
/*
#include<iostream>
using namespace std;
bool isItSuffix(char* suf, char* str, int startOfsuf) {
	int index = 0;
	for (int i = startOfsuf; str[i] != '\0'; i++)
	{
		if (suf[index] != str[i] && int(suf[index]) - int(str[i]) != 32 && int(suf[index]) - int(str[i]) != -32) {
			return false;
		}
		index++;
	}
	return true;
}
int main() {
	char* str = new char[100];
	char* suf = new char[50];
	cout << "String :: ";
	cin.getline(str, 100);
	cout << "Suffix :: ";
	cin.getline(suf, 50);
	int startOfsuf = strlen(str) - strlen(suf);
	cout << "Suffixdir? :: ";
	if (isItSuffix(suf, str, startOfsuf)) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}
*/
//6 * *****************************************************************************
//6. Sətir str ​sətir str2 - nin ​prefixi olub olmadığını tapan funksiya yazın.

/*
#include<iostream>
using namespace std;
bool isItPrefix(char* pref, char* str, int size) {
	for (int i = 0; i < size; i++)
	{
		if (pref[i] != str[i] && int(pref[i]) - int(str[i]) != 32 && int(pref[i]) - int(str[i]) != -32) {
			return false;
		}
	}
	return true;
}
int main() {
	char* str = new char[100];
	char* pref = new char[50];
	cout << "String: ";
	cin.getline(str, 100);
	cout << "Prefix: ";
	cin.getline(pref, 50);
	int finOfPref = strlen(pref);
	cout << "\nPrefixdir?: ";
	if (isItPrefix(pref, str, finOfPref)) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}
*/
//7 * *****************************************************************************
//7. Sətirin polindrom olub olmadığını yoxlayan funskiya yazın.

/*
#include<iostream>
using namespace std;
int len(char* arr) {
	int len = 0;
	while (arr[len] != '\0') {
		len++;
	}
	return len;
}
void printstr(char*& str, int& size) {
	cout << "Ters String ::\n";
	for (size_t i = 0; i < size; i++) {
		cout << str[i];
	}
}
int polindrom(char* str, int size) {
	bool pol = true;
	char* arr = new char[size];
	for (size_t i = 0; i < size; i++) {
		arr[i] = str[size - 1 - i];
	}
	printstr(arr, size);
	for (size_t i = 0; i < size; i++) {
		if (arr[i] == str[i]) {
			continue;
		}
		else {
			pol = false;
			break;
		}
	}
	return pol;
}
int main() {
	char* str = new char[100];
	cout << "String :: \n";
	cin.getline(str, 100);
	int size = len(str);
	bool pol = polindrom(str, size);
	cout << "\n-----------------------\n";
	if (pol == true) {
		cout << "String polindromdur!";
	}
	else {
		cout << "String polindrom deyil!";
	}
}
*/
//8 * ******************************************************************************
//8. Cmlədə nə qədər hərif nə qədər rəqəm nə qədər punktuasiya olduğunu hesablayan funksiya yazın.
/*
#include<iostream>
using namespace std;
int len(char* arr) {
	int len = 0;
	while (arr[len] != '\0') {
		len++;
	}
	return len;
}
void say(char* str, int size) {
	int letter = 0, number = 0, punkt = 0;
	for (size_t i = 0; i < size; i++) {
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
			letter++;
		}
		else if (str[i] >= '0' && str[i] <= '9') {
			number++;
		}
		else if (str[i] == ' ') {
			continue;
		}
		else {
			punkt++;
		}
	}
	cout << "Herflerin sayi :: " << letter;
	cout << "\nReqemlerin sayi :: " << number;
	cout << "\nPunktasiyalerin sayi :: " << punkt;
}
int main() {
	char* str = new char[100];
	cout << "String :: \n";
	cin.getline(str, 100);
	int size = len(str);
	cout << "--------------------------\n";
	say(str, size);
}
*/
//9 * ********************************************************************
//9. -The​- sözünün cümlədə neçə dəfə olduğunu tapan funksiya yazın.

/*
#include<iostream>
using namespace std;
int len(char* arr) {
	int len = 0;
	while (arr[len] != '\0') {
		len++;
	}
	return len;
}
void say(char* str, int size) {
	int say = 0;
	for (size_t i = 0; i < size; i++) {
		if ((str[i] == 'T' && str[i + 1] == 'h' && str[i + 2] == 'e' || str[i] == 't' && str[i + 1] == 'h' && str[i + 2] == 'e')) {
			say++;
		}
	}
	cout << "\"The\"-lerin sayi :: " << say;
}
int main() {
	char* str = new char[100];
	cout << "String :: \n";
	cin.getline(str, 100);
	int size = len(str);
	cout << "--------------------------\n";
	say(str, size);
}
*/

//10 * **********************************************************************************
//10. Sətirdəki hərflərdən başqa bütün simvolları və rəqəmləri silən funksiya yazmaq.

/*
#include<iostream>
using namespace std;
int len(char* str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}
void DeleteSymbol(char*& str, int& size) {
	char* newstr = new char[100];
	int index = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((int(str[i]) >= 65 && int(str[i]) <= 90) || (int(str[i]) >= 97 && int(str[i]) <= 122)) {
			newstr[index] = str[i];
			index++;
		}
	}
	size = index;
	delete[] str;
	str = newstr;
}
void printstr(char* str, int size) {
	cout << "New String ::\n";
	for (size_t i = 0; i < size; i++) {
		cout << str[i];
	}
}
int main() {
	char* str = new char[100];
	char symbol;
	cout << "String :: \n";
	cin.getline(str, 100);
	int size = len(str);
	cout << "Yalniz herflerden ibaret string :: ";
	DeleteSymbol(str, size);
	printstr(str, size);
}
*/
//11 * ******************************************************************************************
//11. Cümlədə ən çox hansı hərfin işləndiyini tapan funksiya yazın
/*
#include <iostream>
using namespace std;

char Letter(char* str) {
	int count[128] = { 0 };
	int max = 0;
	char letter = ' ';
	for (int i = 0; i < strlen(str); i++) {
		count[str[i]]++;
		if (count[str[i]] > max && ((int(str[i]) >= 65 && int(str[i]) <= 90) || (int(str[i]) >= 97 && int(str[i]) <= 122))) {
			max = count[str[i]];
			letter = str[i];
		}
	}
	return letter;
}
int main() {
	char* str = new char[100];
	cout << "String: ";
	cin.getline(str, 100);
	cout << "Most used letter: " << Letter(str);
}
*/
//12 * ******************************************************************************************
//12. Cümlədəki ən uzun sözü tapan funksiya yazın.
/*
#include <iostream>
using namespace std;
void longWord(char* str) {
	int count = 0, start = 0, finish = 0, max = 0, index = 0;
	while (index < strlen(str)) {
		count = 0;
		do {
			count++;
			index++;
		} while ((int(str[index]) >= 65 && int(str[index]) <= 90) || (int(str[index]) >= 97 && int(str[index]) <= 122));
		if (count > max) {
			max = count;
			finish = index;
			start = index - count;
		}
	}
	cout << "Longest Word: ";
	for (int i = start; i < finish; i++) {
		cout << str[i];
	}
}
int main() {
	char* str = new char[100];
	cout << "String: ";
	cin.getline(str, 100);
	longWord(str);
}
*/
//13 * ************************************************************************************************
//13. Cümlədəki ən kiçik sözü tapan funksiya tapın
/*
#include <iostream>
using namespace std;
void Word(char* str) {
	int count = 0, start = 0, finish = 0, min = 0, index = 0;
	while (index < strlen(str)) {
		count = 0;
		do {
			count++;
			index++;
		} while ((int(str[index]) >= 65 && int(str[index]) <= 90) || (int(str[index]) >= 97 && int(str[index]) <= 122));
		if (count < min || min == 0) {
			min = count;
			finish = index;
			start = index - count;
		}
	}
	cout << "Shortest word: ";
	for (int i = start; i < finish; i++) {
		cout << str[i];
	}
}
int main() {
	char* str = new char[100];
	cout << "String: ";
	cin.getline(str, 100);
	cout << "\nShort word::";
	Word(str);
}
*/





















