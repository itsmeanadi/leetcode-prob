class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        if(s.size() == 0){
            return true;
        }

        if(s.size() > t.size()){
            return false;
        }
        while(i<t.size()){
            if(s[j] == t[i]){
                j++;
            }
            if(j == s.size()){
                return true;
            }
            i++;
        }
        return false;
    }
};