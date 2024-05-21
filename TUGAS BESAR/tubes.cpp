/*
Nama Kelompok :
Naufal Luthfi Assary         - 2311102125
Nandana Tsany Farrel Arkanan - 2311102143
Muhammad Deka Maulana        - 2311102148
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_KURSI = 10;

struct Film {
    string nama;
    string waktu;
    float harga;
};

void tampilkanDaftarFilm() {
    cout << " |================================================================|\n";
    cout << " |                      DAFTAR FILM HARI INI                      |\n";
    cout << " |================================================================|\n";
    cout << " |            FILM              |   WAKTU     |      HARGA        |\n";
    cout << " |------------------------------|-------------|-------------------|\n";
    cout << " | 1. Vina Sebelum 7 Hari       | Pagi        | Rp. 30.000,-      |\n";
    cout << " |                              | Siang       | Rp. 35.000,-      |\n";
    cout << " | 2. POSSESSION                | Pagi        | Rp. 30.000,-      |\n";
    cout << " |                              | Siang       | Rp. 35.000,-      |\n";
    cout << " | 3. Badarawudi Di Desa Penari | Pagi        | Rp. 30.000,-      |\n";
    cout << " |                              | Siang       | Rp. 35.500,-      |\n";
    cout << " |================================================================|\n";
}

Film pilihFilm() {
    char kode;
    char waktu;
    Film film;
    
    cout << " Kode Film [1/2/3] : ";
    cin >> kode;
    cout << " Waktu Tayang Pagi/Siang [P/S] : ";
    cin >> waktu;
    
    switch(kode) {
        case '1':
            film.nama = "300: Rise of Empire";
            film.harga = (waktu == 'P' || waktu == 'p') ? 30000 : 35000;
            film.waktu = (waktu == 'P' || waktu == 'p') ? "Pagi <11:00-13:30>" : "Siang <14:30-17:00>";
            break;
        case '2':
            film.nama = "WARZONE";
            film.harga = (waktu == 'P' || waktu == 'p') ? 30000 : 35000;
            film.waktu = (waktu == 'P' || waktu == 'p') ? "Pagi <11:30-13:30>" : "Siang <16:00-17:30>";
            break;
        case '3':
            film.nama = "Kingdom of Heaven";
            film.harga = (waktu == 'P' || waktu == 'p') ? 30000 : 35500;
            film.waktu = (waktu == 'P' || waktu == 'p') ? "Pagi <12:00-14:00>" : "Siang <15:00-17:00>";
            break;
        default:
            cout << " Inputan Kode Film Tidak Sesuai\n";
            break;
    }
    return film;
}

int main() {
    char jawab;

    do {
        tampilkanDaftarFilm();
        Film film = pilihFilm();
        
        cout << " Nama Penonton : ";
        string nama_penonton;
        cin >> nama_penonton;

        cout << " Jumlah Tiket : ";
        int jumlah_tiket;
        cin >> jumlah_tiket;

        cout << "\n -> Masukkan nomor kursi yang telah terisi\n\n";
        int kursi_terisi[jumlah_tiket];
        for (int i = 0; i < jumlah_tiket; ++i) {
            cout << " Kursi Terisi " << i + 1 << " : ";
            cin >> kursi_terisi[i];
        }

        int kursi_kosong[jumlah_tiket];
        for (int i = 0; i < jumlah_tiket; ++i) {
            kursi_kosong[i] = MAX_KURSI - kursi_terisi[i];
        }

        cout << "\n NOMOR KURSI KOSONG: \n";
        cout << " -------------------------\n";
        for (int i = 0; i < jumlah_tiket; ++i) {
            cout << " Nomor Kursi " << i + 1 << " : " << kursi_kosong[i] << "\n";
        }

        float total_harga = film.harga * jumlah_tiket;
        float potongan = (jumlah_tiket >= 5) ? 0.1 * total_harga : 0;
        float ppn = 0.02 * total_harga;
        float total_bayar = total_harga - potongan + ppn;

        cout << "\n Pembayaran : Rp." << total_harga << "\n";
        cout << " Potongan : Rp." << potongan << "\n";
        cout << " PPN : Rp." << ppn << "\n";
        cout << " Total Bayar : Rp." << total_bayar << "\n";

        float uang_bayar;
        do {
            cout << " Uang Bayar : Rp.";
            cin >> uang_bayar;
            if (uang_bayar < total_bayar) {
                cout << " Uang yang Anda masukkan kurang.\n";
            }
        } while (uang_bayar < total_bayar);

        float uang_kembali = uang_bayar - total_bayar;
        cout << " Uang Kembali : Rp." << uang_kembali << "\n";
        cout << "\n MOHON DATANG TEPAT WAKTU \n";
        cout << " =-=-= TERIMA KASIH ATAS KUNJUNGAN ANDA =-=-=\n";

        cout << "\n Input Data Lagi [Y/T] : ";
        cin >> jawab;
    } while (jawab == 'Y' || jawab == 'y');

    return 0;
}
