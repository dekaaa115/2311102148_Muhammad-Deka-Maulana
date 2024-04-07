#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

const int TABLE_SIZE_148 = 100; // deklarasi variabel TABLE_SIZE_148 dengan nilai 100

// Struktur data mahasiswa
struct Mahasiswa_148
{
    string nama_148;
    string nim_148;
    int nilai_148;
};

// Struktur data untuk setiap node
class HashNode_148
{
    // deklarasi variabel name_148, nim_148, dan nilai_148
public:
    string name_148;
    string nim_148;
    int nilai_148;

    HashNode_148(string name_148, string nim_148, int nilai_148)
    {
        this->name_148 = name_148;
        this->nim_148 = nim_148;
        this->nilai_148 = nilai_148;
    }
};

// Class HashMap_148
class HashMap_148
{
private:
    // deklarasi vector table_148 dengan ukuran TABLE_SIZE_148
    vector<HashNode_148 *> table_148[TABLE_SIZE_148];

public:
    // Fungsi Hash Sederhana
    int hashFunc_148(string key_148)
    {
        int hash_val_148 = 0;
        for (char c_148 : key_148)
        {
            hash_val_148 += c_148;
        }
        return hash_val_148 % TABLE_SIZE_148;
    }

    // Tambah data
    void insert_148(string name_148, string nim_148, int nilai_148)
    {
        int hash_val_148 = hashFunc_148(name_148);
        for (auto node_148 : table_148[hash_val_148])
        {
            if (node_148->name_148 == name_148)
            {
                node_148->nim_148 = nim_148;
                node_148->nilai_148 = nilai_148;
                cout << "Data Mahasiswa dengan Nama " << name_148 << " berhasil ditambahkan." << endl;
                return;
            }
        }
        table_148[hash_val_148].push_back(new HashNode_148(name_148, nim_148, nilai_148));
    }

    // Hapus data
    void remove_148(string name_148)
    {
        int hash_val_148 = hashFunc_148(name_148);
        for (auto it_148 = table_148[hash_val_148].begin(); it_148 != table_148[hash_val_148].end(); ++it_148)
        {
            if ((*it_148)->name_148 == name_148)
            {
                delete *it_148;
                table_148[hash_val_148].erase(it_148);
                cout << "Data Mahasiswa dengan nama " << name_148 << " berhasil dihapus." << endl;
                return;
            }
        }
    }

    // Cari data berdasarkan NIM
    void searchByNIM_148(string nim_148)
    {
        bool found_148 = false;
        for (int i_148 = 0; i_148 < TABLE_SIZE_148; ++i_148)
        {
            for (auto node_148 : table_148[i_148])
            {
                if (node_148->nim_148 == nim_148)
                {
                    // Menampilkan data mahasiswa pakai setw agar rapi
                    cout << "\n -=-=-=-=-=-= CARI DATA MAHASISWA (NIM) =-=-=-=-=-=-" << endl;
                    cout << " ---------------------------------------------------" << endl;
                    cout << left << "| " << setw(15) << "Nama"
                        << "| " << setw(20) << "NIM"
                        << "| " << setw(10) << "Nilai"
                        << " |" << endl;
                    cout << " ---------------------------------------------------" << endl;
                    cout << "| " << left << setw(15) << node_148->name_148
                        << "| " << left << setw(20) << node_148->nim_148
                        << "| " << left << setw(10) << node_148->nilai_148 << " |" << endl;
                    cout << " ---------------------------------------------------" << endl;
                    found_148 = true;
                    return;
                }
            }
        }
        if (!found_148)
        {
            cout << "Mahasiswa dengan NIM " << nim_148 << " tidak ditemukan." << endl;
        }
    }

    // Cari data berdasarkan rentang nilai
    void CariRentangNilai_148(int NilaiMin_148, int NilaiMax_148)
    {
        bool found_148 = false;

        // Menampilkan data mahasiswa pakai setw agar rapi
        cout << "\n =-=-=-= CARI DATA MAHASISWA (RENTANG NILAI) =-=-=-=" << endl;
        cout << " ---------------------------------------------------" << endl;
        cout << left << "| " << setw(15) << "Nama"
            << "| " << setw(20) << "NIM"
            << "| " << setw(10) << "Nilai"
            << " |" << endl;
        cout << " ---------------------------------------------------" << endl;
        for (int i_148 = 0; i_148 < TABLE_SIZE_148; ++i_148)
        {
            for (auto node_148 : table_148[i_148])
            {
                if (node_148->nilai_148 >= NilaiMin_148 && node_148->nilai_148 <= NilaiMax_148)
                {
                    cout << "| " << left << setw(15) << node_148->name_148
                        << "| " << left << setw(20) << node_148->nim_148
                        << "| " << left << setw(10) << node_148->nilai_148 << " |" << endl;
                    found_148 = true;
                }
            }
        }
        if (!found_148)
        {
            cout << "Tidak ada data Mahasiswa dengan nilai antara " << NilaiMin_148 << " dan " << NilaiMax_148 << "." << endl;
        }
        cout << " ---------------------------------------------------" << endl;
    }

