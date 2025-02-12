class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.

        """
        #283. LeetCode problem
        #Use Two Pointer Logic.
        write_index = 0
        for num in nums:
            if(num!=0):
                nums[write_index]=num
                write_index+=1
        for i in range(write_index, len(nums)):
            nums[i] = 0

def main():
    # Your main program logic here
    objSol = Solution()
    nums = [0,1,0,3,12]
    objSol.moveZeroes(nums)
    print(nums)

if __name__ == "__main__":
    main()





        