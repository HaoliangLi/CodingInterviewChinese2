/*
 * @Date: 2021-11-29 01:09:50
 * @LastEditors: zjulhl
 * @LastEditTime: 2021-11-29 01:09:50
 * @Description: 
 * @FilePath: /CodingInterviewChinese2/58_02_LeftRotateString/main58_02.c
 * 
 * 执行用时：0ms，在所有C++提交中击败了100.00%的用户
 * 内存消耗：7.5MB，在所有C++提交中击败了44.10%的用户
 * 
 * 消耗的空间有些大
 */
#include <iostream>

using namespace std;

class Solution
{
public:
    string reverseLeftWords(string s, int n)
    {
        string s2;
        for (auto i = n; i < s.size(); i++)
        {
            s2.push_back(s[i]);
        }
        for (auto i = 0; i < n; i++)
        {
            s2.push_back(s[i]);
        }
        return s2;
    }
};