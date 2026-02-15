/* Darryl Adams
 * 1911838
 * datatypes bonus
 */


#include <iostream>

// opdr 1.6
void char_plus_int() {
    char letter;
    std::cout << "Geef een character: ";
    std::cin >> letter;
    char newletter = letter + 32;
    std::cout << letter << " + 32 = " << int(newletter) << '\n';
    std::cout << letter << " + 32 = " << newletter << std::endl;
}

// opdr 1.7
void leetspeak() {
    std::cout << "Geef een string om the vertalen:\n";
    std::string input;
    std::cin >> input;
    for (int i = 0; i < input.size(); i++) {
        switch (input[i]) {
            case 'e': 
                input[i] = '3';
            case 'l': 
                input[i] = '1';
                break;
            case 't': 
                input[i] = '7';
                break;
            case 'o': 
                input[i] = '0';
                break;
        }
    }
    std::cout << input;
}






int main() {
    char_plus_int();
    leetspeak();
}
    















