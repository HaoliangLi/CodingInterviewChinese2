/*** 
 * @Date: 2021-11-28 13:56:29
 * @LastEditors: zjulhl
 * @LastEditTime: 2021-11-28 14:25:28
 * @Description: 
 * @FilePath: /CodingInterviewChinese2/24_ReverseList/main24_2.cpp
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
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *cur = head, *pre = nullptr;
        while (cur != nullptr)
        {
            ListNode *tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = cur->next;
        }
        return pre;
    }
};

