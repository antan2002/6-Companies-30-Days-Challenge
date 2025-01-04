class Solution
{
public:
    int solve(vector<int> &nums, int k)
    {
        if (k < 0)
            return 0;
        int i = 0, j = 0, sum = 0, ans = 0;
        while (j < nums.size())
        {
            sum += (nums[j] % 2);
            while (sum > k)
            {
                sum -= (nums[i] % 2);
                i++;
            }
            ans += j - i + 1;
            j++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        return solve(nums, k) - solve(nums, k - 1);
    }
};