#include <string>
#include <iostream>
using namespace std;

int main(){

    int x = 8.2; // 8
    int y = 18 / 5; // 3

    float e = 3.429; // 3.429
    float f = 18 / 5; // 3.6

    char a = 'a'; // a
    char b = 'e'; // e
    char c = b; // e

    bool r = true; // true
    bool u = (1 & 0); // false

    string p = "Klaar?"; // Klaar?
    string s = string("Nee, nog") + string(" niet"); // Nee, nog niet

    std::cout << "x is: " << x << "\n";
    std::cout << "y is: " << y << "\n";

    std::cout << "e is: " << e << "\n";
    std::cout << "f is: " << f << "\n";

    // std::cout << "a is: " << a << "\n";
    // std::cout << "b is: " << b << "\n";
    // std::cout << "c is: " << c << "\n";
    //
    // std::cout << "r is: " << r << "\n";
    // std::cout << "u is: " << u << "\n";
    //
    // std::cout << "p is: " << p << "\n";
    // std::cout << "s is: " << s << "\n";


}