#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

bool ensure_open(std::ifstream& text) {
 
    if (!text.is_open()) {
        return false;
    }
    else {
        return true;
    }

}
bool ensure_open(std::ofstream& text) {

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

void file_to_vect(std::ifstream& text_in, std::vector<std::string>& vect_out) {

    std::string temp;
    while (text_in >> temp) {
        vect_out.push_back(temp);
    }

}

int in_vect(const std::vector<std::string>& vin, std::string word) {

    for (int i=0;i<size(vin);i++) {
        if (vin[i]==word) {
            return i;
        }
    }
    return -1;
}

int main() {

    int index;
    std::ifstream original, translation_guide;
    std::ofstream translated;
    std::vector<std::string> original_word_vect={}, translation_words={}, translated_text={}, first_words, second_words;

    original.open("originaltext.txt");
    translation_guide.open("translate.txt");
    translated.open("decoded.txt");

    if ((!ensure_open(original)) || (!ensure_open(translation_guide)) || (!ensure_open(translated))) {

        std::cout << "Files cannot be read" << std::endl;
        return EXIT_FAILURE;

    }

    file_to_vect(original, original_word_vect);
    file_to_vect(translation_guide, translation_words);

    for (int i=0;i<size(translation_words);i++) {
        if(i % 2 == 0) {
            first_words.push_back(translation_words[i]);
        }
        else {
            second_words.push_back(translation_words[i]);
        }
    }

    for (int i=0;i<size(original_word_vect);i++) {
        index = in_vect(first_words,original_word_vect[i]);
        if (index != -1) {
            translated_text.push_back(second_words[index]);
        }
        else {
            translated_text.push_back(original_word_vect[i]);
        }
    }
    
    for (int i=0;i<size(translated_text);i++) {

        translated << translated_text[i] << " ";

    }

}
