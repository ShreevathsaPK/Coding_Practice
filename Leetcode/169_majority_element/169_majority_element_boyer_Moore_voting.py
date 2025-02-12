'''Boyer-Moore Voting Algorithm'''
class Solution:
    def majorityElement(self, nums: list[int]) -> None:
        count = 0
        candidate = None
        for num in nums:
            if count ==0 :
                candidate = num
            if(candidate==num):
                count+=1
            else:
                count-=1

         # Phase 2: Verify the candidate (optional in guaranteed cases)
        if nums.count(candidate) > len(nums) // 2:
            print(candidate)
          # Only needed if the problem doesn't guarantee a majority element
        
    
def main():
    # Your main program logic here
    objSol = Solution()
    nums = [0,1,0,0,12]
    objSol.majorityElement(nums)
    print(nums)

if __name__ == "__main__":
    main()
