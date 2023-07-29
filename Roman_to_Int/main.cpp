#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

int romanToInt(std::string s)
{
    std::map<char, int> mp;

    int ans = 0;

    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    for (int i = 0; i < s.length(); ++i)
    {
        if (mp[s[i]] < mp[s[i + 1]])
        {
            ans -= mp[s[i]];
        }
        else
        {
            ans += mp[s[i]];
        }
    }
    return ans;
}

int main()
{

    std::cout << romanToInt("IX") << std::endl;
    return 0;
}