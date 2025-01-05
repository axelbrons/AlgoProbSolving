#include <vector>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

vector<int> twoSum(vector<int> nums, int target) {
    int sum = 0;
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        sum = 0;
        sum += nums[i];
        for (int j = i+1; j < nums.size(); j++) {
            sum += nums[j];
            if (sum == target) {
                res.push_back(i);
                res.push_back(j);
                return res;
            }
            else {
                sum = nums[i];
            }
                
        }
        
    }
    return res;
}

int main()
{
    int target = 6;
    vector<int> nums{3,2,3};
    vector<int> res = twoSum(nums, target);
    for (auto i : res) {
        cout << i << ' ';
    }
}

