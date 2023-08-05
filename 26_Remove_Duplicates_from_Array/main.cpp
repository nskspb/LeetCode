#include <iostream>
#include <string>
#include <vector>

int removeDuplicates(std::vector<int> &nums)
{
    int j = 1;
    for (size_t i = 0; i < nums.size() - 1; ++i)
    {
        if (nums[i + 1] != nums[i])
        {
            nums[j] = nums[i + 1];
            j++;
        }
    }
    return j;
}

int main()
{
    std::vector<int> vect = {1, 1, 1, 2, 2, 3, 4, 5};
    std::cout << removeDuplicates(vect) << std::endl;
    return 0;
}