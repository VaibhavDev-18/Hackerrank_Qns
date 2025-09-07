#include <iostream>

std::string dayOfProgrammer(int year) {
    std::string leapRes = "12.09.";
    std::string nonLeapRes = "13.09.";

    if (year == 1918) return "26.09.1918";
    if (year < 1918) {
        if (year % 4 == 0) return leapRes + std::to_string(year);
        return nonLeapRes + std::to_string(year);
    }
    else {
        //year % 400 == 0 leapyr, then check for yr % 4
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) return leapRes + std::to_string(year);
        return nonLeapRes + std::to_string(year);
    }
}

int main() {
    std::cout << "Enter year: ";
    int year;
    std::cin >> year;
    std::cout << dayOfProgrammer(year) << std::endl;
    return 0;
}