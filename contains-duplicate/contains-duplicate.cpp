class Solution {
public:
      bool containsDuplicate(vector<int>& nums) { 
        // create an empty set of integers
        std::set<int> unique; 
        for(int i : nums){ 
            // loop through the input vector
            unique.insert(i); 
            // insert each element into the set
        }
        return nums.size() != unique.size(); 
         // return true if the size of the input vector is not equal to the size of the set, meaning 
      }
};