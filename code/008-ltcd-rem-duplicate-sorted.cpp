#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
        int i = 0;
        for(int j = 1; j < n; j++){
            if(nums[i] == nums[j]){
                continue;
            }
            else{
                nums[i+1] = nums[j];
                i++;
                k++;
            }
        }
        return k;
    }
};