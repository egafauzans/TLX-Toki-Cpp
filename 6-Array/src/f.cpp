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

    int count = 0; // Variabel untuk menghitung jumlah kandang yang memenuhi syarat
    int minLuas = 80000; // Luas minimum yang harus dipenuhi

    // Mengiterasi setiap elemen dalam array luas
    for (int i = 0; i < 4; i++) { // Loop untuk setiap toko
        for (int j = 0; j < 3; j++) { // Loop untuk setiap merek dalam toko
            if (luas[i][j] >= minLuas) { // Memeriksa apakah luas kandang memenuhi syarat
                count++; // Menambah hitungan jika memenuhi syarat
            }
        }
    }

    // Menampilkan hasil
    cout << count << endl;

    return 0;
}
