class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

        l = 0
        r = 0
        chars = set()
        res = 0

        for r in range(len(s)):
            while(s[r] in chars):
                chars.remove(s[l])
                l+=1

            chars.add(s[r])
            res = max(res,r-l+1)
        return res
        