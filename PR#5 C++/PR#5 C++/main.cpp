#include <iostream>
#include <string>
#include <algorithm>
#include <random>

void reverseWord(const std::string& word) {
    std::string reversedWord = word;
    std::reverse(reversedWord.begin(), reversedWord.end());
    std::cout << "Слово задом наперед: " << reversedWord << std::endl;
}

void removeVowels(const std::string& word) {
    std::string result;
    for (char c : word) {
        if (!std::isspace(c) && !std::isalpha(c)) {
            result += c;
        }
    }
    std::cout << "Слово без гласных: " << result << std::endl;
}

void removeConsonants(const std::string& word) {
    std::string result;
    for (char c : word) {
        if (!std::isspace(c) && std::isalpha(c)) {
            result += c;
        }
    }
    std::cout << "Слово без согласных: " << result << std::endl;
}

void shuffleWord(const std::string& word) {
    std::string shuffledWord = word;
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(shuffledWord.begin(), shuffledWord.end(), g);
    std::cout << "Рандомно раскиданные буквы: " << shuffledWord << std::endl;
}

int main() {
    std::string word;
    int choice;

    std::cout << "Введите слово: ";
    std::cin >> word;

    std::cout << "Выберите действие:" << std::endl;
    std::cout << "1. Слово выводится задом наперед." << std::endl;
    std::cout << "2. Вывести слово без гласных." << std::endl;
    std::cout << "3. Вывести слово без согласных." << std::endl;
    std::cout << "4. Рандомно раскидывать буквы заданного слова." << std::endl;
    std::cout << "Ваш выбор: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            reverseWord(word);
            break;
        case 2:
            removeVowels(word);
            break;
        case 3:
            removeConsonants(word);
            break;
        case 4:
            shuffleWord(word);
            break;
        default:
            std::cout << "Неверный выбор." << std::endl;
            break;
    }

    return 0;
}

