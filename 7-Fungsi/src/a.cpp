#include <iostream>
using namespace std;

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        int harga_bebek;
        int biaya_jantan, biaya_betina;

        // Hitung harga bebek jantan
        if (jantan[i] < 10) {
            harga_bebek = 100000;
        } else if (jantan[i] <= 50) {
            harga_bebek = 75000;
        } else {
            harga_bebek = 50000;
        }
        biaya_jantan = jantan[i] * harga_bebek;

        // Hitung harga bebek betina
        if (betina[i] < 10) {
            harga_bebek = 100000;
        } else if (betina[i] <= 50) {
            harga_bebek = 75000;
        } else {
            harga_bebek = 50000;
        }
        biaya_betina = betina[i] * harga_bebek;

        // Cetak total biaya
        cout << biaya_jantan + biaya_betina << endl;
    }

    return 0;
}
