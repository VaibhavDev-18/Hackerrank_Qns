#include <iostream>
#include <vector>
#include <math.h>

void bonApetit(std::vector<int> bill, int k, int b) {
    int total = 0, anna_bill = 0;

    for (int i = 0; i < bill.size(); i++) {
        if (i == k) continue;
        anna_bill += bill[i];
    }
    anna_bill /= 2;
    std::cout << "Anna bill: " << anna_bill << "\n";
    if (anna_bill == b) std::cout << "Bon Apetit" << "\n";
    else std::cout << abs(b - anna_bill) << "\n";
}

int main() {
    int k, b, bill_size;
    std::cout << "Enter bill size, Item Anna didn't eat: ";
    std::cin >> bill_size >> k;
    std::vector<int> bill(bill_size);
    std::cout << "Enter the bill: ";
    
    for (auto &x: bill)
        std::cin >> x;
    std::cout << "Amt anna paid: ";
    std::cin >> b;
    bonApetit(bill, k, b);
    return 0;
}