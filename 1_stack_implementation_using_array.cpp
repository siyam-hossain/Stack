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
    //creating static object
    mystack stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    cout<<"after push: ";
    cout<<stk.top()<<endl;

    stk.pop();
    cout<<"after pop: ";
    cout<<stk.top()<<endl;
    
    cout<<"size: ";
    cout<<stk.size()<<endl;

    cout<<"is empty: ";
    cout<<stk.empty()<<endl;

    stk.pop();
    stk.pop();
    stk.pop();

    // to avoide run time error while printing top when stack empty
    //it provide runtime error 
    // cout<<stk.top()<<endl;
    
    //this isn't
    // if(stk.empty() == false)
    if(!stk.empty())
    {
        cout<<stk.top()<<endl;
    }
    //similar case for pop

    return 0;
}
