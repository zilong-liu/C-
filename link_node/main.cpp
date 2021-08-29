#include <iostream>

using namespace std;

struct linkRec
{
    int data;
    linkRec *next;
};

int main()
{
    int x;
    linkRec *head,*p,*rear;//头指针，链接指针，尾指针
    head = rear = new linkRec;
    while(true)
    {
        cin>>x;
        if (x==0) break;
        p = new linkRec;
        p->data = x;
        rear ->next = p;
        rear = p;
    }

    rear ->next = NULL;
    cout<<"链表的内容为："<<endl;
    p = head->next;//头节点没有储存东西。
    while (p!=NULL)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<endl;
    return 0;
}
