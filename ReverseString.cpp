class Solution {
public:
    void reverseString(vector<char>& s) {
        char buffer;
          for (int i=0;i<s.size()/2;i++){
              buffer=s[i];
              s[i]=s[s.size()-1-i];  
              s[s.size()-1-i]=buffer;
          }
        
    }
};
