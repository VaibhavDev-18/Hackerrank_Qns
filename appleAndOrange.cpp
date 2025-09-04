#include <iostream>
#include <vector>

void countApplesAndOranges(int s, int t, int a, int b, std::vector<int> apples, std::vector<int> oranges) {
    int apple_count = 0, orange_count = 0;
    for (auto &x: apples) {
        x += a;
        if (x >= s && x <= t) apple_count++;
    }

    for (auto &x: oranges) {
        x += b;
        if (x >= s && x <= t) orange_count++;
    }

    std::cout << "apple_count: " << apple_count << std::endl;
    std::cout << "orange_count: " << orange_count << std::endl;
}

int main() {
    int apple_arr_size;
    std::cout << "Enter apple_arr size: ";
    std::cin >> apple_arr_size;

    int orange_arr_size;
    std::cout << "Enter orange_arr size: ";
    std::cin >> orange_arr_size;

    int house_start, house_end;
    std::cout << "Enter house_start, house_end: ";
    std::cin >> house_start >> house_end;

    int apple_tree_loc, orange_tree_loc;
    std::cout << "Enter apple_tree_loc, orange_tree_loc: ";
    std::cin >> apple_tree_loc >> orange_tree_loc;

    std::vector<int> apples(apple_arr_size);
    std::vector<int> oranges(orange_arr_size);

    std::cout << "Enter apple array: " << std::endl;
    for (int i = 0; i < apple_arr_size; i++)
        std::cin >> apples[i];

    std::cout << "Enter orange array: " << std::endl;
    for (int i = 0; i < orange_arr_size; i++)
        std::cin >> oranges[i];
        
    countApplesAndOranges(house_start, house_end, apple_tree_loc, orange_tree_loc, apples, oranges);
    return 0;
}