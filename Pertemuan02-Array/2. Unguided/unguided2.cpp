#include <iostream>
using namespace std;

int main(){

    int x, y, z;    // deklarasi variabel untuk ukuran array

    cout << "Masukkan ukuran 'x' dalam array : ";    // meminta input ukuran array dari pengguna
    cin >> x;
    cout << "Masukkan ukuran 'y' dalam array : "; 
    cin >> y;
    cout << "Masukkan ukuran 'z' dalam array : "; 
    cin >> z;

    int arr[x][y][z];   // deklarasi array tiga dimensi dengan ukuran yang telah diinputkan

    cout << "Masukkan Array :" << endl;   // meminta pengguna untuk mengisi array
    for (int i = 0; i < x; i++) 
    {
        for (int j = 0; j < y; j++) 
        {
            for (int k = 0; k < z; k++) 
            {
                cout << "Input Array[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "Output Array :" << endl;    // menampilkan isi array
    for (int i = 0; i < x; i++) 
    {
        for (int j = 0; j < y; j++) 
        {
            for (int k = 0; k < z; k++) 
            {
                cout << arr[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}