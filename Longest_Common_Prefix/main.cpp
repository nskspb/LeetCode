#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string> &strs)
{
    std::string ans = "";
    std::sort(strs.begin(), strs.end());
    std::string first = strs[0];
    std::string last = strs[strs.size() - 1];

    for (int i = 0; i < std::min(first.size(), last.size()); ++i)
    {
        if (first[i] == last[i])
        {
            ans += first[i];
        }
        else
            return ans;
    }
    return ans;
}

int main()
{
    std::vector<std::string> lol{
        "rar123123123", "rar0001111", "rarwwq", "rarfds"};
    std::cout
        << longestCommonPrefix(lol) << std::endl;
    return 0;
}