#include <iostream>
#include <queue>

using namespace std;

template <typename T>
void printQ(queue<T> Q)
{
    cout << "STACK ELEMENTS: ";
    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
}

int main()
{

    queue<string> q1;
    queue<int> q2;

    cout << "SIZE : " << q1.size() << endl;
    cout << "EMPTY : " << q1.empty() << endl;

    q1.push("Dhoni");
    q1.push("Vijay");
    q1.push("Virat");
    q1.push("Jaddu");
    cout << "SIZE : " << q1.size() << endl;
    cout << "EMPTY : " << q1.empty() << endl;

    q2.push(4);
    q2.push(3);
    q2.push(5);

    cout << "SIZE : " << q2.size() << endl;
    cout << "EMPTY : " << q2.empty() << endl;

    printQ(q1);
    printQ(q2);
    
    return 0;
}