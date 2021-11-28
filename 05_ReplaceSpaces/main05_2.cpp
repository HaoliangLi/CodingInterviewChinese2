/*** 
 * @Date: 2021-11-29 00:45:42
 * @LastEditors: zjulhl
 * @LastEditTime: 2021-11-29 00:49:54
 * @Description: 
 * @FilePath: /CodingInterviewChinese2/05_ReplaceSpaces/main05_2.cpp
 * 
 * 执行用时：0ms，在所有C++提交中击败了100.00%的用户
 * 内存消耗：6MB，在所有C++提交中击败了87.30%的用户
 */
#include <iostream>

using namespace std;

class Solution
{
public:
    string replaceSpace(string s)
    {                 // 字符数组
        string array; // 存储结果

        for (auto &c : s)
        { // 遍历原字符串
            if (c == ' ')
            {
                array.push_back('%');
                array.push_back('2');
                array.push_back('0');
            }
            else
            {
                array.push_back(c);
            }
        }
        return array;
    }
};