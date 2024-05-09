// Muhammad Deka Maulana
// 2311102148

#include <iostream>
#include <string>
#include <stack>

using namespace std;

// Fungsi untuk membalikkan kalimat menggunakan stack
void balikKalimat_148(string kalimat_148) {
    stack<char> tumpukan_148;

    // Memasukkan setiap karakter dari kalimat ke dalam stack
    for (char c_148 : kalimat_148) {
        tumpukan_148.push(c_148);
    }

    string kalimatDibalik_148;
    // Mengambil karakter dari stack dan menyimpannya dalam kalimat yang dibalik
    while (!tumpukan_148.empty()) {
        kalimatDibalik_148 += tumpukan_148.top();
        tumpukan_148.pop();
    }

    // Menampilkan kalimat yang sudah dibalik
    cout << "Kalimat terbalik : " << kalimatDibalik_148 << endl;
}

int main() {
    string kalimat_148;

    // Meminta pengguna memasukkan sebuah kalimat
    cout << "Masukkan kalimat : ";
    getline(cin, kalimat_148);

    int jumlahKata_148 = 1;
    // Menghitung jumlah kata dalam kalimat
    for (char c_148 : kalimat_148) {
        if (c_148 == ' ') {
            jumlahKata_148++;
        }
    }

    // Memeriksa apakah jumlah kata kurang dari 3
    if (jumlahKata_148 < 3) {
        cout << "Kalimat harus terdiri dari minimal 3 kata" << endl;
    } else {
        // Memanggil fungsi untuk membalikkan kalimat dan menampilkan hasil kalimat yang sudah dibalik
        balikKalimat_148(kalimat_148);
    }

    return 0;
}