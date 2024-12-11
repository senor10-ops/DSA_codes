#include <stdio.h>

int binarySearch(int nums[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2; // Calculate mid
        if (nums[mid] == target) {
            return mid; // Return index if target found
        } else if (target > nums[mid]) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if target not found
}

int main() {
    // Input array (must be sorted for binary search)
    int nums[] = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int n = sizeof(nums) / sizeof(nums[0]); // Calculate size of the array

    // Perform binary search
    int index = binarySearch(nums, n, target);

    // Output the result
    if (index == -1) {
        printf("The target is not present.\n");
    } else {
        printf("The target is at index: %d\n", index);
    }

    return 0;
}
