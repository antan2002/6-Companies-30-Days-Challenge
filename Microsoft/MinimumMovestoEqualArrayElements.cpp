int minMoves2(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int count = 0;
    int l = 0, h = n - 1;
    while (l < h)
    {
        count += abs(nums[h] - nums[l]);
        l++;
        h--;
    }
    return count;
}