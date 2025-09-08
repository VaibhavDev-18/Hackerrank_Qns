#include <iostream>

int pageCountInt(int n, int p) {
    return std::min(p / 2, n / 2 - p / 2);
}

std::pair<int, int> pageCount(int n, int p) {
    if (n == p || n - 1 == p)
        return {0, 0};
    int revCount = 0, frontCount = 0;

    for (int i = n; i >= p; i -= 2) 
        revCount++;

    for (int i = 1; i < p; i += 2)
        frontCount++;
    return {revCount, frontCount};
}

int main () {
    int n = 0, p = 0;
    std::cout << "Enter total pages, page to see: ";
    std::cin >> n >> p;

    auto result = pageCount(n, p);
    std::cout << "revCount = " << result.first << " frontCount: " << result.second << std::endl;

    std::cout << "leastPageCount: " << pageCountInt(n, p) << std::endl;
    return 0;
}