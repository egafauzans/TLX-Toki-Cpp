#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long int jumlah = 0;  // Mengubah tipe data ke long long int
    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;
        jumlah += x;
    }

    cout << jumlah << endl;  // Menampilkan hasil penjumlahan yang benar
}
