class Solution {
public:
    string frequencySort(string s) 
    {
        string ans;
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        for(auto it:mpp)
        {
            pq.push({it.second,it.first});
        }
        while(!pq.empty())
        {
            auto[f,c]=pq.top();
            ans.append(f,c);
            pq.pop();
        }
        return ans;
    }
};