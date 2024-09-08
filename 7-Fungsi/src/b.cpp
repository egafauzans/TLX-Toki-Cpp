#include <iostream>
using namespace std;

// Fungsi untuk menghitung biaya pembelian bebek
int biaya(int jumlah) {
    int harga_bebek;

    if (jumlah < 10) {
        harga_bebek = 100000;
    } else if (jumlah <= 50) {
        harga_bebek = 75000;
    } else {
        harga_bebek = 50000;
    }

    return jumlah * harga_bebek;
}

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        // Hitung biaya untuk bebek jantan dan betina menggunakan fungsi biaya
        int biaya_jantan = biaya(jantan[i]);
        int biaya_betina = biaya(betina[i]);

        // Cetak total biaya
        cout << biaya_jantan + biaya_betina << endl;
    }

    return 0;
}
