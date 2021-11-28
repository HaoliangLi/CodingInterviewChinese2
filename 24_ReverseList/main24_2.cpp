/*** 
 * @Date: 2021-11-28 13:56:29
 * @LastEditors: zjulhl
 * @LastEditTime: 2021-11-28 14:31:56
 * @Description: 
 * @FilePath: /CodingInterviewChinese2/24_ReverseList/main24_2.cpp
 * 执行用时：8ms，在所有C++提交中击败了 44.85%的用户
 * 内存消耗：8MB，在所有C++提交中击败了 83.15%的用户
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
            ListNode *tmp = cur->next; // 暂存后继节点 cur.next
            cur->next = pre;           // 修改 next 引用指向
            pre = cur;                 // pre 暂存 cur
            cur = tmp;                 // cur 访问下一节点
        }
        return pre;
    }
};
