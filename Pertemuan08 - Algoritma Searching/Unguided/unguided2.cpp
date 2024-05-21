/*
Muhammad Deka Maulana - 2311102148
*/

#include <iostream>
#include <string>

using namespace std;

int cari_148(string kata, char huruf) // Fungsi untuk mencari jumlah huruf vokal (sequential search)
{
    int jumlah = 0;
    for (int i = 0; i < kata.length(); i++) // Sequential search dilakukan dengan memeriksa setiap karakter dalam string satu per satu
    {
        if (kata[i] == huruf) // Mengevaluasi apakah karakter pada posisi indeks saat ini sesuai dengan huruf yang ingin ditemukan
        {
            jumlah++; // Jika ditemukan huruf yang sesuai, jumlahnya ditambah
        }
    }
    return jumlah; // Mengembalikan jumlah huruf yang ditemukan
}

void hitung_148(string kata) // Fungsi untuk menampilkan jumlah huruf vokal
{
    int jumlah;
    char vokal[10] = {'a', 'i', 'u', 'e', 'o', 'A', 'I', 'U', 'E', 'O'};
    for (int i = 0; i < 10; i++)
    {
        jumlah = cari_148(kata, vokal[i]);
        cout << "Jumlah huruf vokal " << vokal[i] << " : " << jumlah << endl;
    }
}

int main() // Fungsi utama
{
    cout << "\n\t=-=-= MENGHITUNG JUMLAH HURUF VOKAL DEKA =-=-=" << endl;
    string kata;
    cout << "Masukkan Kata : ";
    cin >> kata;
    hitung_148(kata);
    return 0;
}
