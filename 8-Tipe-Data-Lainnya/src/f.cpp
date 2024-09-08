#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if (data.empty()) {
        return "KESALAHAN";
    }
    
    try {
        if (op == '+') {
            long long sum = 0;
            for (const string& s : data) {
                sum += stoll(s); // stoll digunakan untuk menghindari overflow
            }
            return to_string(sum);
        } else if (op == '*') {
            long long product = 1;
            for (const string& s : data) {
                product *= stoll(s); // stoll digunakan untuk menghindari overflow
            }
            return to_string(product);
        } else {
            return "KESALAHAN";
        }
    } catch (const invalid_argument& e) {
        return "KESALAHAN";
    } catch (const out_of_range& e) {
        return "KESALAHAN";
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
