#include <iostream>
#include <stack>

using namespace std;

template <typename T>

void printstack(stack<T> st)
{

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}

int main()
{

    stack<int> s1;

    for (int i = 1; i <= 10; i++)
    {
        s1.push(i+10);
    }

    cout << "Size of stack : " << s1.size() << endl;
    cout << "Top of stack : " << s1.top() << endl;

    printstack(s1);
    return 0;
}