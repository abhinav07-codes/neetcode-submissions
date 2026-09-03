class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0

        longest = 1
        count = 1
        nums.sort()
        for i in range(0,len(nums)-1):
            if nums[i+1] == nums[i] + 1:
                count += 1
            elif nums[i+1] != nums[i]:
                count = 1
            longest = max(longest, count)
        return longest