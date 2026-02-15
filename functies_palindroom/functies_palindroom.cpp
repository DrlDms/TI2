#include<iostream>
#include<vector>


std::string reverse(std::string word) {
    std::string reversedword;
    for (int i = word.size() - 1; i >= 0; i--) {
        reversedword += word[i];
    }
    return reversedword;
}


bool isPalindroom(const std::string & word) {
   std::string reversedword = reverse(word);
   if (word == reversedword) return true;
   return false;
}

bool isPalindroom2(const std::string & word) {
    int n = word.size();
    for (int i = 0; i < n/2; i++) {
        if (word[i] == word[n - 1 - i]) continue;
        return false;
    }
    return true;
}

int main() {
    std::vector<std::string> wordlst = {"stekkerdoos", "halloween", "lepel", "flesje", "bommelding"};
    for (std::string word : wordlst) {
        if (isPalindroom2(word)) {
            std::cout << word << " is een palindroom!" << '\n';
        } else {
            std::cout << word << " is geen palindroom!" << '\n';
        }
    }
}