class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> visited;
        int len = nums.size();
        for (int i = 0 ; i <len;i++)
        {
            int n = nums[i];
            int comp = target - n;
            if(visited.count (comp))
            {
                return {visited[comp],i};
            }
            visited[n]=i;
        }
        return {};
    }
};
