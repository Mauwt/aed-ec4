#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;

class Solution
{
private:
    struct info
    {
        int idx = -1;
        bool repeated = false;
    };

public:
    int firstUniqChar(string s)
    {

        unordered_map<char, info> chars;

        for (int i = 0; i < s.size(); i++)
        {
            if (chars.find(s[i]) == chars.end())
                chars[s[i]] = {i, false};
            else
                chars[s[i]].repeated = true;
        }

        int min_idx = -1;
        for (auto it = chars.begin(); it != chars.end(); it = next(it))
        {

            bool not_repeated = !(it->second.repeated);
            int curr_idx = it->second.idx;

            if (not_repeated && min_idx == -1)
                min_idx = curr_idx;

            else if (not_repeated && min_idx > curr_idx)
                min_idx = curr_idx;
        }

        return min_idx;
    }
};

int main()
{
    auto sol = Solution();
    int out1 = sol.firstUniqChar("leetcode");

    cout << out1 << endl;

    int out2 = sol.firstUniqChar("loveleetcode");

    cout << out2 << endl;

    int out3 = sol.firstUniqChar("aabb");

    cout << out3 << endl;

    return 0;
}