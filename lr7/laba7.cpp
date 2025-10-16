#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;
/*int mas[7], znach, n, find1zero, find2zero, sum = 0;

int main() {
    setlocale(LC_ALL, "RU");
    for (int i = 0; i <= 6; i++) {
        cout << "Введите значение для числа с индексом " << i << endl;
        cin >> znach;
        mas[i] = znach;
    }
    for (int i = 0; i <= 6; i++) {
        if (mas[i] == 0) {
            find1zero = i;
            break;
        }
        
    }
        cout << "Позиция 1 нуля: " << find1zero<<endl;
    for (int i = 6; i >= 0; i--) {
            if (mas[i] == 0) {
                find2zero = i;
                break;
            }
            
    }
    cout << "Позиция 2 нуля: " << find2zero<<endl;
    for (int x = find1zero + 1; x <= find2zero - 1; x++) {
            sum += mas[x];
    }
    cout << "Сумма чисел между нулями: " << sum<<endl;
}*/









/*int mas[7], znach, n, find1polosh, find2polosh, sum = 0;

int main() {
    setlocale(LC_ALL, "RU");
    for (int i = 0; i <= 6; i++) {
        cout << "Введите значение для числа с индексом " << i << endl;
        cin >> znach;
        mas[i] = znach;
    }
    for (int i = 0; i <= 6; i++) {
        if (mas[i] > 0) {
            find1polosh = i;
            break;
        }

    }
    cout << "Позиция 1 положительного: " << find1polosh << endl;
    for (int i = 6; i >= 0; i--) {
        if (mas[i] > 0) {
            find2polosh = i;
            break;
        }

    }
    cout << "Позиция 2 положительного: " << find2polosh << endl;
    for (int x = find1polosh + 1; x <= find2polosh - 1; x++) {
        sum += mas[x];
    }
    cout << "Сумма чисел между первым и последним положительным: " << sum << endl;
}  */
   

     






/*
int mas[7], znach, n, find1otric, find2otric, sum = 0;

int main() {
    setlocale(LC_ALL, "RU");
    for (int i = 0; i <= 6; i++) {
        cout << "Введите значение для числа с индексом " << i << endl;
        cin >> znach;
        mas[i] = znach;
    }
    for (int i = 0; i <= 6; i++) {
        if (mas[i] < 0) {
            find1otric = i;
            break;
        }

    }
    cout << "Позиция 1 отрицательного: " << find1otric << endl;
    for (int i = 6; i >= 0; i--) {
        if (mas[i] < 0) {
            find2otric = i;
            break;
        }

    }
    cout << "Позиция 2 отрицательного: " << find2otric << endl;
    for (int x = find1otric + 1; x <= find2otric - 1; x++) {
        sum += mas[x];
    }
    cout << "Сумма чисел между первым и последним отрицательным: " << sum << endl;
}   */








int  n, find2otric, len, sum = 0, chislo;
float mas[7], znach;
int main() {
    setlocale(LC_ALL, "RU");
    for (int i = 0; i <= 6; i++) {
        cout << "Введите значение для числа с индексом " << i << endl;
        cin >> znach;
        mas[i] = znach;
    }
    len = sizeof(mas) / sizeof(mas[0]);
    for (int i = 6; i >= 0; i--) {
        if (mas[i] < 0) {
            find2otric = i;
            break;
        }

    }
    cout << "Позиция последнего отрицательного: " << find2otric << endl;
    for (int x = len - 1; x >= find2otric + 1; x--) {
        chislo = mas[x];
        cout << "Целая часть = " << chislo << endl;
        sum += chislo;
    }
    cout << "Сумма чисел после последнего отрицательного: " << sum << endl;
}


