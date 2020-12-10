#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>


void savePlayerLevelInFile(int level) {
    const std::string file_name = "player_level.txt";
    std::ofstream fs;
    fs.open(file_name);
    fs << level;
    fs.close();
}


std::string readFilePlayerLevel() {
    std::string level;
    const std::string file_name = "player_level.txt";
    std::ifstream  fs;
    fs.open(file_name);
    fs >> level;
    fs.close();
    return level;
}

void print(char *str) {
    setlocale(0, "Russian");
    for (int i = 0; i < strlen(str) ; i++) {
        std:: cout << str[i];
        Sleep(80);
    }
}

int main() {
    return 0;

}

