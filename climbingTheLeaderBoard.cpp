#include <iostream>
#include <vector>
#include <map>

std::vector<int> climbingLeaderboard(std::vector<int> ranked, std::vector<int> player) {
    std::multimap<int, int, std::greater<int>> multiMap;
    std::map<int, int> map;
    std::vector<int> result;
    int currVal = 1;

    for (int rank: ranked) {
        if (map.find(rank) == map.end())
            map[rank] = currVal++;
        multiMap.insert({rank, map[rank]});
    }

    int maxRank = 0;
    for (auto &it : multiMap) {
        if (it.second > maxRank) {
            maxRank = it.second;
        }
    }

    for (auto &x: player) {
        bool found = false;
        for (auto &it: multiMap) {
            if (x >= it.first) {
                result.push_back(it.second);
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(maxRank + 1);
        }
    }
    return result;
}

int main() {
    int rankedArrSize = 0, playerArrSize = 0;
    std::cout << "Enter ranked array size: ";
    std::cin >> rankedArrSize;
    
    std::cout << "Enter ranked array: ";
    std::vector<int> rankedArr(rankedArrSize);
    for (auto &x: rankedArr)
        std::cin >> x;
    
    std::cout << "Enter player array size: ";
    std::cin >> playerArrSize;

    std::cout << "Enter player array: ";
    std::vector<int> playerArr(playerArrSize);
    for (auto &x: playerArr)
        std::cin >> x;
    
    std::vector<int> result = climbingLeaderboard(rankedArr, playerArr);

    for (auto &x: result)
        std::cout << x << " ";
    std::cout << std::endl;
}