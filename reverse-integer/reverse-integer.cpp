class Solution {
public:
    int reverse(int x) {
       // Check if x is negative
      bool negative = x < 0;
    
    // Convert x to a positive integer
      x = abs(x);
    
    // Convert x to a string and reverse it
      std::string x_str = std::to_string(x);
      std::reverse(x_str.begin(), x_str.end());
    
     // Convert the reversed string back to an integer
    int x_rev;
    try {
        x_rev = std::stoi(x_str);
    } catch (std::out_of_range& e) {
        // If the reversed integer is out of range, return 0
        return 0;
    }
    
    
    // If x was negative, make x_rev negative as well
      if (negative) {
        x_rev = -x_rev;
      }
    
    // Check if x_rev is within the 32-bit integer range
      if (x_rev < INT_MIN || x_rev > INT_MAX) {
        return 0;
      }
    
    // Return the reversed integer
    return x_rev;
    }
};