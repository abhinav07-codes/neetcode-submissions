class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff;
        unordered_map<int,int>valueAndIndex;
        for(int i=0;i<nums.size();i++){
            diff = target-nums[i];

            if(valueAndIndex.find(diff)!=valueAndIndex.end()){
                return{valueAndIndex[diff],i};
            }

            valueAndIndex.insert({nums[i],i}) ;  
        }
        return {};
    }
};
