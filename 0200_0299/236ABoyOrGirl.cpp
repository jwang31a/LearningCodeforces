#include <iostream>
#include <cstring>
#include <unordered_set>

int main(void) {
    std::unordered_set<char> set;
    std::string s;
    std::cin >> s;
    int len = s.size();
    for (int i = 0; i < len; i++) {
        // std::cout << "everything good";
        set.insert(s[i]);
    }
    std::cout << (set.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
    return 0;
}