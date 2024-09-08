#include <iostream>
using namespace std;

int main() {
    // Inisialisasi array luas dengan luas kandang dari setiap toko dan merek
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    // Harga jual per cm persegi untuk masing-masing merek
    int harga_jual[3] = {100, 120, 150};

    // Variabel untuk menyimpan total luas setiap merek
    long long total_luas[3] = {0}; // Menggunakan long long untuk menghindari overflow

    // Menghitung total luas untuk masing-masing merek
    for (int i = 0; i < 4; i++) { // Loop untuk setiap toko
        for (int j = 0; j < 3; j++) { // Loop untuk setiap merek dalam toko
            total_luas[j] += luas[i][j]; // Menambahkan luas kandang ke total luas merek j
        }
    }

    // Menghitung dan menampilkan hasil penjualan untuk setiap merek
    for (int j = 0; j < 3; j++) {
        long long hasil_penjualan = total_luas[j] * harga_jual[j];
        cout << hasil_penjualan << endl;
    }

    return 0;
}
