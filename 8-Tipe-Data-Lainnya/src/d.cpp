#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";
    string result;

    for (char c : s) {
        // Konversi karakter ke huruf kapital
        char upper_char = toupper(c);

        // Hitung karakter berikutnya dalam urutan alfabet
        if (upper_char == 'Z') {
            result += 'A'; // 'Z' diganti menjadi 'A'
        } else {
            result += upper_char + 1; // Ganti dengan karakter berikutnya
        }
    }

    cout << result << endl;

    return 0;
}
