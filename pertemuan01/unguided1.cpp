#include <iostream>

// library untuk fungsi matematika
#include <cmath>

using namespace std;

// fungsi untuk menghitung luas lingkaran
double hitungLuasLingkaran_148(double jariJari_148) {
    const double PI = 3.14159;
    return PI * pow(jariJari_148, 2);
}

// fungsi untuk menampilkan hasil perhitungan
void tampilkanHasil_148(double jariJari_148, double luas_148) {
    cout << "Luas lingkaran dengan jari-jari " << jariJari_148 << " adalah : " << luas_148 << endl;
}

int main() {
    // input
    double jariJari_148;
    cout << "Masukkan jari-jari lingkaran : ";
    cin >> jariJari_148;

    // memanggil fungsi untuk menghitung luas lingkaran
    double luas_148 = hitungLuasLingkaran_148(jariJari_148);

    // memanggil fungsi untuk menampilkan hasil
    tampilkanHasil_148(jariJari_148, luas_148);

    return 0;
}
