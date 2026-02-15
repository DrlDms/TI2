/* Darryl Adams
 * 1911838
 * datatypes bonus
 */

#include <string>
#include<iostream>
using namespace std;

int main(){

    int x = 8.2; // 8
    int y = 18 / 5; // 3
    int z = 18 / 5.0; // 3
    int f = '8' - '0'; // 8
    int e = 10 % 3; // 1
    
    float t = 18 / 5; // 3
    float s = 18 / 5.0; // 3.6

    char a = 'a'; // 'a'
    char b = 'e'; // 'e'
    char d = b; // 'e'
    char c = 'b' + ('Z'- 'z'); // 'B'

    bool r = true && (false || true);  // true (1)
    bool u = 8 >= 10; // false (0)

    string p = "Utereg"; // "Utereg" op de volgende lijn wordt p gewijzigd naar "Utereg Me Stadsie!"
    p.append(" Me Stadsie!"); // "Utereg Me Stadsie!"
    string station = string("Heidel") + "berglaan"; // "Heidelberglaan" op de volgende lijn wordt station gewijzigd naar "Heidelberg"
    string plaats = station.erase(10, station.size()-10); // "Heidelberg" (van index 10 ->, verwijder 14-10=4 tekens)

    std::cout << "x is: " << x << "\n";
    std::cout << "y is: " << y << "\n";
    std::cout << "z is: " << z << "\n";
    std::cout << "f is: " << f << "\n";
    std::cout << "e is: " << e << "\n";
    
    std::cout << "t is: " << t << "\n";
    std::cout << "s is: " << s << "\n";
    
    std::cout << "a is: " << a << "\n";
    std::cout << "b is: " << b << "\n";
    std::cout << "d is: " << d << "\n";
    std::cout << "c is: " << c << "\n";
    
    std::cout << "r is: " << r << "\n";
    std::cout << "u is: " << u << "\n";
    
    std::cout << "p is: " << p << "\n";
    std::cout << "station is: " << station << "\n";
    std::cout << "plaats is: " << plaats << "\n";




}