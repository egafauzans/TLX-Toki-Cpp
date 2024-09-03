#include <iostream>
using namespace std;

int main() {
    int n = 47;
    while (true) {
        if (n == 0) {
            break;
        }
        cout << "*";
        n = n / 10;
    }
}