    // Tampilkan data
    void print_148()
    {
        // Menampilkan data mahasiswa pakai setw agar rapi
        cout << "\n -=-=-=-=-=-=-=-=-= DATA MAHASISWA =-=-=-=-=-=-=-=-=" << endl;
        cout << " ---------------------------------------------------" << endl;
        cout << left << "| " << setw(15) << "Nama"
            << "| " << setw(20) << "NIM"
            << "| " << setw(10) << "Nilai"
            << " |" << endl;
        cout << " ---------------------------------------------------" << endl;
        for (int i_148 = 0; i_148 < TABLE_SIZE_148; ++i_148)
        {
            for (auto pair_148 : table_148[i_148])
            {
                cout << "| " << left << setw(15) << pair_148->name_148
                    << "| " << left << setw(20) << pair_148->nim_148
                    << "| " << left << setw(10) << pair_148->nilai_148 << " |" << endl;
            }
        }
        cout << " ---------------------------------------------------" << endl;
    }
};

int main()
{
    HashMap_148 map_148;
    int choice_148;
    string name_148;
    string nim_148;
    int nilai_148;
    int search1_148, search2_148;
    do
    {
        // Menampilkan menu
        cout << "\n -=-=-=-=-=-= MENU LIST NILAI MAHASISWA =-=-=-=-=-=-" << endl;
        cout << "1. Tambah data Mahasiswa" << endl;
        cout << "2. Hapus data Mahasiswa" << endl;
        cout << "3. Cari data Mahasiswa (NIM)" << endl;
        cout << "4. Cari data Mahasiswa (Rentang Nilai)" << endl;
        cout << "5. Tampilkan" << endl;
        cout << "6. Keluar" << endl;
        cout << "Masukkan pilihan : ";
        cin >> choice_148;
        switch (choice_148)
        {

        // Pilihan 1: Tambah data Mahasiswa
        case 1:
            cout << "\n -=-=-=-=-=-=-= TAMBAH DATA MAHASISWA =-=-=-=-=-=-=-" << endl;
            cout << "Masukkan nama : ";
            cin >> name_148;
            cout << "Masukkan NIM : ";
            cin >> nim_148;
            cout << "Masukkan nilai : ";
            cin >> nilai_148;
            map_148.insert_148(name_148, nim_148, nilai_148);
            break;

        // Pilihan 2: Hapus data Mahasiswa
        case 2:
            cout << "\n =-=-=-=-=-= HAPUS DATA MAHASISWA (nama) =-=-=-=-=-=" << endl;
            cout << "Masukkan nama : ";
            cin >> name_148;
            map_148.remove_148(name_148);
            break;

        // Pilihan 3: Cari data Mahasiswa (NIM)
        case 3:
            cout << "\n -=-=-=-=-=-= CARI DATA MAHASISWA (NIM) -=-=-=-=-=-=" << endl;
            cout << "Masukkan NIM : ";
            cin >> nim_148;
            map_148.searchByNIM_148(nim_148);
            break;

        // Pilihan 4: Cari data Mahasiswa (Rentang Nilai)
        case 4:
            cout << "\n =-=-=-= CARI DATA MAHASISWA (RENTANG NILAI) =-=-=-=" << endl;
            cout << "Masukkan nilai minimum : ";
            cin >> search1_148;
            cout << "Masukkan nilai maksimum : ";
            cin >> search2_148;
            map_148.CariRentangNilai_148(search1_148, search2_148);
            break;

        // Pilihan 5: Tampilkan data
        case 5:
            map_148.print_148();
            break;

        // Pilihan 6: Keluar
        case 6:
            break;

        // Pilihan tidak tersedia
        default:
            cout << "Pilihan tidak tersedia!!" << endl;
        }
    } while (choice_148 != 6);

    return 0;
}
