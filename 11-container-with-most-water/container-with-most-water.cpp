class Solution {
public:
    int maxArea(vector<int>& height) {
        int last = height.size() - 1;
        int first = 0;
        int mul = 0;
        int maxi=0;

        while(first < last){
            mul = min(height[first], height[last]) * (last - first);

            if(maxi < mul){
                maxi = mul;
            }
            
            if(height[first] < height[last])
                first++;
            else
                last--;
        }
        return maxi;
        
    }
};