class Solution
{
public:
    string getHint(string secret, string guess)
    {
        unordered_map<char, int> map1, map2;
        int bull = 0;
        int cow = 0;
        for (int i = 0; i < secret.size(); i++)
        {
            if (secret[i] == guess[i])
                bull++;
            else
            {
                map1[secret[i]]++;
                map2[guess[i]]++;
            }
        }
        for (auto it : map1)
        {
            if (map1.find(it.first) != map2.end())
            {
                cow += min(it.second, map2[it.first]);
            }
        }
        string result = to_string(bull) + 'A' + to_string(cow) + 'B';
        return result;
    }
};