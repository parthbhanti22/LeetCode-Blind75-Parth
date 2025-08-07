class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int size = candies.size();

        vector<bool> result;
        for(int i=0;i<size;i++){
            candies[i] = candies[i] + extraCandies;
            int max = *max_element(candies.begin(),candies.end());
            if(max == candies[i]){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
            candies[i] = candies[i] - extraCandies;
        }
        return result;
    }
};