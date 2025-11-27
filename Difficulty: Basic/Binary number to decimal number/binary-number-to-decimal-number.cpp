class Solution {
  public:
    int binaryToDecimal(string &b) {
        int result = 0;
        
        for(char bit : b) {
            result = result * 2 + (bit - '0');  // shift left + add bit
        }
        
        return result;
    }
};
