#include <stdio.h>

int comp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int removeElement(int* nums, int numsSize, int val) {

    int k = 0;

    if (val > 50) {
        return numsSize;
    }

    for (int i = 0; i < numsSize; i++) {
        if (val == nums[i]) {
            nums[i] = 101;
            k++;
        }
    }
    qsort(nums, numsSize, sizeof(int), comp);
    
    return numsSize - k;
    
}

int main()
{
    const int numsSize = 4;
    int nums[numsSize] = { 3,2,2,3 };
    int val = 4;
    int k;
    k = removeElement(nums, numsSize, val);
    printf("%d", k);

}


