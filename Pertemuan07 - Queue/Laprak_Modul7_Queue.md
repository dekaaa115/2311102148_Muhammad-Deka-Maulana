# <h1 align="center">Laporan Praktikum Modul 7 - Queue</h1>
<p align="center">Muhammad Deka Maulana - 2311102148</p>

## Dasar Teori


## Guided 

# Queue

### A. Pengertian Queue
Queue (antrian) adalah suatu jenis struktur data yang dapat diproses dengan sifat FIFO (First In First Out), dimana elemen yang pertama kali masuk ke antrian akan keluar pertama kalinya. Ada dua jenis operasi yang bias dilakukan di antrian : enqueue (memasukkan elemen baru ke dalam elemen) dan dequeue (adalah mengeluarkan satu elemen dari suatu antrian). Antrian dapat dibuat dengan menggunakan : Liniear Array dan Circular Array.

![Ilustrasi Proses Queue](ilustrasi_proses_queue.jpg)

### B. Deklarasi Struktur Data Queue
Queue dapat dideklarasikan dengan bentuk berikut :

```C++
define maxsize 100
typdef struct {
    int jumlah; //jumlah data
    int depan; //ujung depan
    int belakang; //ujung belakang
char data [ maxsize ]; //array isi queue
} queue;
```

Sedangkan bentuk fungsi-fungsi queue dapat dilihat berikut ini :

1. Fungsi Initialize :
```C++
void initialize ( queue *q )
{
q -> jumlah = 0;
q -> depan = 0;
q -> belakang = 0;
}
```

2. Fungsi Is_Empty, yang antara lain digunakan untuk :
- Untuk memeriksa apakah Antrian sudah penuh atau belum
- Dengan cara memeriksa nilai Tail, jika Tail = -1 maka empty
- Tidak perlu memeriksa Head, karena Head adalah tanda untuk kepala antrian (elemen pertama dalam antrian) yan:g tidak akan berubah

Berikut adalah deklarasi fungsi.ls_Empty :
```C++
int Is_Empty (queue *q) {
if (q  jumlah == 0)
return (1);
else
return (0);
} 
```

3. Fungsi Is_Full, berfungsi untuk :
- Untuk mengecek apakah Antrian sudah penuh atau belum
- Dengan cara mengecek nilai Tail, jika Tail >= MAX-1 (karena MAX-1 adalah batas elemen array pada C) berarti sudah penuh

Deklarasi fungsi.Is_Empty :
```C++
int Is_Full (queue *q) {
if (q  jumlah == MAX)
return (1);
else
return (0);
}
```

4. Fungsi Enqueue , dengan tujuan :
- Untuk menambahkan elemen ke dalam Antrian, penambahan elemen selalu ditambahkan di elemen paling belakang.
- Penambahan elemen selalu menggerakan variabel Tail dengan cara increment counter Tail.

Deklarasi fungsi.Enqueue :
```C++
void enqueue(char X, Queue* q) {
    if (Is_Full(q)) {
        std::cerr << "\nERROR: queue sudah penuh\n";
    } else {
        q->data[q->belakang] = X;
        q->belakang = (q->belakang + 1) % maxsize;
        ++(q->count);
    }
}

```

### C. Perbedaan Implementasi Queue Linked List dengan Queue Array
![Perbedaan LinkedList dan Queue Array](perbedaan_linkedlistdanqueue(1).png)
![Perbedaan LinkedList dan Queue Array](perbedaan_linkedlistdanqueue(2).png)

### 1. Guided

```C++
#include<iostream>

using namespace std;

const int MaksimalAntrian = 5;
int front = 0;
int back = 0;
string QueueTeller[5];

// Mengecek apakah antrian sudah penuh atau belum
bool isFull(){
    if(back == MaksimalAntrian){
        return true;
    } else {
        return false;
    }
}

// Mengecek apakah antrian masih kosong atau tidak
bool isEmpty(){
    if(back == 0){
        return true;
    } else {
        return false;
    }
}

// Menambah antrian
void TambahData(string nama){
    if(isFull()){
        cout << "Antrian sudah penuh" << endl;
    } else if(!isFull()){
        if(isEmpty()){
            QueueTeller[0] = nama;
            front++;
            back++;
        } else if(!isEmpty()){
            QueueTeller[back] = nama;
            back++;
        }
    }
}

// Mengurangi antrian
void KurangAntrian(){
    if(isEmpty()){
        cout << "Antrian masih kosong" << endl;
    } else if(!isEmpty()){
        for(int i = 0; i < back; i++){
            QueueTeller[i] =  QueueTeller[i+1];
        }
        back--;
    }
}

// Menghitung banyak antrian
int Count(){
    return back;
}

// Menghapus seluruh antrian
void ClearQueue(){
    if(isEmpty()){
        cout << "Antrian masih kosong" << endl;
    } else if(!isEmpty()){
        for(int i = 0; i < back; i++){
            QueueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

// Melihat Antrian
void ViewQueue(){
    cout << "Data antrian = " << endl;
    for(int i = 0; i < MaksimalAntrian; i++){
        if(QueueTeller[i] != ""){
            cout << i+1 << ". " << QueueTeller[i] << endl;
        } else {
            cout << i+1 << ". " << "(kosong)" << endl;
        }
    }
}

// main fungsi
int main(){
    
    //Menambah 3 data nama kedalam antrian
    TambahData("Alya");
    TambahData("Kiki");
    TambahData("Artika");

    //menampilkan data yang sudah ditambahkan
    ViewQueue();

    //mengurangi data
    KurangAntrian();

    //menampilkan data setelah dikurangi
    ViewQueue();

    //menghapus seluruh antrian
    ClearQueue();

    //menampilkan data setelah dihapus
    ViewQueue();
}
```

DESKRIPSI PROGRAM

## Unguided 

### 1. SOAL

![Output Soal Unguided 1](soal_unguided1_deka.jpg)
```C++

```

DESKRIPSI PROGRAM

#### Output:

![Screenshot Output Unguided 1](output_unguided1_deka.png)

### 2. SOAL

![Output Soal Unguided 2](soal_unguided2_deka.jpg)

```C++

```

DESKRIPSI PROGRAM

#### Output:

![Screenshot Output Unguided 2](output_unguided2_deka.png)

## Kesimpulan



## Referensi
[1] 
<br>[2] 