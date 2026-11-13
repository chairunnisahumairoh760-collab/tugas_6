
#include <iostream>
using namespace std;

// Variabel
int pilihan, jumlah, harga, total;
int ulang;

// FUNCTION VOID 1: Menampilkan menu
void tampilkanMenu() {
    cout << "========================================" << endl;
    cout << "       SELAMAT DATANG DI TIKET BUS" << endl;
    cout << "========================================" << endl;
    cout << "Silakan pilih tujuan perjalanan Anda" << endl;
    cout << "========================================" << endl;
    cout << "1. Malang - Surabaya  Rp35.000" << endl;
    cout << "2. Malang - Pasuruan  Rp20.000" << endl;
    cout << "3. Malang - Jombang   Rp25.000" << endl;
    cout << "========================================" << endl;
}

// FUNCTION VOID 2: Memilih tujuan
void pilihTujuan() {
    cout << "Pilih tujuan (1/2/3): ";
    cin >> pilihan;

    cout << "Jumlah penumpang: ";
    cin >> jumlah;

    if (pilihan == 1) {
        harga = 35000;
        cout << "Tujuan : Malang - Surabaya" << endl;
    }
    else if (pilihan == 2) {
        harga = 20000;
        cout << "Tujuan : Malang - Pasuruan" << endl;
    }
    else if (pilihan == 3) {
        harga = 25000;
        cout << "Tujuan : Malang - Jombang" << endl;
    }
    else {
        harga = 0;
        cout << "Maaf, pilihan tujuan tidak tersedia." << endl;
    }
}

// FUNCTION VOID 3: Menghitung pembayaran
void hitungTotal() {
    total = harga * jumlah;
}

// FUNCTION VOID 4: Menampilkan tiket
void tampilkanTiket() {
    cout << endl;
    cout << "========================================" << endl;
    cout << "             NOTA PEMBELIAN" << endl;
    cout << "========================================" << endl;

    cout << "Harga tiket : Rp" << harga << endl;
    cout << "Jumlah      : " << jumlah << " penumpang" << endl;
    cout << "Total bayar : Rp" << total << endl;

    cout << "========================================" << endl;
    cout << "Terima kasih telah memesan tiket." << endl;
    cout << "Selamat menikmati perjalanan!" << endl;
    cout << "========================================" << endl;
}

// PROGRAM UTAMA
int main() {

    do {
        tampilkanMenu();
        pilihTujuan();

        if (harga > 0 && jumlah > 0) {
            hitungTotal();
            tampilkanTiket();
        }
        else if (harga > 0 && jumlah <= 0) {
            cout << "Jumlah penumpang harus lebih dari 0." << endl;
        }

        cout << endl;
        cout << "Apakah ingin memesan tiket lagi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;
        cout << "Pilihan: ";
        cin >> ulang;

        cout << endl;

    } while (ulang == 1);

    cout << "Terima kasih telah menggunakan layanan kami!" << endl;

    return 0;
}
