// contoh program class dan struct
#include <iostream>
#include <string>
using namespace std;

// class untuk laptop asus
class LaptopAsus_148 {
public:
    // data laptop
    string model;
    int ram;
    double ukuranLayar;

    // metode laptop
    void display() {
        cout << "Laptop Asus - Model : " << model << ", RAM : " << ram << "GB, Ukuran Layar : " << ukuranLayar << " inc" << endl;
    }
};

// struct untuk laptop lenovo
struct LaptopLenovo_148 {
    // data laptop
    string model;
    int ram;
    double ukuranLayar;

    // metode laptop
    void display() {
        cout << "Laptop Asus - Model : " << model << ", RAM : " << ram << "GB, Ukuran Layar : " << ukuranLayar << " inc" << endl;
    }
};

int main() {
    // membuat objek dari class LaptopAsus_148
    LaptopAsus_148 asus;
    asus.model = "ROG Strix G15";
    asus.ram = 16;
    asus.ukuranLayar = 15.6;
    asus.display();

    // Membuat objek dari struct LaptopLenovo_148
    LaptopLenovo_148 lenovo;
    lenovo.model = "IdeaPad 5";
    lenovo.ram = 8;
    lenovo.ukuranLayar = 14.0;
    lenovo.display();

    return 0;
}
