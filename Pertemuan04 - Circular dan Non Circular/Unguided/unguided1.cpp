#include<iostream>
#include<iomanip>

using namespace std;

// Deklarasi struct node
struct node{
    string Nama_148;
    string NIM_148;
    node *next;
};
node *head;
node *tail;

// Inisialisasi node head & tail
void Inisialisasi_148(){
    head = NULL;
    tail = NULL;
}

// Fungsi pengecekan
bool isEmpty_148(){
    if(head == NULL){
        return true;
    } else {
        return false;
    }
}

// Prosedur hitung node
int HitungNode_148(){
    node *hitung = head;
    int jumlah_148 = 0;
    while (hitung != NULL){
        hitung = hitung->next;
        jumlah_148++;
    }
    return jumlah_148;
}

// Prosedur tambah depan
void TambahDepan_148(string Name_148, string NIM_148){
    node *baru = new node;
    baru->Nama_148 = Name_148;
    baru->NIM_148 = NIM_148;
    baru->next = NULL;
    if(isEmpty_148() == true){
        head = tail = baru;
        tail->next = NULL;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Prosedur tambah belakang
void TambahBelakang_148(string Name_148, string NIM_148){
    node *baru = new node;
    baru->Nama_148 = Name_148;
    baru->NIM_148 = NIM_148;
    baru->next = NULL;
    if(isEmpty_148() == true){
        head = tail = baru;
        tail->next = NULL;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Prosedur tambah tengah
void TambahTengah_148(string Name_148, string NIM_148, int Position_148){
    if(Position_148 < 1 || Position_148 > HitungNode_148()){
        cout << "Node yang ingin ditambah diluar jangkauan !!" << endl;
    } else if(Position_148 == 1){
        cout << "Node yang ingin ditambah bukan ditengah !!"<< endl;
    } else {
        node *bantu = head;
        node *baru = new node;
        baru->Nama_148 = Name_148;
        baru->NIM_148 = NIM_148;
        int hitung_148 = 1;
        while(hitung_148 < Position_148 - 1){
            bantu = bantu->next;
            hitung_148++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Prosedur hapus depan
void HapusDepan_148(){
    node *hapus;
    if(isEmpty_148() == true){
        cout << "List masih kosong !!" << endl;
    } else {
        if(head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        } else {
            head = tail = NULL;
        }
    }
}

// Fungsi tampil data depan
string TampilDepan_148(){
    string NamaYangDihapus_148 = "";
    if(isEmpty_148() == false){
        NamaYangDihapus_148 = head->Nama_148;
    } else {
        cout << "List masih kosong !!" << endl;
    }
    return NamaYangDihapus_148;
}

// Prosedur hapus belakang
void HapusBelakang_148(){
    node *hapus, *bantu;
    if(isEmpty_148() == true){
        cout << "List masih kosong !!" << endl;
    } else {
        if(head != tail){
            hapus = tail;
            bantu = head;
            while(bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
        } else {
            head = tail = NULL;
        }
    }
}

// Fungsi tampil data belakang
string TampilBelakang_148(){
    string NamaYangDihapus_148 = "";
    if(isEmpty_148() == false){
        NamaYangDihapus_148 = tail->Nama_148;
    } else {
        cout << "List masih kosong !!" << endl;
    }
    return NamaYangDihapus_148;
}

// Prosedur hapus tengah
void HapusTengah_148(int posisi_148){
    if(posisi_148 < 1 || posisi_148 > HitungNode_148()){ 
        cout << "Posisi node yang akan dihapus offside !!" << endl;
    } else if(posisi_148 == 1){
        cout << "Node yang ingin dihapus bukan node tengah" << endl;
    } else {
        node *hapus, *bantu, *bantu2;
        bantu = head;
        int nomor_148 = 1;
        while(nomor_148 <= posisi_148){
            if(nomor_148 == posisi_148 - 1){
                bantu2 = bantu;
            } else if(nomor_148 == posisi_148){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor_148++; 
        }
        bantu2->next = bantu;
        delete hapus;
    }
}

// Fungsi tampil data tengah
string TampilTengah_148(int Position_148){
    string NamaYangDihapus_148 = "";
    node *tampil = head;
    node *bantu;
    if(isEmpty_148() == false){
        int nomor_148 = 1;
        while (nomor_148 <= Position_148 - 1){
            if(nomor_148 == Position_148 - 1){
                bantu = tampil;
            }
            tampil = tampil->next;
            nomor_148++;
        }
        bantu->next = tampil;
        NamaYangDihapus_148 = tampil->Nama_148;       
    } else {
        cout << "List masih kosong !!" << endl;
    }
    return NamaYangDihapus_148;
}

// Prosedur ubah depan
void UbahDepan_148(string NewName_148, string NewNIM_148){
    if(isEmpty_148() == true){
        cout << "List masih kosong !!" << endl;
    } else {
        head->Nama_148 = NewName_148;
        head->NIM_148 = NewNIM_148;
    }
}

// Prosedur ubah belakang
void UbahBelakang_148(string NewName_148, string NewNIM_148){
    if(isEmpty_148() == true){
        cout << "List masih kosong !!" << endl;
    } else {
        tail->Nama_148 = NewName_148;
        tail->NIM_148 = NewNIM_148;
    }
}

// Prosedur ubah tengah
void UbahTengah_148(string NewName_148, string NewNIM_148, int Position_148){
    if(isEmpty_148() == true){
        cout << "List masih kosong!" << endl;
    } else {
        if(Position_148 < 1 || Position_148 > HitungNode_148()){
            cout << "Node yang ingin diubah diluar jangkauan !!" << endl;
        } else if(Position_148 == 1){
            cout << "Node yang ingin diubah bukan ditengah !!" << endl;
        } else {
            node *bantu;
            bantu = head;
            int nomor_148 = 1;
            while(nomor_148 < Position_148){
                bantu = bantu->next;
                nomor_148++;
            }
        bantu->Nama_148 = NewName_148;
        bantu->NIM_148 = NewNIM_148;
        }
    }
}

// Prosedur hapus list
void HapusList_148(){
    node *hapus;
    node *bantu = head;
    if(isEmpty_148() == true){
        cout << "List masih kosong !!" << endl;
    } else {
        while(bantu != NULL){
            hapus = bantu;
            bantu = bantu->next;
            delete hapus;   
        }
        head = tail = NULL;
    }
}

// Prosedur tampil list
void TampilList_148(){
    node *bantu = head;
    if(isEmpty_148() == true){
        cout << "List masih kosong !!" << endl;
    } else {
        cout << "------------------------------------------" << endl;
        cout << "|         NAMA         |       NIM       |" << endl;
        cout << "------------------------------------------" << endl;
        while(bantu != NULL){
            cout << "|" << setw(22) << left << bantu->Nama_148 << "|" << setw(17) << left << bantu->NIM_148 << "|" << endl;
            bantu = bantu->next;
        }
        cout << "------------------------------------------" << endl;
    }
}

int main(){
    int Position_148, Choose_148;
    string Name_148, OldName_148, NIM_148, OldNIM_148;
    char Yakin_148;
    Inisialisasi_148();
    MenuUtama:
    cout << "-=-=-=->> PROGRAM SINGLE LINKED LIST <<-=-=-=-=" << endl;
    cout << "-=-=-=-=-=-=->> NON-CIRCULAR <<-=-=-=-=-=-=-=-=" << endl; 
    cout << "1. TAMBAH DEPAN" << endl;
    cout << "Menambahkan data pada awal list" << endl;
    cout << "2. TAMBAH BELAKANG" << endl;
    cout << "Menambahkan data pada akhir list" << endl;
    cout << "3. TAMBAH TENGAH" << endl;
    cout << "Menambahkan data pada urutan tertentu" << endl;
    cout << "4. UBAH DEPAN" << endl;
    cout << "Mengubah data pada urutan pertama" << endl;
    cout << "5. UBAH BELAKANG" << endl;
    cout << "Mengubah data pada urutan terakhir" << endl;
    cout << "6. UBAH TENGAH" << endl;
    cout << "Mengubah data pada urutan tertentu" << endl;
    cout << "7. HAPUS DEPAN" << endl;
    cout << "Menghapus data urutan pertama" << endl;
    cout << "8. HAPUS BELAKANG" << endl;
    cout << "Menghapus data urutan terakhir" << endl;
    cout << "9. HAPUS TENGAH" << endl;
    cout << "Menghapus data urutan tertentu" << endl;
    cout << "10. HAPUS LIST" << endl;
    cout << "Menghapus seluruh data" << endl;
    cout << "11. TAMPILKAN" << endl;
    cout << "Menampilkan list data yang tersimpan" << endl;
    cout << "0. KELUAR" << endl;
    cout << "Keluar dari program" << endl << endl;
    cout << "Masukkan pilihan anda : ";
    cin >> Choose_148;
    cout << endl;
    switch(Choose_148){

        case 1:
            cout << "=-=-=-=-=-=->> TAMBAH DEPAN <<-=-=-=-=-=-=" << endl;
            cout << ">> Masukkan data yang ingin ditambahkan <<" << endl;
            cout << "Nama Mahasiswa : ";
            cin >> Name_148;
            cout << "NIM Mahasiswa  : ";
            cin >> NIM_148;
            TambahDepan_148(Name_148, NIM_148);
            cout << "Data berhasil ditambahkan!!" << endl;
            cout << endl;
            goto MenuUtama;
            break;

        case 2:
            cout << "=-=-=-=-=->> TAMBAH BELAKANG <<=-=-=-=-=-=" << endl;
            cout << ">> Masukkan data yang ingin ditambahkan <<" << endl;
            cout << "Nama Mahasiswa : ";
            cin >> Name_148;
            cout << "NIM Mahasiswa  : ";
            cin >> NIM_148;
            TambahBelakang_148(Name_148, NIM_148);
            cout << "Data berhasil ditambahkan!!" << endl;
            cout << endl;
            goto MenuUtama;
            break;

        case 3:
            cout << "=-=-=-=-=-=->> TAMBAH TENGAH <<-=-=-=-=-=-" << endl;
            cout << ">> Masukkan data yang ingin ditambahkan <<" << endl;
            cout << "Nama Mahasiswa : ";
            cin >> Name_148;
            cout << "NIM Mahasiswa  : ";
            cin >> NIM_148;
            cout << "Posisi data    : ";
            cin >> Position_148;
            TambahTengah_148(Name_148, NIM_148, Position_148);
            cout << "Data berhasil ditambahkan!!" << endl;
            cout << endl;
            goto MenuUtama;
            break;

        case 4:
            cout << "=-=-=-=-=-=-=->> UBAH DEPAN <<-=-=-=-=-=-=-=" << endl;
            cout << ">> Masukkan data yang akan diubah <<" << endl;
            cout << "--- Data Lama ---" << endl;
            cout << "Nama Mahasiswa lama : ";
            cin >> OldName_148;
            cout << "NIM Mahasiswa lama  : ";
            cin >> OldNIM_148;
            cout << "-=- Data Baru -=-" << endl;
            cout << "Nama mahasiswa baru : "; 
            cin >> Name_148;
            cout << "NIM mahasiswa baru  : ";
            cin >> NIM_148;
            UbahDepan_148(Name_148, NIM_148);
            cout << "Data mahasiswa " << OldName_148 << " (" << OldNIM_148 << ") telah diganti dengan data mahasiswa baru " << Name_148 << " (" << NIM_148 << ")" << endl;
            cout << endl;
            goto MenuUtama;
            break;

        case 5:
            cout << "=-=-=-=-=-=-=->> UBAH BELAKANG <<-=-=-=-=-=-=-=" << endl;
            cout << ">> Masukkan data yang akan diubah <<" << endl;
            cout << "-=- Data Lama -=-" << endl;
            cout << "Nama Mahasiswa lama : ";
            cin >> OldName_148;
            cout << "NIM Mahasiswa lama  : ";
            cin >> OldNIM_148;
            cout << "-=- Data Baru -=-" << endl;
            cout << "Nama mahasiswa baru : "; 
            cin >> Name_148;
            cout << "NIM mahasiswa baru  : ";
            cin >> NIM_148;
            UbahBelakang_148(Name_148, NIM_148);
            cout << "Data mahasiswa " << OldName_148 << " (" << OldNIM_148 << ") telah diganti dengan data mahasiswa baru " << Name_148 << " (" << NIM_148 << ")" << endl;
            cout << endl;
            goto MenuUtama;
            break;

        case 6:
            cout << "=-=-=-=-=-=-=->> UBAH TENGAH <<-=-=-=-=-=-=-=-" << endl;
            cout << ">> Masukkan data yang akan diubah <<" << endl;
            cout << "-=- Data Lama -=-" << endl;
            cout << "Nama Mahasiswa lama : ";
            cin >> OldName_148;
            cout << "NIM Mahasiswa lama  : ";
            cin >> OldNIM_148;
            cout << "Posisi data lama pada list : ";
            cin >> Position_148;
            cout << "-=- Data Baru -=-" << endl;
            cout << "Nama mahasiswa baru : "; 
            cin >> Name_148;
            cout << "NIM mahasiswa baru  : ";
            cin >> NIM_148;
            UbahTengah_148(Name_148, NIM_148, Position_148);
            cout << "Data mahasiswa " << OldName_148 << " (" << OldNIM_148 << ") pada posisi ke-" << Position_148 << " telah diganti dengan data mahasiswa baru " << Name_148 << " (" << NIM_148 << ")" << endl;
            cout << endl;
            goto MenuUtama;
            break;

        case 7:
            cout << "=-=-=-=-=-=-=->> HAPUS DEPAN <<-=-=-=-=-=-=-=-=" << endl;
            cout << "Apakah anda yakin untuk menghapus data mahasiswa " << TampilDepan_148() << "?? [y/n] : ";
            cin >> Yakin_148;
            if(Yakin_148 == 'y' || Yakin_148 == 'Y'){
                HapusDepan_148();
                cout << "Data telah dihapus !!" << endl;
            } else if(Yakin_148 == 'n' || Yakin_148 == 'N'){
                cout << "Aksi dibatalkan" << endl;
            }
            cout << endl;
            goto MenuUtama;
            break;

        case 8:
            cout << "=-=-=-=-=-=-=->> HAPUS BELAKANG <<-=-=-=-=-=-=-=" << endl;
            cout << "Apakah anda yakin untuk menghapus data mahasiswa " << TampilBelakang_148() << "? [y/n] : ";
            cin >> Yakin_148;
            if(Yakin_148 == 'y' || Yakin_148 == 'Y'){
                HapusBelakang_148();
                cout << "Data telah dihapus !!" << endl;
            } else if(Yakin_148 == 'n' || Yakin_148 == 'N'){
                cout << "Aksi dibatalkan" << endl;
            }
            cout << endl;
            goto MenuUtama;
            break;

        case 9:
            cout << "=-=-=-=-=-=-=->> HAPUS TENGAH <<-=-=-=-=-=-=-=" << endl;
            cout << "Masukkan posisi data yang ingin dihapus : ";
            cin >> Position_148;
            cout << "Apakah anda yakin untuk menghapus data mahasiswa " << TampilTengah_148(Position_148) << "? [y/n] : ";
            cin >> Yakin_148;
            if(Yakin_148 == 'y' || Yakin_148 == 'Y'){
                HapusTengah_148(Position_148);
                cout << "Data telah dihapus !!" << endl;
            } else if(Yakin_148 == 'n' || Yakin_148 == 'N'){
                cout << "Aksi dibatalkan" << endl;
            }
            cout << endl;
            goto MenuUtama;
            break;

        case 10:
            cout << "-=-=-=-=-=-=-=->> HAPUS LIST <<=--=-=-=-=-=-=-=" << endl;
            cout << "Apakah anda yakin untuk menghapus semua data? [y/n] : ";
            cin >> Yakin_148;
            if(Yakin_148 == 'y' || Yakin_148 == 'Y'){
                HapusList_148();
                cout << "List telah terhapus !!" << endl; 
            } else if(Yakin_148 == 'n' || Yakin_148 == 'N'){
                cout << "Aksi dibatalkan" << endl;
            }
            cout << endl;
            goto MenuUtama;
            break;

        case 11:
            cout << "=-=-=-=-=-=->> TAMPIL LIST <<-=-=-=-=-=-=-=" << endl;
            TampilList_148();
            cout << endl;
            goto MenuUtama;
            break;

        case 0:
            cout << "Anda telah keluar dari program !!" << endl;
            return 0;
            break;
        default:
            cout << "Pilihan anda tidak tersedia !!" << endl;
            cout << endl;
            goto MenuUtama;
            break;
    }
}
