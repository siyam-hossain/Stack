#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int val;
    node *next;
    node *prev;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class mystack
{
    public:
    
    //initial 2 node
    node *head = NULL, *tail = NULL;

    int trc_sz = 0;

    void push(int val) //O(1)
    {
        trc_sz++;
        node *nNode = new node(val);
        if(head == NULL)
        {
            head = nNode;
            tail = nNode;
            return;
        }
        tail->next = nNode;
        nNode->prev = tail;
        tail = nNode;
    }
    void pop() //O(1)
    {
        trc_sz--;
        node *del = tail;
        tail = tail->prev;
        delete del;
        if(tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top() //O(1)
    {
        return tail->val;
    }
    int size()  //O(1)
    {
        return trc_sz;
    }
    bool empty() //O(1)
    {
        return head==NULL;
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
