class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        fun={}
        for i,n in enumerate(nums):
            diff=target-n
            if diff in fun:
                return [fun[diff],i]
            fun[n]=i