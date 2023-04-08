#pragma warning(disable:4996)

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int base = 10;
    char numberString[] = "231ax12";
    char* end;
    unsigned long long int number;

    number = strtoull(numberString, &end, base);
    cout << "String value = " << numberString << endl;
    cout << "Unsigned Long long int value = " << number << endl;
    cout << "End String = " << end << endl;

    strcpy(numberString, "231");
    cout << "String value = " << numberString << endl;
    number = strtoull(numberString, &end, base);
    cout << "Unsigned Long long int value = " << number << endl;

    if (*end) {
        cout << end;
    } else {
        cout << "Null pointer";
    }

    _getch();
    return 0;
}