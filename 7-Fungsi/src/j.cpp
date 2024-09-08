#include <iostream>
using namespace std;

// Perbaiki fungsi tukar() menggunakan referensi
void tukar(int& a, int& b) {
    int temp = a; // Simpan nilai a ke dalam temp
    a = b;        // Salin nilai b ke a
    b = temp;     // Salin nilai temp (yang sebelumnya adalah a) ke b
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    int p = 10, q = 20, r = 30;
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    tukar(p, q);  // Menukar nilai p dan q
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    tukar(q, r);  // Menukar nilai q dan r
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;
}
