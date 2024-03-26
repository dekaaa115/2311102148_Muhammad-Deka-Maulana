#include <iostream>
#include <iomanip>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama_148;
    int umur_148;
    Node* next;
};

Node* head;
Node* tail;

// Inisialisasi Node
void inisialisasi_148() {
    head = NULL;
    tail = NULL;
}

// Pengecekan
bool kosong_148() {
    if (head == NULL)
        return true;
    else
        return false;
}

// Tambah Depan
void insertDepan_148(string nama, int umur) {
    // bikin node baru
    Node* baru = new Node;
    baru->nama_148 = nama;
    baru->umur_148 = umur;
    baru->next = NULL;

    if (kosong_148() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        baru->next = head;
        head = baru;
    }
}

// Tambah Belakang
void insertBelakang_148(string nama, int umur) {
    // buat node baru
    Node* baru = new Node;
    baru->nama_148 = nama;
    baru->umur_148 = umur;
    baru->next = NULL;

    if (kosong_148() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        tail->next = baru;
        tail = baru;
    }
}

//vHitung Jumlah List
int hitungList_148() {
    Node* hitung;
    hitung = head;
    int jumlah = 0;

    while (hitung != NULL) {
        jumlah++;
        hitung = hitung->next;
    }

    return jumlah;
}

// Tambah Tengah
void insertTengah_148(string nama, int umur, int posisi) {
    if (posisi < 1 || posisi > hitungList_148()) {
        cout << "Posisi diluar jangkauan!" << endl;
    }
    else if (posisi == 1) {
        cout << "Posisi yg anda masukan bukan yg tengah!" << endl;
    }
    else {
        Node* baru, * bantu;
        baru = new Node();
        baru->nama_148 = nama;
        baru->umur_148 = umur;

        // lintasan
        bantu = head;
        int nomor = 1;

        while (nomor < posisi - 1) {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus Depan
void hapusDepan_148() {
    Node* hapus;

    if (kosong_148() == false) {
        if (head->next != NULL) {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "KOSONG!" << endl;
    }
}

// Hapus Belakang
void hapusBelakang_148() {
    Node* hapus;
    Node* bantu;

    if (kosong_148() == false) {
        if (head != tail) {
            hapus = tail;
            bantu = head;

            while (bantu->next != tail) {
                bantu = bantu->next;
            }

            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "KOSONG!" << endl;
    }
}

// Hapus Tengah
void hapusTengah_148(int posisi) {
    Node* hapus, * bantu, * bantu2;

    if (posisi < 1 || posisi > hitungList_148()) {
        cout << "Posisi diluar jangkauan!" << endl;
    }
    else if (posisi == 1) {
        cout << "Posisi yg anda masukan bukan yg tengah!" << endl;
    }
    else {
        int nomor = 1;
        bantu = head;

        while (nomor <= posisi) {
            if (nomor == posisi - 1) {
                bantu2 = bantu;
            }

            if (nomor == posisi) {
                hapus = bantu;
            }

            bantu = bantu->next;
            nomor++;
        }

        bantu2->next = bantu;
        delete hapus;
    }
}

// Ubah Depan
void gantiDepan_148(string nama, int umur) {
    if (kosong_148() == false) {
        head->nama_148 = nama;
        head->umur_148 = umur;
    }
    else {
        cout << "TIDAK ADA PERUBAHAN!" << endl;
    }
}

// Ubah Tengah
void gantiTengah_148(string nama, int umur, int posisi) {
    Node* bantu;

    if (kosong_148() == false) {
        if (posisi < 1 || posisi > hitungList_148()) {
            cout << "Posisi diluar jangkauan!" << endl;
        }
        else if (posisi == 1) {
            cout << "Posisi yg anda masukan bukan yg tengah!" << endl;
        }
        else {
            bantu = head;
            int nomor = 1;

            while (nomor < posisi) {
                bantu = bantu->next;
                nomor++;
            }

            bantu->nama_148 = nama;
            bantu->umur_148 = umur;
        }
    }
    else {
        cout << "KOSONG!" << endl;
    }
}

// Ubah Belakang
void ubahBelakang_148(string nama, int umur) {
    if (kosong_148() == false) {
        tail->nama_148 = nama;
        tail->umur_148 = umur;
    }
    else {
        cout << "KOSONG!" << endl;
    }
}

// Hapus List
void hapusList_148() {
    Node* bantu, * hapus;
    bantu = head;

    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }

    head = tail = NULL;
    cout << "Anda telah berhasil menghapusnya!" << endl;
}

// Tampilkan List
void reveal_148() {
    Node* bantu;
    bantu = head;

    cout << left << setw(15) << "-Nama-" << right << setw(4) << "-Usia-" << endl; // biar rapi

    if (kosong_148() == false) {
        while (bantu != NULL) {
            cout << left << setw(15) << bantu->nama_148 << right << setw(4) << bantu->umur_148 << endl; // biar lurus
            bantu = bantu->next;
        }

        cout << endl;
    }
    else {
        cout << "KOSONG!" << endl;
    }
}

int main() {
    inisialisasi_148(); // Inisialisasi Linked List
    cout << "\n--- DEKA PROGRAM ---" << endl; // Menampilkan nama dan umur awal & menjawab poin a
    insertDepan_148("Karin", 18);
    insertDepan_148("Hoshino", 18);
    insertDepan_148("Akechi", 20); 
    insertDepan_148("Yusuke", 19);
    insertDepan_148("Michael", 18);
    insertDepan_148("Jane", 20);
    insertDepan_148("John", 19);
    insertDepan_148("Deka", 20);
    reveal_148();

    // Menjawab poin b
    cout << "--- (b) Penghapusan data 'Akechi' ---" << endl;
    hapusTengah_148(6);
    reveal_148();

    // Menjawab poin c
    cout << "--- (c) Penambahan data 'Futaba (18)' diantara John & Jane ---" << endl;
    insertTengah_148("Futaba", 18, 3);
    reveal_148();

    // Menjawab poin d
    cout << "--- (d) Penambahan data 'Igor (20)' di awal ---" << endl;
    insertDepan_148("Igor", 20);
    reveal_148();

    // Menjawab poin e & f
    cout << "--- (e) Mengubah data 'Michael' menjadi 'Reyn (18)' ---" << endl;
    cout << "--- (f) Tampilan Akhir! ---" << endl;
    gantiTengah_148("Reyn", 18, 6);
    reveal_148();

    return 0;
}