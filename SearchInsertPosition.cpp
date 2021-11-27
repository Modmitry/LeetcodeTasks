class Solution {
public:
    int searchInsert(const vector<int>& nums, const int& target) {
     
//binary search     
        int left=-1;
        int right=nums.size();
        
        if (target>nums[right-1])
            return right;
        
         if (target<nums[0]) 
            return 0;
        
      while (right-left>1) {         
          int* middle =new int{(right+left)/2};
          if (nums[*middle]<target)
            left=*middle;
          else
            right=*middle;  
        
          delete middle;
      }
        
      return  left+1;        
    }
};
