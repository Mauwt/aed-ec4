#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, bool> map;

        int min_positive = 1;

        int array_min = 0;

        for(const auto & e: nums){
            if (e <= 0 ) continue;
            if(e < array_min) array_min = e;
        }

        if (array_min > 1) return 1;

        for (int i = 0; i < nums.size(); i++){
            int curr_val = nums[i];
            if (map.find(nums[i]) == map.end()){
                map[curr_val] = i;
            } 
        }

        while(map.find(min_positive) != map.end()){
            min_positive++;
        }

        return min_positive;
        
    }
};




int main(){

    auto sol = Solution();

    vector<int> out1 = {7,8,9,11,12};
    auto sol1 = sol.firstMissingPositive(out1);

    cout << sol1 << endl;
    return 0;
}