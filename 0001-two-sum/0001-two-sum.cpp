class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int complement = target - nums[i];
            if(umap.count(complement) && umap[complement]!=i){
                return {i,umap[complement]};
            }
            umap[nums[i]] = i;
            
        }

        return {};
    }
};