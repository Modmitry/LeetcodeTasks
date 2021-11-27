class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n=nums.size(),i=0,j=0;
        while(j<n){
            int t=j;
            while(j<n && nums[t]==nums[j])
                j++;
            swap(nums[i],nums[j-1]);
            i++;
        }
        return i;
    
        
  /*  vector<int>::const_iterator it = nums.begin()+1; 
        
       while (it!=nums.end()) 
       {
           if (*it==*(it-1))
             nums.erase(it);
           else
               it++;           
       }
        
        
        
     return nums.size();   */
        
        
        
        // slowly -480ms
      /*for (int i=1;i<nums.size();i++)  
      {
          if (nums[i]==nums[i-1])
          {
              nums.erase(nums.begin()+i);
              i--;             
          }                 
      }
        
      return nums.size(); */  
    }
};
