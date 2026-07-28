class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        int i = 1;
        while(i<n+1){
            string temp;
            if(i%3 == 0 && i%5 == 0){
                temp = "FizzBuzz";
            } 
            else if(i%3 == 0){
                temp = "Fizz";
            }
            else if(i%5 == 0){
                temp = "Buzz";
            }
            else{
                temp = to_string(i); 
            }
            ans.push_back(temp);
            i++;
        }
        return ans;
        
    }
};