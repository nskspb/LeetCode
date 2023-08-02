#include <iostream>
#include <string>
#include <vector>
#include <stack>

bool isValid(std::string s)
{
    std::stack<char> str;

    for (auto i : s)
    {
        if (i == '(')
            str.push('(');
        else if (i == '{')
            str.push('{');
        else if (i == '[')
            str.push('[');
        else
        {
            if (str.size() == 0)
                return false;
            else if (str.top() == '{' && i == '}')
                str.pop();
            else if (str.top() == '(' && i == ')')
                str.pop();
            else if (str.top() == '[' && i == ']')
                str.pop();
            else
                return false;
        }
    }
    if (str.size() == 0)
        return true;

    return false;
}

int main()
{

    std::cout << isValid("()") << std::endl;
    return 0;
}