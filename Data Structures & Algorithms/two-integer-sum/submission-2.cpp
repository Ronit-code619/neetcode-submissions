class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        for(int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }    
        int n=nums.size();
        sort(arr.begin(), arr.end());
        int s = 0;
        int e = n - 1;

        while(s < e) {

            int sum = arr[s].first + arr[e].first;

            if(sum == target) {
                int first = arr[s].second;
                int second = arr[e].second;
                return {min(first, second), max(first, second)};
            }
            else if(sum > target) {
                e--;
            }
            else {
                s++;
            }
        }
        return {};
        
    }
};
