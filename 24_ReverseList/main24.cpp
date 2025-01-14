/*** 
 * @Date: 2021-11-28 13:42:57
 * @LastEditors: zjulhl
 * @LastEditTime: 2021-11-28 13:49:47
 * @Description: 
 * @FilePath: /CodingInterviewChinese2/24_ReverseList/main24.cpp
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

public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *pre = head;
        while (pre)
        {
            s.push(pre->val);
            pre = pre->next;
        }
        pre = head;
        while(!s.empty())
        {
            pre->val=s.top();
            s.pop();
            pre=pre->next;
        }
        return head;
    }
};