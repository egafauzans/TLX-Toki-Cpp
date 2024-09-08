#include <iostream>
using namespace std;

int jantan[4] = {0, 10, 50, 60};
int betina[4] = {7, 80, 9, 40};

// Fungsi untuk menghitung selisih absolut antara dua jumlah
int selisih(int a, int b) {
    if (a > b) {
        return a - b;
    } else {
        return b - a;
    }
}

// Fungsi untuk menghitung denda pada hari tertentu
int denda_pada_hari(int hari) {
    int selisih_bebek = selisih(jantan[hari], betina[hari]);
    return 1000 * selisih_bebek;
}

// Fungsi untuk menghitung total denda
int total_denda() {
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += denda_pada_hari(i);
    }
    return total;
}

int main() {
    cout << total_denda() << endl;
    return 0;
}
