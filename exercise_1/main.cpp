#include <iostream>
using namespace std;
void print_table();//��ӡ�˷�����
void print_star(int);//��ӡ���Ǻ���
int main()
{
    cout<<"�žų˷���"<<endl;
    print_table();
    cout<<"���Ǿ���"<<endl;
    print_star(5);
    return 0;
}

void print_star(int num_line)
{
    int i,j,k;
    for (i= num_line;i>0;--i)
    {
        for (j=i-1;j>0;--j)//��ӡ�ո�
        {
            cout<<' ';
        }
        for (k = (num_line+1-i)*2-1;k>0;--k)//��ӡ����
        {
            cout<<'*';
        }
        cout<<endl;
    }
}
void print_table()
{
    int i,j;
    for (i=1;i<10;++i)
    {
        for (j=1;j<=i;++j)
        {
         cout<<j<<'x'<<i<<'='<<i*j<<'\t';
        }
        cout<<endl;
    }
}
