#include <iostream>

std::string kangaroo (int x1, int v1, int x2, int v2) {
    if (x1 == x2 && v1 == v2) return "YES";
    int reachingPt = v1 * x2;

    for (int i = 0; i < reachingPt; i++) {
        x1 += v1;
        x2 += v2;
        if (x1 == x2) return "YES";
    }
    return "NO";
};

int main () {
    int x1, v1, x2, v2;
    std::cout << "Enter x1, v1, x2, v2: ";
    std::cin >> x1 >> v1 >> x2 >> v2;

    std::cout << kangaroo(x1, v1, x2, v2) << std::endl;
    return 0;
}