class Solution {
  public:
    int largest(vector<int> &arr) {
        int maxi = arr[0];
        int n = arr.size();
         
        for(int i=1;i<n;i++){
            if(arr[i]>maxi){
              maxi = arr[i];
            }
        }
        return maxi;
        
    }
};
