/*
Muhammad Deka Maulana - 2311102148
*/

#include <iostream>

using namespace std;

int main() {
    cout << "\n\t=-=-= Searching Data Angka 4 Deka =-=-=" << endl;
    int data_148[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}; // Array data
    int cari_148 = 4; // Angka yang dicari
    int jumlahAngka_148 = 0; // Jumlah angka 4 dalam data
    const int size_148 = sizeof(data_148) / sizeof(data_148[0]); // Ukuran array

    // Menampilkan data array
    cout << "\nData array : ";
    for (int i = 0; i < size_148; i++) {
        cout << data_148[i] << " "; // Menampilkan nilai setiap elemen array
    }
    cout << endl;

    // Algoritma Sequential Search
    for (int i = 0; i < size_148; i++) { // Looping untuk setiap elemen dalam array data (10 elemen)
        if (data_148[i] == cari_148) { // Jika elemen saat ini sama dengan angka yang dicari (4)
            jumlahAngka_148++; // Tambahkan jumlah angka 4
        }
    }

    cout << "\nBanyaknya angka 4 dalam data diatas adalah : " << jumlahAngka_148 << endl; // Tampilkan jumlah angka 4 dalam data
    cout << endl;

    return 0;
}