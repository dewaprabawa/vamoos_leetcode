class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int left = 0;
        int right = nums.size() - 1;
        k = k % nums.size();
        
        while(left < right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
        
        left = 0;
        right = k - 1;
         while(left < right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
        
        left = k;
        right = nums.size() - 1;
         while(left < right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
};