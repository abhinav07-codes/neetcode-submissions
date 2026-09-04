class Solution:
    def isPalindrome(self, s: str) -> bool:
        cleaned = "".join(ch.lower() for ch in s if ch.isalnum())
        if(cleaned==cleaned[::-1]):
            return True
        return False
        