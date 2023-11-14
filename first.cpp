#include <bits/stdc++.h>
using namespace std;

void explainPairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << "->" << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << "->" << arr[i].second << endl;
    }
}

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    // Vector of pair datatype
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i].first << "->" << vec[i].second << " ";
    cout << endl;
    // Declaring size and inital value of vector
    vector<int> v1(5, 100);
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;
    // Declaring only size of the vector
    vector<int> v2(5);
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;
    // Copying a vector
    vector<int> copying(v1);
    for (int i = 0; i < copying.size(); i++)
        cout << copying[i] << " ";
    cout << endl;
    // Accessing the elements in vector
    for (int i = 0; i < v1.size(); i++)
        cout << v1.at(i) << " ";
    cout << endl;
    vector<int>::iterator it = v1.begin();
    cout << *(it) << endl;
    it++;
    cout << *(it) << endl;
}

void explainList()
{
    list<int> ls;
    for (auto i : ls)
        cout << i << " ";
    cout << endl;
    ls.push_back(2);
    for (auto i : ls)
        cout << i << " ";
    cout << endl;
    ls.emplace_back(4);
    for (auto i : ls)
        cout << i << " ";
    cout << endl;
    ls.push_front(5);
    for (auto i : ls)
        cout << i << " ";
    cout << endl;
    ls.emplace_front(99);
    for (auto i : ls)
        cout << i << " ";
    cout << endl;
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);
}

void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);
    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.empty() << endl;
}

int main()
{
    explainStack();
    return 0;
}