#include <iostream>

using namespace std;

struct link
{
    int data;
    link *next;
};

int main()
{
    link *head,*p,*q;
    int n, i;
    cout<<"请输入整数n:"<<endl;
    cin>>n;
    head = p = new link;
    p->data = 0;
    for (i=1;i<n;++i)
    {
        q = new link;
        q->data = i;
        p->next = q;
        p=q;
    }
    p->next = head;
    q = head;
    while(q->next!=q)
    {
        p=q->next;
        q=p->next;
        p->next = q->next;
        cout<<q->data<<'\t';
        delete q;
        q = p->next;
    }
    cout<<"剩下的是："<<q->data;
    return 0;

}
