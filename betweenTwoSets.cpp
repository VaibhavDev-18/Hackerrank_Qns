#include <iostream>
#include <numeric>
#include <vector>

int betweenTwoSets(std::vector<int> a, std::vector<int> b) {
    int lcm_a = a[0];
    int hcf_b = b[0];
    int count = 0;

    for (auto &val: a) lcm_a = std::lcm(lcm_a, val);
    for (auto &val: b) hcf_b = std::gcd(hcf_b, val);

    for (int i = lcm_a; i <= hcf_b; i += lcm_a)
        if (hcf_b % i == 0) count++;
    return count;
}

int main() {
    int a_size, b_size;
    std::cout << "enter array a, b size: ";
    std::cin >> a_size >> b_size;

    std::vector<int> a(a_size);
    std::vector<int> b(b_size);

    std::cout << "Enter array a: ";
    for (int i = 0; i < a_size; i++)
        std::cin >> a[i];
    
    std::cout << "Enter array b: ";
    for (int i = 0; i < b_size; i++)
        std::cin >> b[i];
    std::cout << betweenTwoSets(a, b) << "\n";
    return 0;
}