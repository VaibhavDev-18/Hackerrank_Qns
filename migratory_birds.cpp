#include <iostream>
#include <unordered_map>
#include <vector>

int migratoryBirds(std::vector<int> birds) {
    std::unordered_map<int, int> map;
    int resId = 0, maxFreq = 0;

    for (auto &val: birds)
        map[val]++;
    
    for (auto &pair: map) {
        int birdId = pair.first;
        int freq = pair.second;
        
        if (freq > maxFreq) {
            freq = maxFreq;
            resId = birdId;
        }
        else if (freq == maxFreq && birdId < resId)
            resId = birdId;
    }
    return resId;
}

int main() {
    int n;
    std::cout << "Enter no. of birds: ";
    std::cin >> n;

    std::vector<int> vec(n);
    std::cout << "Enter bird values: ";
    
    for (int i = 0; i < n; i++)
        std::cin >> vec[i];
    std::cout << migratoryBirds(vec) << std::endl;
    return 0;
}