#include <iostream>
#include <vector>
#include <string>
#include <utility>

std::string char_to_string(char c) {
    std::string s;
    s.push_back(c);
    return s;
}

bool is_palindrome(std::string word) {
    std::string reversed="", no_spaces="";
    for (int i=0;i<word.size();i++) {
        if (word[i] != ' ') {
            no_spaces.push_back(word[i]);
        }
    }
    for (int i=1;i<=no_spaces.size();i++) {
        reversed.push_back(no_spaces[no_spaces.size()-i]);
    }
    if (reversed == no_spaces) {
        return true;
    }
    else {
        return false;
    }
}

int main(){

    std::vector<std::pair<std::string, bool>> test_cases = 
    {
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    for(int i = 0; i < test_cases.size(); i++){

        bool test = is_palindrome(test_cases[i].first);

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
}