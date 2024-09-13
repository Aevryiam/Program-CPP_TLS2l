#include <iostream>
#include <cmath>  // fungsi matematika 

using namespace std;

// untuk menampilkan menu
void displayMenu() {
    cout << "Kalkulator Kalkulus Sederhana\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "5. Mod\n";
    cout << "6. Turunan\n";
    cout << "7. Integral\n";
    cout << "8. Keluar\n";
    cout << "Pilih operasi: ";
}

// penjumlahan
double tambah(double a, double b) {
    return a + b;
}

// pengurangan
double kurang(double a, double b) {
    return a - b;
}

// perkalian
double kali(double a, double b) {
    return a * b;
}

// pembagian
double bagi(double a, double b){
    return a / b;
}

// mod
int mod(int a, int b){
    return a % b;
}

// turunan (turunan pertama dari ax^n adalah a*n*x^(n-1))
void turunan(double a, double n) {
    double hasil_a = a * n;
    double hasil_n = n - 1;
    cout << "Turunan dari " << a << "x^" << n << " adalah " << hasil_a << "x^" << hasil_n << endl;
}

// integral (integral dari ax^n adalah (a/(n+1))x^(n+1) + C)
void integral(double a, double n) {
    double hasil_a = a / (n + 1);
    double hasil_n = n + 1;
    cout << "Integral dari " << a << "x^" << n << " adalah (" << hasil_a << ")x^" << hasil_n << " + C" << endl;
}

int main() {
    int pilihan;
    double num1, num2;

    do {
        displayMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:  // Penjumlahan
                cout << "Masukkan dua angka: "<<endl;
                cin >> num1 >> num2;
                cout << "Hasil: " << tambah(num1, num2) << endl;
                break;

            case 2:  // Pengurangan
                cout << "Masukkan dua angka: "<<endl;
                cin >> num1 >> num2;
                cout << "Hasil: " << kurang(num1, num2) << endl;
                break;

            case 3:  // Perkalian
                cout << "Masukkan dua angka: "<<endl;
                cin >> num1 >> num2;
                cout << "Hasil: " << kali(num1, num2) << endl;
                break;

            case 4: // Pembagian
                cout << "Masukkan dua angka: "<<endl;
                cin >> num1 >> num2;
                cout << "Hasil: " << bagi(num1, num2) <<endl;
                break;

            case 5: // Mod
                int int_num1, int_num2;
                cout << "Masukkan dua angka: " <<endl;
                cin >> int_num1 >> int_num2;
                cout << "Hasil: " << mod(int_num1, int_num2) <<endl;
                break;

            case 6:  // Turunan
                cout << "Masukkan koefisien dan pangkat (a dan n untuk ax^n): " <<endl;
                cin >> num1 >> num2;
                turunan(num1, num2);
                break;

            case 7:  // Integral
                cout << "Masukkan koefisien dan pangkat (a dan n untuk ax^n): "<<endl;
                cin >> num1 >> num2;
                integral(num1, num2);
                break;

            case 8:  // Keluar
                cout << "Terima kasih telah menggunakan kalkulator ini!" << endl;
                break;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;

    } while (pilihan != 8);

    return 0;
}
