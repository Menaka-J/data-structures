#include <iostream>
#include <string>

using namespace std;

#define N 5

// template <typename T>
class Stack
{
    int stack[N];
    int top;

public:
    Stack() { top = -1; }

    void push(int newx)
    {
        if (top == N - 1)
        {
            cout << "Stack is full (Overflow)" << endl;
        }
        else
        {
            top++;
            stack[top] = newx;
            cout << newx << " is pushed into stack" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No element present in stack(Underflow)" << endl;
        }
        else
        {
            int x;
            x = stack[top];
            top--;
            cout << x << " is poped out of the stack" << endl;
        }
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "No element present in stack" << endl;
            return 0;
        }
        else
        {
            return stack[top];
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    int findsize()
    {
        if (top == -1)
            return 0;
        else
            return top + 1;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            cout << "STACK ELEMENTS : ";
            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << " ";
            }
        }
    }
};

int main()
{

    int ch, var;

    Stack s1;

    while (true)
    {
        cout << endl
             << "OPERATION AVAILABLE : " << endl;
        cout << "1)Push" << endl;
        cout << "2)Pop" << endl;
        cout << "3)Peek" << endl;
        cout << "4)Size" << endl;
        cout << "5)isEmpty" << endl;
        cout << "6)Display" << endl;
        cout << "7)Exit" << endl;
        cout << "What operation do you want to perform : ";
        cin >> ch;

        switch (ch)
        {
        case 1:

            cout << "Enter a element to push into stack : ";
            cin >> var;

            s1.push(var);
            break;

        case 2:

            s1.pop();
            break;

        case 3:

            var = s1.peek();
            cout << "Top element is : " << var << endl;

            break;

        case 4:
            var = s1.findsize();
            cout << "Size of stack is : " << var << endl;
            break;

        case 5:

            var = s1.isEmpty();
            cout << "Stack is empty or not : " << var << endl;
            break;

        case 6:
            s1.display();
            break;

        case 7:

            exit(0);
            break;

        default:
            break;
        }
    }

    return 0;
}