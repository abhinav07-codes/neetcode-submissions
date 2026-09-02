class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>>res;
        for(const auto& s:strs){
            string sortedstring = s;
            sort(sortedstring.begin(),sortedstring.end());
            res[sortedstring].push_back(s);
        }

        vector<vector<string>>result;
        for(const auto& pair: res){
            result.push_back(pair.second);
        }
        return result;
        
    }
};
