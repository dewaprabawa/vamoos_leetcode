class Solution {
public:
    int singleNumber(vector<int>& nums) {
       // If the input vector contains only one element, that element is returned as it must be unique.
        if(nums.size() == 1){
            return nums[0];
        }
        //the function sorts the vector in ascending order to make it easier to compare elements.
        sort(nums.begin(),nums.end());
        
        //Then, the function iterates through the vector starting from index 1 with a step of 2.
        for(int i = 1; i < nums.size(); i+=2){
            // For each pair of adjacent elements, if they are not equal, the function returns the first element.
            if(nums[i - 1] != nums[i]){
                return nums[i - 1];
            }
        }
        // If the loop completes without finding a unique element, the last element in the sorted vector is returned.
        return nums[nums.size() - 1];
    }
};
