#include <iostream>
using namespace std;

void cetak_menurun(int n) {
    if (n <= 0) {
        return; // Kasus dasar: jika n kurang dari atau sama dengan 0, hentikan rekursi
    }
    cout << n << endl;
    cetak_menurun(n - 1); // Pemanggilan rekursif
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cetak_menurun(10);
}
