#include<bits/stdc++.h>
using namespace std;

class mystack
{
    public:
        vector<int> s;

    void push(int val)
    {
        s.push_back(val);//O(1)
    }
    void pop()
    {
        s.pop_back();//O(1)
    }
    int top()
    {
        return s.back();//O(1)
    }
    int size()
    {
        return s.size();//O(1)
    }
    bool empty()
    {
        return s.empty();//O(1)
    }
    
};

int main(int argc, char const *argv[])
{
    
    return 0;
}
