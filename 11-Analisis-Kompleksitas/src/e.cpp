#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long rTerbaik = 1;
    long long cTerbaik = N;
    long long selisihTerbaik = cTerbaik - rTerbaik;

    for (long long r = 1; r <= sqrt(N); ++r) {
        if (N % r == 0) {
            long long c = N / r;
            if (r <= c) {
                long long selisih = c - r;
                if (selisih < selisihTerbaik) {
                    rTerbaik = r;
                    cTerbaik = c;
                    selisihTerbaik = selisih;
                }
            }
        }
    }

    cout << rTerbaik << " " << cTerbaik << endl;

    return 0;
}
