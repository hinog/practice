#include <iostream>

int main () {
    int A, B, C, X;
    std::cin >> A >> B >> C >> X;
    int count = 0;
    int maxA = (X / 500) < A ? (X / 500) : A;
    for (int i = 0; i <= maxA; ++i) {
        int remaining_after_A = X - (i * 500);
        int maxB = (remaining_after_A / 100) < B ? (remaining_after_A / 100) : B;
        for (int j = 0; j <= maxB; ++j) {
            int remaining_after_B = remaining_after_A - (j * 100);
            if (remaining_after_B <= C * 50) {
                count++;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}