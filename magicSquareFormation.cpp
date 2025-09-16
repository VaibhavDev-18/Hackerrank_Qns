#include <iostream>
#include <vector>
#include <climits>

int minChangeCost(std::vector<std::vector<int>> s) {
     int minCost = INT_MAX;
    std::vector<std::vector<std::vector<int>>> all_magic_squares = {
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}
    };
    
    for (auto &matrix: all_magic_squares) {
        if (s == matrix) return 0;
        int currCost = 0;
        for(int i = 0; i < 3; i++) 
            for(int j = 0; j < 3; j++)
                currCost += abs(matrix[i][j] - s[i][j]);
            minCost = std::min(currCost, minCost);
    }
    return minCost;
    return 0;
}

int main() {
    std::vector<std::vector<int>> inp_vec(3, std::vector<int>(3));
    
    std::cout << "Enter 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cin >> inp_vec[i][j];
        }
    }

    int cost = minChangeCost(inp_vec);
    std::cout << "Minimum change cost: " << cost << std::endl;

    return 0;
}