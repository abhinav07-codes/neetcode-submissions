class Solution:
    def isPalindrome(self, s: str) -> bool:
        #lower_s = s.lower().replace(" ", "")
        l = 0
        r = len(s) - 1
        
        while l < r:
            # If left character is punctuation, skip it
            if not s.lower()[l].isalnum():
                l += 1
            # If right character is punctuation, skip it
            elif not s.lower()[r].isalnum():
                r -= 1
            # Both are alphanumeric, so compare them
            else:
                if s.lower()[l] == s.lower()[r]:
                    l += 1
                    r -= 1
                else:
                    return False
        return True
