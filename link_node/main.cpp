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
    linkRec *head,*p,*rear;//ͷָ�룬����ָ�룬βָ��
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
    cout<<"���������Ϊ��"<<endl;
    p = head->next;//ͷ�ڵ�û�д��涫����
    while (p!=NULL)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<endl;
    return 0;
}
