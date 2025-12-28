class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> store;
        int n = temperatures.size();
        vector<int> result(n,0);
        for(int i=0;i<n;i++){
            int t = temperatures[i];
            while(!store.empty() && t>store.top().first){
                auto index = store.top();
                store.pop();
                result[index.second] = i - index.second;
            }
            store.push({t,i});
        }
        return result;
    }
};