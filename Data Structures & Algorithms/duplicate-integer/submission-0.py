class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        k=len(nums)
        for i in range(1,k):
            if nums[i]==nums[i-1]:
                return True
        return False