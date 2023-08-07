#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

std::vector<int> sortedSquares(std::vector<int> &nums)
{
    int s = nums.size();
    int n = 0;
    int k = s - 1;
    std::vector<int> result(s);

    int r = s - 1;
    while (k >= n)
    {
        if (abs(nums[k]) >= abs(nums[n]))
        {
            result[r--] = pow(nums[k], 2);
            k--;
        }
        else
        {
            result[r--] = pow(nums[n], 2);
            n++;
        }
    }

    return result;
}

int main()
{
    std::vector<int> vect = {-10, -3, 0, 1, 2, 3, 6, 8, 12};
    std::vector<int> result = sortedSquares(vect);
    for (size_t i = 0; i < result.size(); ++i)
    {
        std::cout << result[i] << "  ";
    }
    std::cout << std::endl;

    return 0;
}