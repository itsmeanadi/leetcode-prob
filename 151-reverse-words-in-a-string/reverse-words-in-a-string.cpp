class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        int n = s.size();
        int i = 0;

        while (i < n) {
            while (i < n && s[i] == ' ')
                i++;

            if (i >= n) break;

            string word = "";
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            ans.push_back(word);
        }
        string anss = "";
        for (int i = ans.size() - 1; i >= 0; i--) {
            anss += ans[i];
            if (i != 0) anss += " ";
        }
        return anss;
    }
};