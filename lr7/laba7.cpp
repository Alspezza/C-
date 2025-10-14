#include <iostream>

using namespace std;
int mas[7], znach, n, find1zero;

int main(){
    setlocale(LC_ALL, "RU");
    for (int i = 0; i <= 6; i++ ) {
        cout << "Введите значение для числа с индексом " << i << endl;
        cin >> znach;
        mas[i] = znach;
    }
    for (int i = 0; i <= 6; i++) {
        cout << "mas[" << i << "] = " << mas[i] << endl;
        if (mas[i] == 0) {
            find1zero = i;
        }
        else {
            cout << "Нулей нет";
            return 0;
        }

    }




}
