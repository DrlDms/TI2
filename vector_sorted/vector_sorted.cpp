#include <iostream>
#include <vector>
#include <algorithm>


bool sorted(const std::vector<int> & numlst) {
    int max = 0;
    for (int num : numlst) {
        if (num < max) return false;
        max = num;
    }
    return true;
}


float avg(const std::vector<int> & numlst, int n) {
    int sum = 0;
    for (int num : numlst) sum += num;
    return sum/n;
}


std::vector<int> numinput() {
    int newnum;
    std::vector<int> numlst;
    while (true) {
        std::cout << "Geef een getal: ";
        std::cin >> newnum;
        if (newnum < 0) break;
        numlst.push_back(newnum);
    }
    return numlst;
}


int main() {
    std::vector<int> numlst = numinput();
    int n = numlst.size();
    if (sorted(numlst)) {
        std::cout << "De reeks is gesorteerd.\n";
    } else {
        std::cout << "De reeks is niet gesorteerd.\n";
    }
    std::cout << "De gemiddelde waarde is: " << avg(numlst, n) << '\n';
    std::cout << "De minimum waarde is: " << *std::min_element(numlst.begin(), numlst.end()) << '\n';
    std::cout << "De reeks bevat " << n << " getallen.\n";
    return 0;
}
