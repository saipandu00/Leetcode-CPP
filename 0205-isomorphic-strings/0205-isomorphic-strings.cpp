class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int arr1[256] = {0};
        int arr2[256] = {0};
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (arr1[(unsigned char)s[i]] != arr2[(unsigned char)t[i]])
                return false;
            arr1[(unsigned char)s[i]] = i + 1;
            arr2[(unsigned char)t[i]] = i + 1;
        }
        return true;
    }
};