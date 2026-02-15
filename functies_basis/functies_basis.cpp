#include<vector>
#include<iostream>


int count(const std::vector<int> & numbers, const int x) {
    int numcount = 0;
    for (int num : numbers) {
        if (num == x) numcount++;
    }
    return numcount;
}


bool vector_control(const std::vector<int> & numbers) {
    int zerocount = count(numbers, 0);
    if (zerocount < numbers.size()/2.0 && zerocount < 12) return true;
    return false;
}


int main() {
    std::vector<int> n = {37,4,9,4,9,37,3,5,0,4,1};
    int number_of_fours = count(n, 4);
    std::cout << "Number of fours: " << number_of_fours << "\n";
    std::vector<int> zeroes_ones = {0, 0, 0, 0, 1, 1, 1, 1};
    std::cout << vector_control(zeroes_ones);
    return 0;
}

