/*** 
 * @Date: 2021-11-28 12:38:47
 * @LastEditors: zjulhl
 * @LastEditTime: 2021-11-28 13:23:07
 * @Description:  practice 1st
 * @FilePath: /CodingInterviewChinese2/06_PrintListInReversedOrder/main06.cpp
 */

#include <vector>
#include <stack>
#include <iostream>

using namespace std;
struct ListNode
{
    int val;                                //当前结点的值
    ListNode *next;                         //指向下一个结点的指针
    ListNode(int x) : val(x), next(NULL) {} //初始化当前结点值为x,指针为空
};

class Solution
{
    stack<int> s;
    vector<int> res;

public:
    vector<int> reversePrint(ListNode *head)
    {
        ListNode *pre = head;
        while (pre)
        {
            s.push(pre->val);
            pre = pre->next;
        }

        while (!s.empty())
        {
            res.push_back(s.top());
            s.pop();
        }
        return res;
    }
};