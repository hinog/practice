#include <iostream>
#include <algorithm>

int main() {
    int N, Y;
    std::cin >> N >> Y;
    bool found = false;
    int Max1000 = (Y/ 10000) < N ? (Y / 10000) : N;
    for (int i = 0; i <= Max1000; ++i) {
        int Max5000 = (Y - 10000 * i) / 5000 < N - i ? (Y - 10000 * i) / 5000 : N - i;
        for (int j = 0; j <= Max5000; ++j) {
            int k = N - i - j;
            if (k < 0) continue;
            if (10000 * i + 5000 * j + 1000 * k == Y) {
                std::cout << i << " " << j << " " << k << std::endl;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (!found) {
        std::cout << "-1 -1 -1" << std::endl;
    }
    return 0;
}
