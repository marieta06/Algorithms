#include <iostream>

char* intToRoman(int num) {
    static char roman[16]; 

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int i = 0;
    int romanIndex = 0;

    while (num > 0) {
        while (num >= values[i]) {
            int symbolLen = 0;
            while (symbols[i][symbolLen] != '\0') {
                roman[romanIndex] = symbols[i][symbolLen];
                romanIndex++;
                symbolLen++;
            }
            num -= values[i];
        }
        i++;
    }

    roman[romanIndex] = '\0';

    std::cout << roman;
}

int main() {
    int num1 = 3;
    int num2 = 58;

    std::cout << "Input: num = " << num1 << "\nOutput: ";
    intToRoman(num1);
    std::cout << "\n";

    std::cout << "Input: num = " << num2 << "\nOutput: ";
    intToRoman(num2);
    std::cout << "\n";

    return 0;
}
