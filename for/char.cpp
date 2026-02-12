#include <iostream>

int main() {
    int n;
    std::cout << "Geef hoogte: ";
    std::cin >> n;
    for (int i = 1; i <= n * 2 - 1; i++) {
        std::cout << std::string(n - abs(n - i), '*') << '\n';
    }
} 


// int main() {
//     int h;
//     std::cout << "Geef hoogte pyramide: " << std::endl;
//     std::cin >> h;
//     for (int i = 1; i < h+1; i++) {
//         for (int j = 1; j < i+1; j++) {
//             std::cout << '*';
//         }
//         std::cout << "\n";
//     }
//     for (int i = h-1; i > 0; i--) {
//         for (int j = 1; j < i+1; j++) {
//             std::cout << '*';
//         }
//         std::cout << "\n";
//     }
// }