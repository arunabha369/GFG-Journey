class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        vector<int> result;
        
        // Addition
        result.push_back(A + B);
        
        // Multiplication
        result.push_back(A * B);
        
        // Subtraction (larger - smaller)
        result.push_back(abs(A - B));
        
        // Division (larger / smaller)
        if (A > B)
            result.push_back(A / B);
        else
            result.push_back(B / A);
        
        return result;
    }
};
