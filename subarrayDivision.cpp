#include <iostream>
#include <vector>

int birthday(std::vector<int> s, int d, int m) {
    int count = 0;
    int sum = 0;
    
    for (int i = 0; i < s.size(); i++) {
        int j = i;
        int sub_arr_end = j + m;
        for (;j < sub_arr_end; j++) {
            std::cout << "i, j = (" << i  << ", "<< j << ") ";
            sum += s[j];
            std::cout << "sum = " << sum << " count = " << count << std::endl;
        }
        if (sum == d) count++;
        sum = 0;
    }
    return count;
}

int main() {
    int arr_size;
    std::cout << "Enter arr_size: ";
    std::cin >> arr_size;

    std::vector<int> s(arr_size);
    std::cout << "Enter arr:";
    for(int i = 0; i < arr_size; i++)
        std::cin >> s[i];
    
    int d, m;
    std::cout << "Enter day, month: ";
    std::cin >> d >> m;

    std::cout << birthday(s, d, m) << std::endl;
    return 0;
}