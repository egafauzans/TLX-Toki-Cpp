#include <iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == i || j == (N - i - 1)) {
                // jika baris atau kolom saat ini adalah yang pertama atau terakhir, cetak bintang
                cout << "*";
            } else {
                // selain itu, cetak titik
                cout << ".";
            }
        }
        cout << "\n";
    }
}