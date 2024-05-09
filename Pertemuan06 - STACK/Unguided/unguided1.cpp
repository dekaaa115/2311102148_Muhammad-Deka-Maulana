// Muhammad Deka Maulana
// 2311102148

#include<iostream>

using namespace std;

const int Max_148 = 100;
char Kata_148[Max_148]; // Deklarasi array bernama Kata_148 sebagai stack
int Top_148 = -1;

// Prosedur PushHuruf_148 untuk menambahkan huruf pada stack
void PushHuruf_148(char Huruf_148) {
    if (Top_148 < Max_148 - 1) {
        Kata_148[++Top_148] = Huruf_148;
    }
}

// Fungsi PeekHurufPertama_148 untuk melihat huruf atau elemen pertama yang disimpan pada stack
char PeekHurufPertama_148() {
    if (Top_148 >= 0) {
        return Kata_148[Top_148];
    }
    return '\0';
}

// Fungsi isEmpty_148 untuk memeriksa stack kosong atau tidak
bool isEmpty_148() {
    return (Top_148 == -1);
}

// Fungsi CekPalindrom_148 untuk memeriksa kata yang diinputkan user merupakan kata palindrom atau tidak
bool CekPalindrom_148(const char* InputKata_148, int Panjang_148) {
    // Memasukkan setengah huruf dari total huruf pada kata yang diinputkan user kedalam stack
    for (int i = 0; i < Panjang_148 / 2; i++) {
        PushHuruf_148(InputKata_148[i]);
    }

    // Menentukan jumlah dari setengah karakter kedua dari kata yang diinputkan user 
    int Kedua_148;
    if (Panjang_148 % 2 == 0) {
        Kedua_148 = Panjang_148 / 2;
    } else if (Panjang_148 % 2 == 1) {
        Kedua_148 = Panjang_148 / 2 + 1;
    }

    // Membandingkan setengah karakter kedua dengan setengah karakter pertama menggunakan fungsi PeekHurufPertama_148
    for (int i = Kedua_148; i < Panjang_148; i++) {
        if (PeekHurufPertama_148() != InputKata_148[Kedua_148]) {
            return false;
        }
    }
    return true;
}

int main() {
    char InputKata_148[Max_148];
    cout << "-=-= CEK KATA PALINDROME =-=-" << endl;
    cout << "Masukkan kata yang ingin di cek : ";
    cin.getline(InputKata_148, Max_148); // Memasukkan setiap karakter/huruf yang diinputkan user kedalam array InputKata_148

    // Menghitung panjang string input
    int PanjangKata_148 = 0;
    while (InputKata_148[PanjangKata_148] != '\0') {
        PanjangKata_148++;
    }

    // Mengecek kata yang diinputkan palindrom atau tidak menggunakan fungsi CekPalindrom_148
    if (CekPalindrom_148(InputKata_148, PanjangKata_148)) {
        cout << "Kata " << InputKata_148 << " adalah Palindrom" << endl;  
    } else {
        cout << "Kata " << InputKata_148 << " adalah bukan Palindrom" << endl;
    }
    
    return 0;
}
