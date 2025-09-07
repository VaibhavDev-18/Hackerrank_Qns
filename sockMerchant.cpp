#include <iostream>
#include <vector>
#include <unordered_map>

int sockMerchant(int n, std::vector<int> ar) {
    std::unordered_map<int, int> map;
    int pair_count = 0;

    for (auto &x: ar)
        map[x]++;
    for (auto &it: map) 
        pair_count += it.second / 2;
    return pair_count;
}

int main() {
    int arr_size = 0;
    std::cout << "Enter pile size: ";
    std::cin >> arr_size;

    std::vector<int> socks(arr_size);
    std::cout << "Enter socks arr: ";
    for (auto &x: socks)
        std::cin >> x;

    std::cout << sockMerchant(arr_size, socks) << std::endl;
}