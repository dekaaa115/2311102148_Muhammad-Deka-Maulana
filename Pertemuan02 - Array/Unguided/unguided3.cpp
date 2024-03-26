#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Masukkan ukuran array: ";
    cin >> n;

    // membuat array dengan ukuran n
    int arr[n];

    // input elemen-elemen array
    cout << "Masukkan elemen-elemen array[" << n << "]:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Array[" << i+1 << "]: ";
        cin >> arr[i];
    }

    char choice_148;
    do {
        // menampilkan menu
        cout << "\n----- Deka Menu -----:\n";
        cout << "1. Nilai Maksimum\n";
        cout << "2. Nilai Minimum\n";
        cout << "3. Nilai Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Masukkan Pilihan: ";
        cin >> choice_148;

        switch (choice_148) {

            case '1': {
                // mencari nilai maksimum
                int max_148 = arr[0];
                for (int i = 1; i < n; ++i) {
                    if (arr[i] > max_148) {
                        max_148 = arr[i];
                    }
                }
                cout << "Nilai Maksimum: " << max_148 << endl;
                break;
            }

            case '2': {
                // mencari nilai minimum
                int min_148 = arr[0];
                for (int i = 1; i < n; ++i) {
                    if (arr[i] < min_148) {
                        min_148 = arr[i];
                    }
                }
                cout << "Nilai Minimum: " << min_148 << endl;
                break;
            }

            case '3': {
                // menghitung nilai rata-rata
                double sum = 0.0;
                for (int i = 0; i < n; ++i) {
                    sum += arr[i];
                }
                double average = sum / n;
                cout << "Nilai Rata-rata: " << average << endl;
                break;
            }

            case '4':
                cout << "Thanks! Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi.\n";
        }
    } while (choice_148 != '4');

    return 0;
}