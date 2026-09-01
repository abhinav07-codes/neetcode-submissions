class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()){
            return  false;
        }

        unordered_map<char,int>countof_s;
        unordered_map<char,int>countof_t;

        for(int i=0;i<s.length();i++){
            countof_s[s[i]]++;
            countof_t[t[i]]++;
        }

        return countof_s == countof_t;
        
    }
};
