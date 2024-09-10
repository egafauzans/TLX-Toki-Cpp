#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int rTerbaik = 1;
    int cTerbaik = N;
    int selisihTerbaik = cTerbaik - rTerbaik;

    for (int r = 1; r <= sqrt(N); ++r) {
        if (N % r == 0) {
            int c = N / r;
            if (r <= c) {
                int selisih = c - r;
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
