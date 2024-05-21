/*
Muhammad Deka Maulana - 2311102148
*/

#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

struct CharIndex_148 { // Struktur data untuk menyimpan pasangan karakter dan indeks dalam array 
    char character;
    int index;
};

vector<int> binary_search_all_2123(CharIndex_148 dataArray[], int size, char target) { // Fungsi untuk mencari semua indeks karakter target dalam array pasangan karakter dan indeks dengan algoritma pencarian biner sederhana.
    vector<int> result; // Array dinamis untuk menyimpan indeks hasil pencarian karakter target dalam array pasangan karakter dan indeks.
    for (int i = 0; i < size; i++) {
        if (dataArray[i].character == target) {
            result.push_back(dataArray[i].index); // Menambahkan indeks karakter target ke dalam array hasil pencarian.
        }
    }
    return result;
}

int main() {
    char kalimat_148[100]; // Array karakter untuk menyimpan kalimat yang diinputkan pengguna.
    char cari_148; 
    char ulangi_148;
    do {
        cout << "\n\t=-= PROGRAM BINARY SEARCH HURUF DEKA =-=" << endl;
        cout << "Input Kalimat : ";
        cin.getline(kalimat_148, 100); // Menggunakan getline() agar kalimat yang diinputkan dapat mengandung spasi.
        int size_148 = strlen(kalimat_148); // Menghitung panjang kalimat yang diinputkan.
        CharIndex_148 dataArray[100]; // Array statis untuk menyimpan pasangan karakter dan indeks
        // Membuat array pasangan karakter dan indeks aslinya
        for (int i = 0; i < size_148; i++) {
            dataArray[i] = {kalimat_148[i], i};
        }
        cout << "Data Awal : " << kalimat_148 << endl;
        cout << "Input Huruf Yang Di Cari : ";
        cin >> cari_148;
        // Pencarian biner sederhana
        vector<int> indeks = binary_search_all_2123(dataArray, size_148, cari_148); 
        if (!indeks.empty()) { // Jika indeks ditemukan dalam array pasangan karakter dan indeks.
            // Sort hasil jika lebih dari satu indeks ditemukan
            if (indeks.size() > 1) {
                sort(indeks.begin(), indeks.end());
            }
            cout << "Huruf '" << cari_148 << "' ditemukan pada indeks ke-";
            for (int i = 0; i < indeks.size(); i++) { // Menampilkan semua indeks karakter target dalam kalimat.
                if (i > 0) cout << ", ";
                cout << indeks[i];
            }
            cout << " dalam kalimat.\n";
        } else {
            cout << "Huruf '" << cari_148 << "' tidak ditemukan dalam kalimat.\n";
        }
        cout << "Apakah Anda ingin mengulangi program binary search ini?? (y/n): ";
        cin >> ulangi_148;
        cin.ignore(); // Membersihkan buffer agar getline() tidak terganggu
    } while (ulangi_148 == 'y' || ulangi_148 == 'Y'); // Ulangi program jika pengguna mengetikkan 'y' atau 'Y'

    cout << "\nTerimakasih telah menggunakan program binary search huruf ini!!\n\n";

    return 0;
}
