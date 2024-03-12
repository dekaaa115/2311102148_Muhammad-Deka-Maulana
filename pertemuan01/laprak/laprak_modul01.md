# <h1 align="center">Laporan Praktikum Modul 1 - Tipe Data</h1>
<p align="center">Muhammad Deka Maulana - 2311102148</p>

## Dasar Teori

Tipe data adalah suatu memori atau media pada komputer yang digunakan untuk menampung informasi atau data sementara. Tipe data berfungsi untuk mempermudah dalam mengelola dan mengolah data yang akan digunakan dalam program. Setiap tipe data memiliki karakteristik dan fungsi yang berbeda, yang mempermudah dalam mengelola data yang sesuai dengan kebutuhan program.
Berikut ini adalah macam-macam tipe data beserta penjelasannya yang terdapat pada C++ :

1.	Tipe data primitif <br/>
Tipe data primitif adalah tipe data bawaan bahasa pemrograman dan bisa langsung digunakan programmer untuk mendeklarasikan variabel. 
Dalam C++, terdapat beberapa tipe data yang termasuk tipe data primitif, yaitu:
    -Int
    -Float
    -Double
    -Boolean
    -Char
    -Void

2.	Tipe Data Abstrak<br/>
Tipe data abstrak adalah tipe data yang berisi nilai yang tidak dapat langsung ditentukan. Ini termasuk jenis data seperti array, object, dan class. Tipe data abstrak hanya menyediakan informasi mengenai jenis data, namun tidak menyediakan informasi mengenai nilai data.
Berikut adalah contoh tipe data abstrak :
    -Array
    -Object
    -Class

3.	Tipe Data Koleksi<br/>
Tipe data koleksi adalah tipe data yang berisi kumpulan data yang dapat diakses secara berurutan. Ini termasuk jenis data seperti array, linked list, stack, queue, dan hash table. Tipe data koleksi memiliki sifat mutable, yang berarti nilainya dapat diubah setelah ditetapkan. 
Berikut contoh tipe data koleksi adalah :
    -Array
    -Linked list
    -Stack
    -Queue
    -Hash table.

## Guided 

### 1. [Tipe Data Primitif]

```C++
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char op;
    float num1, num2;

    cout << "enter operator (+, -, *, /) : ";
    cin >> op;

    cout << "Enter two operands : ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << fixed << setprecision(2) <<
num1 / num2;
            } else {
                cout << "Error! Division by zero is not allowed.";
            }
            break;
        default:
            cout << "Error! Operator is not correct";
    } 
return 0;
}
```
Kode di atas di gunakan untuk memilih operasi penambahan (+), pengurangan (-), perkalian (*), dan pembagian (/) dapat dipilih dengan menggunakan kode di atas. Jika pengguna sudah menginput dua angka saat penginputan cin, keempat operasi ini akan berjalan. Program ini juga memiliki dua tipe data dasar: char dan float. Char digunakan saat memilih switch case, dan float digunakan sebagai tipe data untuk dua angka yang diinput pengguna.

### 2. [Tipe Data Abstrak]

```C++
#include <stdio.h>
#include <string.h>
//Struct
struct Mahasiswa
{
    char name[50];
    char address[100];
    int age;
};
int main()
{

    struct Mahasiswa mhs1, mhs2;

    strcpy(mhs1.name, "Dian");
    strcpy(mhs1.address, "Mataram");
    mhs1.age = 22;
    strcpy(mhs2.name, "Bambang");
    strcpy(mhs2.address, "Surabaya");
    mhs2.age = 23;

    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf ("\n");
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
return 0;
}
```
Kode yang disebutkan di atas digunakan untuk mencetak isi struct. Salah satu contoh tipe data abstrak adalah struktur. Struktur mahasiswa ada dalam kode di atas. Struktur siswa ini memiliki tiga nilai: char nama berukuran 50, char address berukuran 50, dan int usia. Kemudian, nilai diisi pada int main, dan struktur siswa dideklarasikan dengan dua objek: mhs1 bernama Dian dan mhs2 bernama Bambang.
### 3. [Tipe Data Abstrak]

```C++
#include <iostream>
#include <array>
using namespace std;

int main() {
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    cout << "Isi array pertama : " << nilai[0] << endl;
    cout << "Isi array kedua : " << nilai[1] << endl;
    cout << "Isi array ketiga : " << nilai[2] << endl;
    cout << "Isi array keempat : " << nilai[3] << endl;
    cout << "Isi array kelima : " << nilai[4] << endl;
    
return 0;
}
```
Kode di atas mencetak isi dari sebuah array, yang merupakan salah satu contoh tipe data koleksi. Kode ini juga menggunakan library array untuk membantu proses pemrogramannya. Nilai 23, 50, 34, 78, dan 90 termasuk dalam array nilai. lalu di deklarasikan dibawahnya.

## Unguided 

### 1. [Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!]

```C++
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
```
#### Output:
![Screenshot Output Unguided 1](Output_Unguided-1_Deka.png)

Kode di atas meminta pengguna untuk memasukkan nilai jari-jari lingkaran. Setelah pengguna memberikan input, program menghitung luas lingkaran menggunakan rumus \( \pi r^2 \) dengan nilai pi sebesar 3.14159, dan kemudian menampilkan hasilnya. Hasil output program adalah kalimat yang memberitahu pengguna luas lingkaran dengan jari-jari yang telah dimasukkan. Sebagai contoh, jika pengguna memasukkan jari-jari 148, program akan menampilkan pesan: "Luas lingkaran dengan jari-jari 148 adalah: 68813.4." Pesan ini memberikan informasi yang jelas kepada pengguna tentang hasil perhitungan luas lingkaran berdasarkan input yang diberikan.

## Kesimpulan Tipe Data Primitif<br/>
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
