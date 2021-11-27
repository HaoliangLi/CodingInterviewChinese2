/*** 
 * @Date: 2021-11-27 17:36:41
 * @LastEditors: zjulhl
 * @LastEditTime: 2021-11-27 18:00:29
 * @Description: 
 * @FilePath: /CodingInterviewChinese2/09_QueueWithTwoStacks/main09.cpp
 */
class CQueue
{
    stack<int> stack1, stack2;

public:
    CQueue()
    {
        while (!stack1.empty())
        {
            stack1.pop();
        }
        while (!stack2.empty())
        {
            stack2.pop();
        }
    }

    void appendTail(int value)
    {
        stack1.push(value);
    }

    int deleteHead()
    {
        // 如果第二个栈为空
        if (stack2.empty())
        {
            while (!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if (stack2.empty())
        {
            return -1;
        }
        else
        {
            int deleteItem = stack2.top();
            stack2.pop();
            return deleteItem;
        }
    }
};
