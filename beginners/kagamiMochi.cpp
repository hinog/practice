#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> d(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> d[i];
    }
    std::sort(d.begin(), d.end(), std::greater<int>());
    int height = 0;
    int last_d = 1000;
    for (int i = 0; i < N; ++i) {
        if (d[i] < last_d) {
            height += 1;
            last_d = d[i];
        }
    }
    std::cout << height << std::endl;
    return 0;
}