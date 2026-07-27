class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int product = (nums[nums.size()-1]-1) * (nums[nums.size()-2]-1);
        // return product;

        int ma1 = INT_MIN;
        int ma2 = INT_MIN;
        for(int i =0 ; i< nums.size() ; i++){
            if(nums[i]>= ma1){
                ma2 = ma1;
                ma1 = nums[i];
            }
            else if(nums[i] > ma2){
                ma2 = nums[i];
            }
        }
        return ((ma1-1) * (ma2-1));
    }
};