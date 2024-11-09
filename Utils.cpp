#include "Utils.h"
#include <iostream>'

using std::cout;
using std::endl;

void reverse(int* nums, unsigned int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;
    }
}

int* reverse10() {
	int* nums = new int[10];
	int* reversed = new int[10];

	std::cout << "Please enter 10 whole numbers:" << std::endl;

	for (int i = 0; i < 10; i++) {
		std::cin >> nums[i];
	}

	for (int i = 0; i < 10; i++) {
		reversed[i] = nums[9 - i];
	}

	delete[] nums;

	return reversed;
}
