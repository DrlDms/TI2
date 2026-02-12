#include <iostream>
int main(){
    char input;
    int i = 0;
    for(bool x = true;x;i++) {
        std::cout << "Still looping -- Press a to stop. Loop count: " << i << "\n";
        std::cin >> input;
        if (input == 'a') {
            x = false;
        }
    }
    std::cout << "stopped";
    return 0;
}







// int number = 6; // number krijgt hier type int en waarde 6
    // number = number + 1;
    // number = number * 2;
    // cout << "number: " << number << "\n";
    // // number: 14
    // int x = 8 - 4; // x krijgt hier type int en waarde 8-4
    // cout << "x: " << x << "\n";
    // // x: 4