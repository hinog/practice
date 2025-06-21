#include <iostream>
#include <algorithm>
#include <vector>

int count_two_factors(int n) {
    int count = 0;
    while (n % 2 == 0) {
        n /= 2;
        count++;
    }
    return count;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }


    int min_shifts = 30; // 2^30 > 10^9
    for (int i = 0; i < N; ++i) {
        int shifts = count_two_factors(A[i]);
        if (shifts < min_shifts) {
            min_shifts = shifts;
        }
    }
    // std::vector<int> shifts(N);
    // for (int i = 0; i < N; ++i) {
    //     shifts[i] = count_two_factors(A[i]);
    // }
    // int min_shifts = *std::min_element(shifts.begin(), shifts.end());
    std::cout << min_shifts << std::endl;
    return 0;
}