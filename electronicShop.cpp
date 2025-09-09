#include <iostream>
#include <vector>

int getMoneySpent(std::vector<int> keyboards, std::vector<int> drives, int b) {
    int maxSpent = 0;
    for (int i = 0; i < keyboards.size(); i++) {
        for(int j = 0; j < drives.size(); j++) {
            if (keyboards[i] + drives[j] == b)  return keyboards[i] + drives[j];
            if (keyboards[i] + drives[j] < b) maxSpent = std::max(maxSpent, keyboards[i] + drives[j]);
        }
    }
    return maxSpent == 0 ? -1 : maxSpent;
}

int main() {
    int budget = 0, keyBSize = 0, driveSize = 0;
    std::cout << "Enter budget, keyboard, drive arr size: ";
    std::cin >> budget >> keyBSize >> driveSize;

    std::vector<int> keyB(keyBSize);
    std::vector<int> drives(driveSize);

    std::cout << "Enter keyboard: ";
    for (auto &x: keyB)
        std::cin >> x;
    
    std::cout << "Enter drives: ";
    for (auto &x: drives)
        std::cin >> x;

    std::cout << getMoneySpent(keyB, drives, budget) << std::endl;
    return 0;
}