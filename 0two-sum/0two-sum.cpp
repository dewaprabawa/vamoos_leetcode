class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
      int left = 0;
      int right = nums.size() - 1;  
        
      vector<int> temporaryTemp;
      vector<int> result;
        
      for(int i: nums){
          temporaryTemp.push_back(i);
      }
        
      sort(nums.begin(), nums.end());  
      
      while(left <= right){
         if(nums[left] + nums[right] == target){
             break;
         }else if(nums[left] + nums[right] < target){
             left++;
         }else if(nums[left] + nums[right] > target){
             right--;
         }    
      }
                                    
      for(int i = 0; i < nums.size(); i++){
          if(temporaryTemp[i] == nums[left]){
             result.push_back(i); 
          }else if(temporaryTemp[i] == nums[right]){
              result.push_back(i);
          }
      }                              
        
      return  result;                             
    }
};