class Solution {
public:
   
        int search(vector<int>& nums, int target) {

    
        int left ,  right ;      // begin and end bounds for the indexxed array
        
            
        
        left = 0;       right = nums.size()-1;
        
        while (left <= right)
        {
          int   pivot = left + (right-left)/2;              // setting  the pivot elements.
            
                if(nums[pivot] == target)
                    return pivot;
            
                if (nums[pivot] > target)
                    right = pivot -1;
                
                else if ( nums[pivot] < target )
                    left = pivot +1;
       }
            
        
                return -1 ; 
    }
};
