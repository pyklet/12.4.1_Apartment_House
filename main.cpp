#include <iostream>

int main() {
    std::string residents[10];
    int n;

    for (int i = 0; i < 10; ++i) {
        std::cin >> residents[i];
    }

    for (int i = 0; i < 3; ++i) {
        std::cin >> n;

        if (n > 0 && n <= 10) {
            std::cout << residents[n - 1] << "\n";
        } else {
            std::cout << "Invalid data" << "\n";
            i--;
        }
    }
}
