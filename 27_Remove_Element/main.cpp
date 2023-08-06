#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int removeElement(std::vector<int> &nums, int val)
{
    int count = 0;
    for (size_t i = 0; i < nums.size(); ++i)
    {

        if (nums[i] == val)
        {
            nums[i] = INT16_MAX;
            count++;
        }
    }

    std::sort(nums.begin(), nums.end());

    return nums.size() - count;
}

int main()
{
    std::vector<int> vect = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    std::cout << removeElement(vect, val) << std::endl;
    for (size_t i = 0; i < vect.size(); ++i)
    {

        std::cout << vect[i] << "   ";
    }
    std::cout << std::endl;

    return 0;
}