#include <iostream>
#include <vector>

int pickingNumbers(std::vector<int> a) {
    std::vector<int> temp(101, 0);
    int ans = 0;
    for (auto &x: a)
        temp[x]++;
    for (int i = 0; i < 101; i++) {
        if (temp[i] + temp[i + 1] > ans) ans = temp[i] + temp[i + 1];
    }
    return ans;
}

int main() {
    int arrSize = 0;
    std::cout << "Enter array size: ";
    std::cin >> arrSize;
    std::vector<int> ipArray(arrSize);

    std::cout << "Enter array elements: ";
    for (auto &x: ipArray)
        std::cin >> x;
    std::cout << pickingNumbers(ipArray) << std::endl;
}