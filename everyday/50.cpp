#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

void getDuplicatedNums(vector<int> nums)
{
    sort(nums.begin(), nums.end());

    if (nums.size() <= 1) {
        return;
    }
    
    int i = 1;
    bool printed = false;

    for(; i < nums.size(); i++) {
        if (nums[i] == nums[i-1] && !printed) {
            printf("%d ", nums[i]);
            printed = true;
        } else if (nums[i] == nums[i-1]) {
            continue;
        } else {
            printed = false;
        }
    }
}

int main()
{
    int numsArray1[] = {};
    int numsArray2[] = { 0 };
    int numsArray3[] = { 0, 6, 3, 4, 0 };
    int numsArray4[] = { 5, 4, 3, 2, 1, 1, 1, 1, 2 };

    vector<int> nums1 (numsArray1, numsArray1 + sizeof(numsArray1) / sizeof(numsArray1[0]));
    vector<int> nums2 (numsArray2, numsArray2 + sizeof(numsArray2) / sizeof(numsArray2[0]));
    vector<int> nums3 (numsArray3, numsArray3 + sizeof(numsArray3) / sizeof(numsArray3[0]));
    vector<int> nums4 (numsArray4, numsArray4 + sizeof(numsArray4) / sizeof(numsArray4[0]));

    getDuplicatedNums(nums1);
    printf("\n");
    getDuplicatedNums(nums2);
    printf("\n");
    getDuplicatedNums(nums3);
    printf("\n");
    getDuplicatedNums(nums4);

    return 0;
}