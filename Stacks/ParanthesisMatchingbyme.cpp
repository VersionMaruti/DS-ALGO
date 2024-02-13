#include <iostream>
using namespace std;

#define n 100

class stack
{
public:
    int top;
    char *arr;

    stack()
    {
        arr = new char[n];
        top = -1;
    }

    bool isempty()
    {
        return top == -1;
    }

    int isfull()
    {
        if (top == n - 1)
        {
            return 1;
        }
        return 0;
    }

    void push(char val)
    {
        if (isfull())
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop()
    {
        if (isempty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
    }

    int paranthesischecking(char *exp)
    {
        for (int i = 0; exp[i] != '\0'; i++)
        {
            if (exp[i] == '(')
            {
                push('(');
            }
            else if (exp[i] == ')')
            {
                if (isempty() || arr[top] != '(')
                {
                    return 0;
                }
                pop();
            }
        }
        return isempty(); // Returns 1 if the stack is empty (all parentheses matched)
    }
};

int main()
{
    stack st; // Creating an object of the stack class

    char *exp = "((8)(*--$$9))";

    if (st.paranthesischecking(exp))
    {
        cout << "Matched" << endl;
    }
    else
    {
        cout << "Not matched" << endl;
    }

    return 0;
}
