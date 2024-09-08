#include <iostream>
using namespace std;

int main() {
    bool lampu[101]; // Array untuk menyimpan status lampu, indeks 1 hingga 100

    // Pada mulanya, seluruh lampu dalam kondisi mati.
    for (int i = 1; i <= 100; i++) {
        lampu[i] = false;
    }

    // Untuk setiap jam (pukul p),
    for (int p = 1; p <= 10; p++) {
        // untuk setiap lampu nomor i,
        for (int i = p; i <= 100; i += p) {
            // jika i merupakan kelipatan p,
            // tekan saklarnya (ubah status dari mati ke menyala atau sebaliknya)
            lampu[i] = !lampu[i];
        }
    }

    // Hitung banyaknya lampu yang menyala,
    int count = 0;
    for (int i = 1; i <= 100; i++) {
        if (lampu[i]) {
            count++;
        }
    }

    // lalu cetak.
    cout << count << endl;

    return 0;
}
