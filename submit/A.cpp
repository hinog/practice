#include <iostream>

int main(int argc, char *argv[]) {
    int a, b, c;
    std::string s;
    std::cin >> a;
    std::cin >> b >> c;
    std::cin >> s;

    int sum = a + b + c;
    std::cout << sum << " " << s << std::endl;
    return 0;
}