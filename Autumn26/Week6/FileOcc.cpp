#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

bool ensure_open(std::ifstream& text, std::string fileName) {
 
    if (!text.is_open()) {
        return false;
    }
    else {
        return true;
    }

}
bool ensure_open(std::ofstream& text, std::string fileName) {

    if (!text.is_open()) {
        return false;
    }
    else {
        return true;
    }

}

void format(std::string& fileoutName) {

    std::string format=".txt";
    if ((size(fileoutName) < 4) || (fileoutName.substr(size(fileoutName)-4) != format)) {        
        fileoutName = fileoutName + format;                                                       
    }

}

void count_occurence(std::ifstream& input, std::ifstream& occuring_words, std::vector<int>& counts, std::vector<std::string>& text_words, std::vector<std::string>& words) {

    std::string temp;
    int temp_count;

    while (input >> temp) {
        text_words.push_back(temp);
    }
    while (occuring_words >> temp) {
        words.push_back(temp);
    }

    for (int i=0;i<size(words);i++) {
        temp_count=0;
        for (int j=0;j<size(text_words);j++){ 
            if (text_words[j]==words[i]) {
                temp_count++;
            }
        }
        counts.push_back(temp_count);
    }

}

int main() {

    std::vector<int> num_occurance = {};
    std::vector<std::string> full_text = {}, words_required = {};
    std::ifstream passage, words;
    std::ofstream output;
    std::string passage_name, words_name, output_name, temp;
    int i=0;

    std::cout << "Enter the input text file name: " << std::endl;
    std::cin >> passage_name;
    format(passage_name);

    std::cout << "Enter the word text file name: " << std::endl;
    std::cin >> words_name;
    format(words_name);

    std::cout << "Enter the output text file name: " << std::endl;
    std::cin >> output_name;
    format(output_name);

    passage.open(passage_name);
    if (!ensure_open(passage, passage_name)) {
        std::cout << "File cannot be opened";
        return EXIT_FAILURE;
    }
    words.open(words_name);
    if (!ensure_open(words, words_name)) {
        std::cout << "File cannot be opened";
        return EXIT_FAILURE;
    }
    output.open(output_name);
    if (!ensure_open(output, output_name)) {
        std::cout << "File cannot be opened";
        return EXIT_FAILURE;
    }

    count_occurence(passage, words, num_occurance, full_text, words_required);

    for (int j=0;j<size(words_required);j++) {
        output << words_required[j] << ": " << num_occurance[i] << std::endl;
        i++;
    }
    
}