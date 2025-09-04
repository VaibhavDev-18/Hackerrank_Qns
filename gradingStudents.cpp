#include <iostream>
#include <vector>

int calcNextFiveMultiple(int val) {
    int temp = val;
    for (int i = 0; i < 3; i++) {
        if (val % 5 == 0) return val;
        val++;
    }
    return temp;
}

std::vector<int> gradingStudents(std::vector<int> grades) {
    int n = grades.size();
    for (int i = 0; i < n; i++) {
        if (grades[i] < 38) continue;
        int diff = calcNextFiveMultiple(grades[i]) - grades[i];

        if (diff < 3) grades[i] = calcNextFiveMultiple(grades[i]);
    }
    return grades;
}

int main() {
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;
    std::vector<int> ip_vec(size);
    std::vector<int> op_vec;
    
    for (int i = 0; i < size; i++)
        std::cin >> ip_vec[i];
    
    op_vec = gradingStudents(ip_vec);

    for (auto &x: op_vec)
        std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}