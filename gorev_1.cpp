#include <iostream>
#define G 9.80665

int main() {
    float t;
    std::cin >> t;

    float result = (0.5) * G * t*t;

    std::cout << result << std::endl;

    return 0;
}