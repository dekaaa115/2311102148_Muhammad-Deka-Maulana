// contoh program fungsi map
#include <iostream>
#include <map>

using namespace std;

int main() {
    cout << "---Selamat datang di Deka Laptop---" << endl;

    // deklarasi map dan pilihan laptop
    map<int, pair<string, double>> pilihanLaptop_148 = {
        {1, {"Asus", 1500.0}},
        {2, {"Lenovo", 1200.0}},
        {3, {"Acer", 1000.0}},
        {4, {"ThinkPad", 2000.0}},
        {5, {"Axioo", 800.0}}
    };

    // menampilkan pilihan laptop
    cout << "Pilihan Laptop :" << endl;
    for (const auto& entry : pilihanLaptop_148) {
        cout << entry.first << ". " << entry.second.first << endl;
    }

    // input pilihan
    int pilihan;
    cout << "Masukkan nomor laptop yang ingin Anda beli (1-5): ";
    cin >> pilihan;

    // memeriksa dan menampilkan hasil
    auto it = pilihanLaptop_148.find(pilihan);
    if (it != pilihanLaptop_148.end()) {
        cout << "Anda telah memilih untuk membeli laptop " << it->second.first << " seharga Rp" << it->second.second << ". Terima kasih!" << endl;
    } else {
        cout << "Pilihan tidak valid. Silakan masukkan nomor laptop yang benar." << endl;
    }

    return 0;
}
