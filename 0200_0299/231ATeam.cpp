#include <iostream>

int main() {
    int n, a, b, c, answers = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        if (a + b + c >= 2) {
            ++answers;
        }
    }
    std::cout << answers << '\n';
    return 0;
}