#include <string>
#include <iostream>

//using namespace std;
int main() {
    int a;
    std::cout << "Voer hier een character in: ";
    std::cin >> a;
    
    // swap upper <-> lower case
    if (64 < a && a < 91) { 
        a = a+32;
    }
    else if (96 < a && a < 123) {
        a = a-32;
    }
    else {
        std::cout << "\nNo change!";
    }
    std::cout << "\nnew char: " << a;

    
}