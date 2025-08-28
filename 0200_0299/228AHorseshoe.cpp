#include <iostream>
#include <unordered_set>

int main() {
    int color;
    std::unordered_set<int> set;
    for (int i = 0; i < 4; i++) {
        std::cin >> color;
        set.insert(color);
    }
    std::cout << 4 - set.size();
    return 0;
}