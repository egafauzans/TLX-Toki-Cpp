#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> data(N);
    int totalSum = 0;

    for (int i = 0; i < N; ++i) {
        cin >> data[i];
        totalSum += data[i];
    }

    for (int i = 0; i < N; ++i) {
        cout << (totalSum - data[i]) << endl;
    }

    return 0;
}
