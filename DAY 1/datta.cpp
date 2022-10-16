class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        bool flag=false;
        for(int i=0;i<nums.size()-1; ++i){
            for(int j=i+1;j<nums.size();++j){
                if(nums[j]==target-nums[i]){
                    ans.push_back(i);
                    ans.push_back(j);
                    flag=true;
                }
                if(flag) break;
            }
            if(flag) break;
        }
        return ans;
    }
};
