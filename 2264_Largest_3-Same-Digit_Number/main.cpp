#include <iostream>
#include <cstring>
#include <string>

std::string largestGoodInteger(std::string num)
{
    const char *phr = NULL;
    const char *str2[10] = {"999", "888", "777", "666", "555", "444", "333", "222", "111", "000"};
    for (auto i = 0; i < 10; ++i)
    {
        phr = std::strstr(num.c_str(), str2[i]);
        if (phr)
        {
            return str2[i];
        }
    }
    phr = "";
    return phr;
}

int main()
{
    std::cout << largestGoodInteger("1232333154999655888");
    return 0;
}