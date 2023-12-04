#include <iostream>
#include <string>

using namespace std;

string largestGoodInteger(string num)
{
    char *phr;
    phr = std::strstr(num, "999");
    return phr;
}

int main()
{
    std::cout << largestGoodInteger("12321546999");
    return 0;
}