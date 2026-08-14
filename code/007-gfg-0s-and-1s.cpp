#include <bits/stdc++.h>
using namespace std;

/*//BRUTE FORCE:
    class Solution {
    public:
        void segregate0and1(vector<int> &arr) {
            // code here
            int n = arr.size();
            for(int i = 0; i < n; i++){
                for(int j = i; j < n; j++){
                    if(arr[i] == 1 && arr[j] == 0){
                        swap(arr[i], arr[j]);
                    }
                    else{
                        continue;
                    }
                }
            }
        }
    };
*/

//OPTIMAL O(N)
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int i = 0;
        int j = n - 1;
        
        while(i < j){
            if(arr[i] == 0 && arr[j] == 1){
                i++;
                j--;
            }
            else if(arr[i] == 0 && arr[j] == 0){
                i++;
            }
            else if(arr[i] == 1 && arr[j] == 1){
                j--;
            }
            else{
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
    }
};