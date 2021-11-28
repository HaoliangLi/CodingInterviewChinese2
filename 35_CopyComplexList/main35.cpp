/*** 
 * @Date: 2021-11-28 14:38:46
 * @LastEditors: zjulhl
 * @LastEditTime: 2021-11-29 00:26:15
 * @Description: 
 * @FilePath: /CodingInterviewChinese2/35_CopyComplexList/main35.cpp
 */
#include <vector>
#include <stack>
#include <iostream>

#include <stack>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == nullptr)
        {
            return nullptr;
        }
        // 复制所有的
        for (Node *node = head; node != nullptr; node = node->next->next)
        {
            Node *nodeNew = new Node(node->val); 
            nodeNew->next = node->next;
            node->next = nodeNew;
        }
        for (Node *node = head; node != nullptr; node = node->next->next)
        {
            Node *nodeNew = node->next;
            nodeNew->random = (node->random != nullptr) ? node->random->next : nullptr;
        }
        Node *headNew = head->next;
        for (Node *node = head; node != nullptr; node = node->next)
        {
            Node *nodeNew = node->next;
            node->next = node->next->next;
            nodeNew->next = (nodeNew->next != nullptr) ? nodeNew->next->next : nullptr;
        }
        return headNew;
    }
};
