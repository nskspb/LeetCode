#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::vector<int> result;
        for (int i = 0; i < nums.size(); ++i)
        {
            result.push_back(nums[i]);
        }
        return result;
    }
};

int main()
{
    string s = "abcdef";
    std::cout << s.
              << "sucess!" << std::endl;
    return 0;
}