#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> stk;

    int sz;
    cin>>sz;
    for (int i = 0; i < sz; i++)
    {
        int val;
        cin>>val;

        stk.push(val);
    }
    while (!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }cout<<endl;
    
    return 0;
}
