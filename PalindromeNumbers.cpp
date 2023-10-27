#include <iostream>

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int nums[] = {37, 77, 89, 100, 979};
    int result[5]; 

    int count = 0; 

    for (int i = 0; i < 5; ++i) { 
        if (isPalindrome(nums[i])) {
            result[count] = nums[i];
            count++;
        }
    }

    if (count > 0) {
        std::cout << "Result: [";
        for (int i = 0; i < count; ++i) {
            std::cout << result[i];
            if (i < count - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    } else {
        std::cout << "Polynomial numbers not found" << std::endl;
    }

    return 0;
}
