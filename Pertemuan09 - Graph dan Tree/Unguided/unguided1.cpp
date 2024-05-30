/*
Muhammad Deka Maulana - 2311102148
*/

#include <iostream>
#include <iomanip>

using namespace std;

string simpulKota_148[100];
int busur_148[100][100];
int jumlahSimpul_148 = 0; 
void hitungJarak_148(){
    for (int baris = 0; baris < jumlahSimpul_148; baris++){
        cout << " " << setiosflags(ios::left) << setw(15) << simpulKota_148[baris] << " : ";
        for (int kolom = 0; kolom < jumlahSimpul_148; kolom++){
            if (busur_148[baris][kolom] != 0){
                cout << " " << simpulKota_148[kolom] << " (" << busur_148[baris][kolom] << ") ";
            }
        }
        cout << endl;
    }
}

int main(){
    cout << "Masukkan jumlah simpul : ";
    cin >> jumlahSimpul_148;
    for (int i = 0; i < jumlahSimpul_148; i++){
        cout << "Masukkan simpul ke-" << i+1 << " : ";
        cin >> simpulKota_148[i];
    }
    for (int i = 0; i < jumlahSimpul_148; i++){
        for (int j = 0; j < jumlahSimpul_148; j++){
            cout << "Bobot busur_148 dari " << simpulKota_148[i] << " --> " << simpulKota_148[j] << " : ";
            cin >> busur_148[i][j];
        } 
    }
    hitungJarak_148();
    return 0;
}
