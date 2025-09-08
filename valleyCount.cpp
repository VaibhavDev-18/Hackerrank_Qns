#include <iostream>

int valleyCounts(int steps, std::string path) {
    int prevCountDown = 0, valleyCount = 0, countDown = 0;

    for (auto &x: path) {
        if (x == 'U') countDown--;
        else countDown++;
        if (countDown == 0 && prevCountDown > 0) valleyCount++;
        prevCountDown = countDown;
    }
    return valleyCount;
}

int main () {
    int steps = 0;
    std::cout << "Enter steps: ";
    std::cin >> steps;

    std::string path;
    std::cout << "Enter path: ";
    std::cin >> path;
    std::cout << valleyCounts(steps, path) << std::endl;
    return -0;
}