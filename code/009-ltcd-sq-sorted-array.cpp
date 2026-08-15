#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> neg;
        int a = neg.size;
        vector<int> pos;
        int b = pos.size();
        
        for(int i = 0; i < n; i++){
            if(nums[i] < 0){
                neg.psuh_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }

        if(neg.size() == 0){
            for(int i = 0; i < n; i ++){
                nums[i] = nums[i] * nums[i];
            }
            return nums;
        }
        else if(pos.size() == 0){
            for(int i = 0; i < n; i++){
                nums[i] = nums[i] * nums[i];
            }
            int i = 0, j = n - 1;
            while( i < j ){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
            return nums;
        }
        else{
            vector<int> res;
            for(int i = 0; i < a; i++){
                neg[i] = neg[i] * neg[i];
            }
            int i = 0, j = a - 1;
            while(i < j){
                swap(neg[i], neg[j]);
                i++;
                j--;
            }
            for(int i = 0; i < b; i++){
                pos[i] = pos[i] * pos[i];
            }

            int x = 0, y = 0;
        }
    }
};