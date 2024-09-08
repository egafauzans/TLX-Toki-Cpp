#include <iostream>
#include <string>
using namespace std;

int hitung_vokal(string s) {
    // Kasus dasar: jika string kosong
    if (s.empty()) {
        return 0;
    }

    // Ambil karakter pertama dari string
    char c = s[0];
    
    // Cek apakah karakter pertama adalah vokal
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        // Jika vokal, tambahkan 1 dan panggil rekursif untuk substring yang tersisa
        return 1 + hitung_vokal(s.substr(1));
    } else {
        // Jika bukan vokal, panggil rekursif untuk substring yang tersisa
        return hitung_vokal(s.substr(1));
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << hitung_vokal("lorem ipsum dolor sit amet fermentum egestas luctus praesent torquent justo.") << endl;
}
