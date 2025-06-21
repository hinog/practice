#include <iostream>
#include <vector>
#include <algorithm>

int main () {
    int N;
    std::cin >> N;
    std::vector<int> cards(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> cards[i];
    }
    int alice = 0, bob = 0;
    std::sort(cards.begin(), cards.end(), std::greater<int>());
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            alice += cards[i];
        } else {
            bob += cards[i];
        }
    }
    std::cout << alice - bob << std::endl;
}