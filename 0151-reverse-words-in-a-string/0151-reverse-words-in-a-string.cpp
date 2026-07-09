class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, ans;
        while(ss >> word){
            if(ans.empty())
            ans = word;
            else
                ans = word + " " + ans;
        }
        return ans;
    }
};