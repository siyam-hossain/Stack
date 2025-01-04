#include<bits/stdc++.h>
using namespace std;

class mystack
{
    public:
        vector<int> s;

    void push(int val)
    {
        s.push_back(val);
    }
    void pop()
    {
        s.pop_back();
    }
    int top()
    {
        return s.back();
    }
    int size()
    {
        return s.size();
    }
    bool empty()
    {
        return s.empty();
    }
    
};

int main(int argc, char const *argv[])
{
    mystack stk;

    int sz;
    cin>>sz;
    for (int i = 0; i < sz; i++)
    {
        int x;
        cin>>x;
        stk.push(x);
    }
    //Last in first out LIFO
    //last->.......->first
    while (!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }cout<<endl;
    
    return 0;
}
