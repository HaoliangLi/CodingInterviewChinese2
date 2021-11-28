/*** 
 * @Date: 2021-11-29 00:28:40
 * @LastEditors: zjulhl
 * @LastEditTime: 2021-11-29 00:48:40
 * @Description: 
 * @FilePath: /CodingInterviewChinese2/05_ReplaceSpaces/main05.cpp
 * 
 * s2.push_back('%'); s2.push_back('2'); s2.push_back('0');
 * 执行用时：0ms，在所有C++提交中击败了100.00%的用户
 * 内存消耗：6.1MB，在所有C++提交中击败了60.16%的用户
 * 
 * s2 += "%20";
 * 执行用时：0ms，在所有C++提交中击败了100.00%的用户
 * 内存消耗：6.1MB，在所有C++提交中击败了56.46%的用户
 */
#include <iostream>

using namespace std;

class Solution
{
public:
    string replaceSpace(string s)
    {
        string s2;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                // s2 += "%20";
                s2.push_back('%');
                s2.push_back('2');
                s2.push_back('0');
            }
            else
            {
                s2.push_back(s[i]);
            }
        }
        return s2;
    }
};