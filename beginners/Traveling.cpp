#include <iostream>
#include <vector>
#include <map>

int main() {
    int N;
    std::cin >> N;
    std::map<int, std::pair<int, int>> points;
    points[0] = {0, 0}; // Starting point at time 0
    for (int i = 0; i < N; ++i) {
        int t, x, y;
        std::cin >> t >> x >> y;
        points[t] = {x, y};
    }

    bool canTravel = true;
    for (auto it = points.begin(); it != points.end(); ++it) {
        auto nextIt = std::next(it);
        if (nextIt == points.end()) break;

        int t1 = it->first, x1 = it->second.first, y1 = it->second.second;
        int t2 = nextIt->first, x2 = nextIt->second.first, y2 = nextIt->second.second;

        int timeDiff = t2 - t1;
        int distance = abs(x2 - x1) + abs(y2 - y1);

        if (timeDiff < distance || (timeDiff - distance) % 2 != 0) {
            canTravel = false;
            break;
        }
    }
    if (canTravel) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}
