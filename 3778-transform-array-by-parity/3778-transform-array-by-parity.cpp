class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> array(nums.size()); 
        for (int i = 0; i < nums.size(); i++) { 
            if (nums[i] % 2 == 0) 
                array[i] = 0;
            else 
                array[i] = 1;
        }
        sort(array.begin(), array.end());
        return array;
    }
};
