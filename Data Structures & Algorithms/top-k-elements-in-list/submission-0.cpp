class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int>countfreq;
        for(const auto& num: nums){
            countfreq[num]++;
        }
        vector<pair<int,int>>freq;
        for(const auto& pair: countfreq){
            freq.push_back({pair.second,pair.first});
        }

        sort(freq.rbegin(),freq.rend());

        vector<int>result;
        for(int i=0;i<k;i++){
            result.push_back(freq[i].second);
        }

        return result;


        
    }
};
