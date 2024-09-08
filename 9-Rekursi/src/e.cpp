#include <iostream>
using namespace std;

int jumlah_digit(int n) {
    // Kasus dasar: jika n adalah 0
    if (n == 0) {
        return 0;
    } else {
        // Digit terakhir: n % 10
        // Bilangan tanpa digit terakhir: n / 10
        return (n % 10) + jumlah_digit(n / 10);
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << jumlah_digit(1982304556) << endl;
}
