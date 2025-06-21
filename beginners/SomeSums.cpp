#include <iostream>

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;
    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        int d = digitSum(i);
        if (d >= A && d <= B) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}