#include <iostream>
#include <string>
using namespace std;

string biner(int n) {
    // Kasus dasar: representasi biner dari 0 adalah "0"
    if (n == 0) {
        return "0";
    }
    // Kasus dasar: representasi biner dari 1 adalah "1"
    if (n == 1) {
        return "1";
    }

    // Panggilan rekursif: bagi n dengan 2
    string result = biner(n / 2);

    // Tambahkan digit terakhir berdasarkan genap atau ganjil
    if (n % 2 == 0) {
        return result + "0";
    } else {
        return result + "1";
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << biner(0) << endl;
    cout << biner(1) << endl;
    cout << biner(512) << endl;
    cout << biner(1697) << endl;
    cout << biner(1048575) << endl;
}
