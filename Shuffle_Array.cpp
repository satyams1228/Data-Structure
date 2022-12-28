class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
       vector<int> arr1;
       for(int i =0;i<n;i++)
       {
            arr1.push_back(nums[i]);
            arr1.push_back(nums[i+n]);
       }
              return arr1;
    } 
};
