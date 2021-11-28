/*** 
 * @Date: 2021-11-27 19:04:59
 * @LastEditors: zjulhl
 * @LastEditTime: 2021-11-28 13:26:53
 * @Description: 
 * @FilePath: /CodingInterviewChinese2/30_MinInStack/main30.cpp
 */
#include <iostream>
#include <stack>
using namespace std;

class MinStack
{
private:
    stack<int> stack_x, stack_min;

public:
    /** initialize your data structure here. */
    MinStack()
    {
        stack_min.push(INT_MAX);
    }

    void push(int x)
    {
        stack_x.push(x);
        if (x <= stack_min.top())
        {
            stack_min.push(x);
        }
    }

    void pop()
    {
        if (stack_x.top() == stack_min.top())
            stack_min.pop();
        stack_x.pop();
    }

    int top()
    {
        return stack_x.top();
    }

    int min()
    {
        return stack_min.top();
    }
};