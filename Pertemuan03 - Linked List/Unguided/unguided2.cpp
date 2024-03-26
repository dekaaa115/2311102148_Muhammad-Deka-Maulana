#include<iostream>
#include<iomanip>

using namespace std;

struct node{
    string barang_148;
    int harga_148;
    node *prev;
    node *next;
};
    node *head;
    node *tail;

// Prosedur inisiaslisasi 
void Inisialisasi_148(){
    head = nullptr;
    tail = nullptr;
}

// Prosedur tambah node
void TambahNode_148(string produk_148, int harga_148, int posisi_148){
    if(posisi_148 < 1 ){
        cout << "Node yang ingin ditambah diluar jangkauan" << endl;
    } else if(posisi_148 == 1){
        node *baru = new node;
        baru->barang_148 = produk_148;
        baru->harga_148 = harga_148;
        baru->next = head;
        baru->prev = nullptr;
        if(head != nullptr){
            head->prev = baru;
        } else {
            tail = baru;
        }
        head = baru;
    } else {
        node *current = head;
        node *baru = new node;
        baru->barang_148 = produk_148;
        baru->harga_148 = harga_148;
        baru->next = nullptr;
        baru->prev = nullptr;
        int hitung_148 = 1;
        while(hitung_148 < posisi_148 - 1){
            hitung_148++;
            current = current->next;
        }
        baru->next = current->next;
        baru->prev = current;
        if(current->next != nullptr){
            current->next->prev = baru;
        } else {
            tail = baru;
        }
        current->next = baru;
    }
}

// Prosedur hapus node
void HapusNode_148(int posisi_148){
    if(posisi_148 < 1){
        cout << "Posisi node yang ingin dihapus diluar jangkauan" << endl;
    } else if(posisi_148 == 1){
        node *current = head;  // Simpan node pertama
        head = head->next;     // Geser head ke node berikutnya
        if(head != nullptr) {
            head->prev = nullptr;  // Tetapkan nullptr ke prev dari node baru pertama
        }
        delete current;  // Hapus node pertama
    } else {
        node *current = head;
        int hitung_148 = 1;
        while(hitung_148 < posisi_148){
            hitung_148++;
            current = current->next;
        }
        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
    }
}

// Fungsi update data
bool UpdateData_148(string ProdukLama_148, string ProdukBaru_148, int HargaBaru_148){
    node *current = head;
    while (current != nullptr){
        if(current->barang_148 == ProdukLama_148){
            current->barang_148 = ProdukBaru_148;
            current->harga_148 = HargaBaru_148;
            return true;
        }
        current = current->next;
    }
    return false;
}

// Prosedur hapus semua data
void HapusSemua_148(){
    node *current = head;
    while(current != nullptr){
        node *temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
    tail = nullptr;
}

// Prosedur tampilkan data
void TampilData_148(){
    node *current = head;
    if(head != nullptr){
        cout << left << setw(20) << "- Nama Produk -" << right << setw(5) << "- Harga -" << endl; 
        while(current != nullptr){
            cout << left << setw(20) << current->barang_148 << right << setw(7) << current->harga_148 << endl; 
            current = current->next;
        }
    }
    cout << endl;
}

int main(){
    int pilih_148, HargaBaru_148, PosisiProduk_148;
    string ProdukBaru_148, ProdukLama_148;
    char yakin_148;
    Inisialisasi_148();
    cout << "--- DAFTAR PRODUK SKINCARE ---" << endl;
    TambahNode_148("Hanasui", 30000, 1 );
    TambahNode_148("Wardah", 50000, 1);
    TambahNode_148("Skintific", 100000, 1);
    TambahNode_148("Somethinc", 150000, 1);
    TambahNode_148("Originote", 60000, 1);
    TampilData_148();

    MenuUtama:
    cout << "--- TOKO SKINCARE PURWOKERTO ---" << endl;
    cout << "1. Tambah data" << endl;
    cout << "2. Hapus data" << endl;
    cout << "3. Update data" << endl;
    cout << "4. Tambah data urutan tertentu" << endl;
    cout << "5. Hapus data urutan tertentu" << endl;
    cout << "6. Hapus seluruh data" << endl;
    cout << "7. Tampilkan data" << endl;
    cout << "8. exit" << endl;
    cout << "Pilihan anda = "; cin >> pilih_148;
    cout << endl;

    switch(pilih_148){
        
        case 1 :
            cout << "- Tambah Data Produk -" << endl;
            cout << "Masukkan nama produk yang ingin ditambahkan = "; cin >> ProdukBaru_148;
            cout << "Masukkan harga produk = "; cin >> HargaBaru_148;
            TambahNode_148(ProdukBaru_148, HargaBaru_148, 1);
            cout << "Produk telah ditambahkan" << endl;
            cout << endl;
            goto MenuUtama;
            break;

        case 2 :
            cout << "- Hapus Data Produk Pertama - " << endl;
            HapusNode_148(1);
            cout << "Data produk ke-1 telah dihapus" << endl;
            cout << endl;
            goto MenuUtama;
            break;

        case 3 :
            cout << "- Update Data Produk -" << endl;
            cout << "Masukkan produk lama yang ingin diganti = ";cin >> ProdukLama_148;
            cout << "Masukkan nama produk baru = "; cin >> ProdukBaru_148;
            cout << "Masukkan harga produk baru = "; cin >> HargaBaru_148;
            UpdateData_148(ProdukLama_148, ProdukBaru_148, HargaBaru_148);
            cout << "Produk telah diupdate" << endl;
            cout << endl;
            goto MenuUtama;
            break;

        case 4 :
            cout << "- Tambah Data Urutan Tertentu -" << endl;
            cout << "Masukkan nama produk yang ingin ditambahkan = "; cin >> ProdukBaru_148;
            cout << "Masukkan harga produk baru = "; cin >> HargaBaru_148;
            cout << "Masukkan posisi produk dalam database = "; cin >> PosisiProduk_148;
            TambahNode_148(ProdukBaru_148, HargaBaru_148, PosisiProduk_148);
            cout << "Produk telah ditambahkan" << endl;
            cout << endl;
            goto MenuUtama;
            break;

        case 5 :
            cout << "- Hapus Data Urutan Tertentu -" << endl;
            cout << "Masukkan urutan produk yang ingin dihapus = "; cin >> PosisiProduk_148;
            HapusNode_148(PosisiProduk_148);
            cout << "Data produk urutan ke-" << PosisiProduk_148 << " telah dihapus" << endl;
            cout << endl;
            goto MenuUtama;
            break;

        case 6 :
            cout << "- Hapus Seluruh Data -" << endl;
            cout << "Apakah anda yakin ingin menghapus semua produk? [y/n] = "; cin >> yakin_148;
            if(yakin_148 == 'y' || yakin_148 == 'Y'){
                HapusSemua_148();
                cout << "Semua data produk telah dihapus" << endl;
            } else if(yakin_148 == 'n' || yakin_148 == 'N'){
                cout << "Aksi dibatalkan" << endl;
            }
            cout << endl;
            goto MenuUtama;
            break;

        case 7 :
            cout << "- Tampilkan Data -" << endl;
            TampilData_148();
            cout << endl;
            goto MenuUtama;
            break;

        case 8 :
            cout << "Anda telah keluar dari program" << endl;
            return 0;
        default :
            cout << "Pilihan yang anda masukkan tidak tersedia" << endl;
            cout << endl;
            goto MenuUtama;
            break;
    }    
}