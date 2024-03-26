#include <iostream>
using namespace std;

int main() {
    int jmlangka_148;

    cout << "Masukkan jumlah angka : ";    // meminta pengguna untuk memasukkan jumlah angka
    cin >> jmlangka_148;
    cout << endl;

    int angka[jmlangka_148];    // array untuk menyimpan data

    cout << "Input Data :" << endl;    // meminta pengguna untuk memasukkan data array
    cout << "Masukkan " << jmlangka_148 << " angka : ";
    for (int i = 0; i < jmlangka_148; i++) {
        cin >> angka[i];
    }

    cout << "\nHasil :" << endl;    // menampilkan data array
    cout << "Data Array: ";
    for (int i = 0; i < jmlangka_148; i++) {
        cout << angka[i];
        if (i < jmlangka_148 - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Nomor Genap : ";    // menampilkan nomor genap
    for (int i = 0; i < jmlangka_148; i++) {
        if (angka[i] % 2 == 0) {
            cout << angka[i];
            if (i < jmlangka_148 - 1) {
                cout << ", ";
            }
        }
    }
    cout << endl;

    cout << "Nomor Ganjil : ";    // menampilkan nomor ganjil
    for (int i = 0; i < jmlangka_148; i++) {
        if (angka[i] % 2 != 0) {
            cout << angka[i];
            if (i < jmlangka_148 - 1) {
                cout << ", ";
            }
        }
    }
    cout << endl;

    return 0;
}