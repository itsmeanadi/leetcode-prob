class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int ten = 0;
        int five = 0;
        for(int i  = 0 ; i < bills.size() ; i++){
            int c = bills[i];
            if(c == 5){
                five++;
            }
            else if(c == 10){
                if(five>0){
                    ten++;
                    five--;
                }
                else{
                    return false;
                }
            }
            else{
                if(ten>0 && five >0){
                    five--;
                    ten--;
                } 
                else if(ten == 0 && five >2){
                    five--;
                    five--;
                    five--;
                }
                else{
                    return false;
                }

            }
            if(five< 0 || ten < 0){
                return false;
            }

        }    
        return true;    
    }
};