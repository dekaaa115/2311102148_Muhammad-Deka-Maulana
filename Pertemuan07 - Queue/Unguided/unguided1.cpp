#include<iostream>

using namespace std;

// Definisi struct node
struct node {
    string nama_148;
    node *next;
};

node *front; // node depan
node *back;  // node belakang

// Inisialisasi node depan dan belakang jadi NULL
void Inisialisasi_148() {
    front = NULL;
    back = NULL;
}

// Cek apakah queue kosong
bool isEmpty_148() {
    return front == NULL;
}

// Tambah data ke antrian
void TambahData_148(string name_148) {
    node *baru = new node;
    baru->nama_148 = name_148;
    baru->next = NULL;
    if (isEmpty_148()) {
        front = back = baru;
    } else {
        back->next = baru;
        back = baru;
    }
}

// Kurangi data dari antrian
void KurangiAntrian_148() {
    if (isEmpty_148()) {
        cout << "Antrian masih kosong!" << endl;
    } else {
        node *hapus = front;
        front = front->next;
        delete hapus;
        if (front == NULL) {
            back = NULL;
        }
    }
}

// Hitung jumlah antrian
int HitungAntrian_148() {
    int jumlah_148 = 0;
    node *hitung = front;
    while (hitung != NULL) {
        hitung = hitung->next;
        jumlah_148++;
    }
    return jumlah_148;
}

// Hapus semua antrian
void HapusAntrian_148() {
    node *hapus, *bantu = front;
    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    front = back = NULL;
}

// Tampilkan antrian
void LihatAntrian_148() {
    if (isEmpty_148()) {
        cout << "Antrian kosong!" << endl;
    } else {
        cout << "=-= Antrian saat ini =-=" << endl;
        node *bantu = front;
        int NomorAntrian_148 = 1;
        while (bantu != NULL) {
            cout << NomorAntrian_148 << ". " << bantu->nama_148 << endl;
            bantu = bantu->next;
            NomorAntrian_148++;
        }
    }
    cout << endl;
}

int main() {
    // Tambah 3 data nama ke antrian
    TambahData_148("Alya");
    TambahData_148("Kiki");
    TambahData_148("Artika");

    // Tampilkan data yang sudah ditambah
    LihatAntrian_148();

    // Kurangi data
    KurangiAntrian_148();

    // Tampilkan data setelah dikurangi
    LihatAntrian_148();

    // Hapus semua antrian
    HapusAntrian_148();

    // Tampilkan data setelah dihapus
    LihatAntrian_148();

    return 0;
}
