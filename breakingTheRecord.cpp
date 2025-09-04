#include <iostream>
#include <vector>

std::vector<int> breakingTheRecord(std::vector<int> scores) {
    int best_score = scores[0], worst_score = scores[0];
    int best_score_count = 0, worst_score_count = 0;

    for (int i = 1; i < scores.size(); i++) {
        if (scores[i] < worst_score) {
            worst_score = scores[i];
            worst_score_count++;
        }
        if (scores[i] > best_score) {
            best_score = scores[i];
            best_score_count++;
        }
    }
    std::vector<int> result;
    result.push_back(best_score_count);
    result.push_back(worst_score_count);
    return result;
}

int main() {
    int score_size;
    std::cout << "Enter size: ";
    std::cin >> score_size;

    std::vector<int> scores(score_size);
    std::cout << "Enter scores: ";
    for (int i = 0; i < score_size; i++)
        std::cin >> scores[i];
    
    std::vector<int> result = breakingTheRecord(scores);

    for (auto &x: result)
        std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}