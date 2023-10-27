#include <iostream>

int* twoSum(int* nums, int numsSize, int target) {
    int* result = new int[2];
    
    for (int i = 0; i < numsSize - 1; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    
    return result; 
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    
    int* result = twoSum(nums, 4, target);
    
    if (result[0] != 0 || result[1] != 0) {
        std::cout << "Result: [" << result[0] << ", " << result[1] << "]" << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }
    
    delete[] result; 
    
    return 0;
}
