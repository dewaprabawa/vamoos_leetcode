class Solution {
public:
      int firstUniqChar(string s) {
      unordered_map <int,int> map;

       for(int i{}; i < s.size();i++){
           map[s[i]]++;
       }

      
       for (int idx{}; idx < s.size(); idx++) {
            if (map[s[idx]] == 1)
                return idx;
        } 
        
        return -1;   
    }
};