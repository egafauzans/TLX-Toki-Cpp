#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";

    // Mengambil substring dari karakter ke-33 hingga ke-40
    cout << s.substr(32, 8) << endl;

    return 0;
}
