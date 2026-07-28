class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0 ;
        int product = 1;
        // vector<int> temp;
        while(n>0){
            int rem = n %10;
            n = n /10;
            sum = sum + rem;
            product = product* rem; 
            // temp.push_back(rem);
        }
        // for(int n : temp){
        //     product = product*n;
        // }
        // for(int n : temp){
        //     sum = sum+n;
        // }
        return (product - sum);
        
    }
};