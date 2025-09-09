#include <iostream>

std::string catAndMouse(int x, int y, int z) {
    int catA = 0, catB = 0, mouseC = 0;
    std::string result;
    catA = abs(z - x);
    catB = abs(z - y);

    if (catA == catB) return result = "mouse C";
    (catA > catB) ? result = "catB" : result = "catA";
    return result;
}


int main() {
    int query = 0, x = 0, y = 0, z = 0;
    std::cout << "Enter no. of queries: ";
    std::cin >> query;

    std::cout << "Enter x, y, z: ";
    for (int i = 0; i < query; i++)
        std::cin >> x >> y >> z;
    std::cout << catAndMouse(x, y, z) << std::endl;
    return 0;
}