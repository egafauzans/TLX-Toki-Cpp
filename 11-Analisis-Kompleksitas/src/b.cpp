#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> data(N);
    long long totalSum = 0;

    for (int i = 0; i < N; ++i) {
        cin >> data[i];
        totalSum += data[i];
    }

    for (int i = 0; i < N; ++i) {
        cout << (totalSum - data[i]) << endl;
    }

    return 0;
}
