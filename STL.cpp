#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <map>
using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();

    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << endl;
    }
    cout << "Element at 2nd index " << a.at(2) << endl;
    cout << "Element at 1nd position " << a.front() << endl;
    cout << "Empty or not " << a.empty() << endl;
    cout << "Element at last position " << a.back() << endl;

    cout << endl;

    vector<int> v;
    cout << "Capacity of vector v " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity of vector v " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity of vector v " << v.capacity() << endl;

    v.push_back(4);
    cout << "Capacity of vector v " << v.capacity() << endl;

    cout << "Size of Vector " << v.size() << endl;

    v.pop_back();
    cout << "Size of Vector " << v.size() << endl;

    cout << v.front() << endl;
    cout << v.back() << endl;

    cout << endl;

    deque<int> d;
    d.push_back(11);
    d.push_front(10);

    cout << d.size() << endl;
    cout << d.front() << endl;
    cout << d.back() << endl;
    cout << "Print 1st element of dequeue" << d.at(1) << endl;

    cout << endl;

    list<int> l;
    l.push_back(2);
    l.push_front(3);
    l.push_back(5);
    l.push_back(6);
    l.push_front(1);

    cout << l.size() << endl;

    // created a new list n and copied all elements of l in it
    list<int> n(l);
    for (int i : n)
    {
        cout << i << " ";
    }

    cout << endl;

    stack<int> s;
    s.push(2);
    s.push(8);
    s.push(9);

    cout << "Size of stack is " << s.size() << endl;
    cout << "Top element of stack is " << s.top() << endl;
    cout << endl;

    map<int, string> m;
    m[1] = "Kabir";
    m[2] = "Kapoor";
    m[15] = "Mehak";
    m[20] = "Khanna";

    for (auto i : m)
    {
        //cout << i.first() << " ";
    }

    return 0;
}